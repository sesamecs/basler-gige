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

using namespace Basler_GigECameraParams;
using namespace Pylon;
using namespace GenApi;
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

	printf("Acquiring image from %s @ %s...\r\n", configurations[device].name, configurations[device].ip);

	Pylon::PylonAutoInitTerm autoInitTerm;

	// Create and open an instant camera object with the specific camera device.
	CTlFactory& TlFactory = CTlFactory::GetInstance();
	CBaslerGigEDeviceInfo di; 
	di.SetIpAddress(configurations[device].ip);
	IPylonDevice* dev = TlFactory.CreateDevice(di);
	CBaslerGigECamera camera(dev);
	camera.Open();
	
	camera.PixelFormat.SetValue(PixelFormat_Mono8);
	camera.OffsetX.SetValue(0);
	camera.OffsetY.SetValue(0);
	camera.Width.SetValue(camera.Width.GetMax());
	camera.Height.SetValue(camera.Height.GetMax());

	camera.AcquisitionMode.SetValue(AcquisitionMode_SingleFrame);

	camera.TriggerSelector.SetValue(TriggerSelector_AcquisitionStart);
	camera.TriggerMode.SetValue(TriggerMode_Off);
	camera.TriggerSelector.SetValue(TriggerSelector_FrameStart);
	camera.TriggerMode.SetValue(TriggerMode_On);
	camera.TriggerSource.SetValue(TriggerSource_Line1);
	camera.TriggerActivation.SetValue(TriggerActivation_RisingEdge);

	//camera.ExposureMode.SetValue(ExposureMode_Timed);
	//camera.ExposureTimeAbs.SetValue(800000);

	// Create an image buffer
	const size_t ImageSize = (size_t)(camera.PayloadSize.GetValue());
	uint8_t * const pBuffer = new uint8_t[ ImageSize ];

	// Get and open the first stream grabber object of the selected camera
	CBaslerGigECamera::StreamGrabber_t StreamGrabber(camera.GetStreamGrabber(0));
	StreamGrabber.Open();

	// We won't use image buffers greater than ImageSize
	StreamGrabber.MaxBufferSize.SetValue(ImageSize);

	// We won't queue more than one image buffer at a time
	StreamGrabber.MaxNumBuffer.SetValue(1);

	// Allocate all resources for grabbing. Critical parameters like image
	// size now must not be changed until FinishGrab() is called.
	StreamGrabber.PrepareGrab();

	// Buffers used for grabbing must be registered at the stream grabber.
	// The registration returns a handle to be used for queuing the buffer.
	const StreamBufferHandle hBuffer = StreamGrabber.RegisterBuffer(pBuffer, ImageSize);

	// Put the buffer into the grab queue for grabbing
	StreamGrabber.QueueBuffer(hBuffer, NULL);

	// Let the camera acquire one single image ( Acquisiton mode equals SingleFrame! )
	camera.AcquisitionStart.Execute();

	/*
	camera.TriggerSelector.SetValue(TriggerSelector_FrameStart);
	camera.TriggerSoftware.Execute();
	*/

	if (StreamGrabber.GetWaitObject().Wait(5000))
	{
		// Get the grab result from the grabber's result queue
		GrabResult Result;
		StreamGrabber.RetrieveResult(Result);

		if (Result.Succeeded())
		{
			// Grabbing was successful, process image
			cout << "Image acquired..." << endl;
			cout << "Size: " << Result.GetSizeX() << " x " << Result.GetSizeY() << endl;

			// Get the pointer to the image buffer
			for (uint32_t i = 0; i < length; i++)
				buffer[i] = ((uint8_t *)Result.Buffer())[i];
			cout << "Gray value of first pixel: " << (uint32_t) buffer[0] << endl << endl;
		}
		else
		{
			// Error handling
			cerr << "No image acquired!" << endl;
			cerr << "Error code : 0x" << hex
			<< Result.GetErrorCode() << endl;
			cerr << "Error description : "
			<< Result.GetErrorDescription() << endl;
		}
	}
	else 
	{
		// Timeout
		cerr << "Timeout occurred!" << endl;

		// Get the pending buffer back (You are not allowed to deregister
		// buffers when they are still queued)
		StreamGrabber.CancelGrab();

		// Get all buffers back
		for (GrabResult r; StreamGrabber.RetrieveResult(r););
	}

	// Clean up

	// You must deregister the buffers before freeing the memory
	StreamGrabber.DeregisterBuffer(hBuffer);

	// Free all resources used for grabbing
	StreamGrabber.FinishGrab();

	// Close stream grabber
	StreamGrabber.Close();

	// Close camera
	camera.Close();

	// Free memory of image buffer
	delete[] pBuffer;

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
