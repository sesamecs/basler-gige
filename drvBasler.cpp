/*
 * Headers
 */
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <pthread.h>
#include <arpa/inet.h>

#include <epicsExport.h>
#include <drvSup.h>
#include <errlog.h>
#include <iocsh.h>

#include <pylon/PylonIncludes.h>
#include <pylon/gige/BaslerGigECamera.h>
#include <pylon/gige/BaslerGigECamera.h>

#include "drvBasler.h"

using namespace Pylon;
using namespace std;

/*
 * Macros
 */
#define NUMBER_OF_DEVICES	3

typedef struct
{
	char	name	[30];
	char	ip		[30];
} configuration_t;

/*
 * Private members
 */
static	configuration_t	configurations[NUMBER_OF_DEVICES];
static	int				deviceCount	=	0;
static	pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * Private function prototypes
 */
static	long	init(void);
static	long	report(int detail);

/*
 * Function definitions
 */

static long 
init(void)
{
	int					device; 
	int 				status;

	for (device = 0; device < deviceCount; device++)
	{
		/*TODO: Connect to all cameras*/
		status = status;
	}

	return 0;
}

basler_t
basler_open(char *deviceName)
{
	int device;

	for (device = 0; device < deviceCount; device++)
	{
		if (strcmp(configurations[device].name, deviceName) == 0)
			return (basler_t)device;
	}

    errlogPrintf("Unable to open device: device %s not found\r\n", deviceName);
	return -1;
}

long
basler_read(basler_t device, uint8_t *buffer, uint32_t length)
{
	/*Acquire mutex, start IO, release mutex*/
	pthread_mutex_lock(&mutex);

	if (device < 0)
	{
		errlogPrintf("Unable to read from device: Negative handle\r\n");
		pthread_mutex_unlock(&mutex);
		return -1;
	}
	if (!buffer)
	{
		errlogPrintf("Unable to read from device: NULL pointer to buffer\r\n");
		pthread_mutex_unlock(&mutex);
		return -1;
	}

	Pylon::PylonAutoInitTerm autoInitTerm;

	// Create an instant camera object with the specific camera device.
	CTlFactory& TlFactory = CTlFactory::GetInstance();
	CBaslerGigEDeviceInfo di; 
	di.SetIpAddress(configurations[device].ip);
	IPylonDevice* dev = TlFactory.CreateDevice(di);

	CInstantCamera camera(dev);
	// Print the model name of the camera.
	cout << "Using device " << camera.GetDeviceInfo().GetModelName() << endl;

	// Start the grabbing of c_countOfImagesToGrab images.
	// The camera device is parameterized with a default configuration which
	// sets up free-running continuous acquisition.
	camera.StartGrabbing(1);

	// This smart pointer will receive the grab result data.
	CGrabResultPtr ptrGrabResult;

	// Camera.StopGrabbing() is called automatically by the RetrieveResult() method
	// when c_countOfImagesToGrab images have been retrieved.
	while ( camera.IsGrabbing())
	{
		// Wait for an image and then retrieve it. A timeout of 5000 ms is used.
		camera.RetrieveResult( 5000, ptrGrabResult, TimeoutHandling_ThrowException);

		// Image grabbed successfully?
		if (ptrGrabResult->GrabSucceeded())
		{
			// Access the image data.
			cout << "SizeX: " << ptrGrabResult->GetWidth() << endl;
			cout << "SizeY: " << ptrGrabResult->GetHeight() << endl;
			for (uint32_t i = 0; i < length; i++)
				buffer[i]	= ((uint8_t *)ptrGrabResult->GetBuffer())[i];
			cout << "Gray value of first pixel: " << (uint32_t)buffer[0] << endl << endl;
		}
		else
		{
			cout << "Error: " << ptrGrabResult->GetErrorCode() << " " << ptrGrabResult->GetErrorDescription();
		}
	}

	pthread_mutex_unlock(&mutex);
	return 0;
}

static long
report(int detail)
{
	int device;

	if (detail || !detail)
	{
		for (device = 0; device < deviceCount; device++)
			printf("Found %s @ %s\r\n", configurations[device].name, configurations[device].ip);
	}
	return 0;
}

/*
 * Configuration and registration functions and variables
 */
static 	const 	iocshArg		configureArg0 	= 	{ "name",	iocshArgString };
static 	const 	iocshArg		configureArg1 	= 	{ "ip", 	iocshArgString };
static 	const 	iocshArg*		configureArgs[] = 
{
    &configureArg0,
    &configureArg1
};
static	const	iocshFuncDef	configureDef	=	{ "baslerConfigure", 2, configureArgs };
static 	long	configure(char *name, char *ip)
{
	char	buffer[INET_ADDRSTRLEN];

	if (!name || strlen(name) == 0)
	{
		errlogPrintf("Unable to configure device: Missing name\r\n");
		return -1;
	}
	if (!ip || !strlen(ip) || inet_pton(AF_INET, ip, buffer) < 0)
	{
		errlogPrintf("Unable to configure device: Missing or incorrect IP address\r\n");
		return -1;
	}
	if (deviceCount >= NUMBER_OF_DEVICES)
	{
		errlogPrintf("Unable to configure device: Too many devices\r\n");
		return -1;
	}

	strcpy(configurations[deviceCount].name, name);
	strcpy(configurations[deviceCount].ip, ip);

	deviceCount++;

	return 0;
}

static void configureFunc (const iocshArgBuf *args)
{
    configure(args[0].sval, args[1].sval);
}

static void baslerRegister(void)
{
	iocshRegister(&configureDef, configureFunc);
}

/*
 * Registry export
 */
static drvet drvBasler = {
    2,
    NULL,
    init
};
epicsExportAddress(drvet, drvBasler);
epicsExportRegistrar(baslerRegister);
