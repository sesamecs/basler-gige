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

using namespace std;
using namespace Basler_GigECameraParams;
using namespace Pylon;

/*
 * Macros
 */
#define NUMBER_OF_DEVICES	3

typedef enum
{
	OPCODE_CAPTURE		,
	OPCODE_SET_EXPOSURE	,
	OPCODE_GET_EXPOSURE
} opcode_t;

typedef struct
{
	char		name	[30];
	char		ip		[30];
	pthread_t	handle;
	opcode_t	opcode;
	uint8_t*	imageBuffer;
	uint32_t	imageSize;
	uint32_t	exposure;
} configuration_t;

/*
 * Private members
 */
static	configuration_t			configurations[NUMBER_OF_DEVICES];
static	int						deviceCount		=	0;
static	pthread_mutex_t			mutex 			= PTHREAD_MUTEX_INITIALIZER;
static	pthread_cond_t  		condition		= PTHREAD_COND_INITIALIZER;

/*
 * Private function prototypes
 */
static	long	init(void);
static	long	report(int detail);
static	void* 	thread(void* arg);
static	void	capture(CBaslerGigECamera* camera, uint8_t *image, uint32_t imageSize);
static	void	setExposure(CBaslerGigECamera* camera, uint32_t exposure);
static	void	getExposure(CBaslerGigECamera* camera, uint32_t *exposure);

/*
 * Function definitions
 */

static long 
init(void)
{
	int	device; 
	int status;

	/*Create and start thread for each configured camera*/
	for (device = 0; device < deviceCount; device++)
	{
		status	=	pthread_create(&configurations[device].handle, NULL, thread, (void*)&configurations[device]);	
		if (status)
		{
			errlogPrintf("Unable to initialize camera %s: Unable to create thread\r\n", configurations[device].name);
			return -1;
		}
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
basler_capture(basler_t device, uint8_t *imageBuffer, uint32_t imageSize)
{
	configurations[device].imageBuffer	=	imageBuffer;
	configurations[device].imageSize	=	imageSize;
	configurations[device].opcode		=	OPCODE_CAPTURE;

	pthread_mutex_lock(&mutex);
	pthread_cond_signal(&condition);
	pthread_cond_wait(&condition, &mutex);
	pthread_mutex_unlock(&mutex);

	return 0;
}

long
basler_setExposure(basler_t device, uint32_t exposure)
{
	configurations[device].exposure		=	exposure;
	configurations[device].opcode		=	OPCODE_SET_EXPOSURE;

	pthread_mutex_lock(&mutex);
	pthread_cond_signal(&condition);
	pthread_cond_wait(&condition, &mutex);
	pthread_mutex_unlock(&mutex);

	return 0;
}

long
basler_getExposure(basler_t device, uint32_t* exposure)
{
	configurations[device].opcode		=	OPCODE_GET_EXPOSURE;

	pthread_mutex_lock(&mutex);
	pthread_cond_signal(&condition);
	pthread_cond_wait(&condition, &mutex);

	*exposure	=	configurations[device].exposure;
	pthread_mutex_unlock(&mutex);

	return 0;
}

void*
thread(void* arg)
{
	configuration_t*		configuration	=	(configuration_t*)arg;
	PylonAutoInitTerm 		autoInitTerm;
	CTlFactory&				TlFactory		= 	CTlFactory::GetInstance();
	CBaslerGigEDeviceInfo	di; 
	di.SetIpAddress(configuration->ip);
	IPylonDevice*			dev 			= 	TlFactory.CreateDevice(di);
	CBaslerGigECamera		camera(dev);

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

	while (true)
	{
		pthread_mutex_lock(&mutex);
		pthread_cond_wait(&condition, &mutex);

		switch (configuration->opcode)
		{
			case OPCODE_CAPTURE:
				capture(&camera, configuration->imageBuffer, configuration->imageSize);
				break;
			case OPCODE_SET_EXPOSURE:
				setExposure(&camera, configuration->exposure);
				break;
			case OPCODE_GET_EXPOSURE:
				getExposure(&camera, &configuration->exposure);
				break;
		}

		pthread_cond_signal(&condition);
		pthread_mutex_unlock(&mutex);
	}

	camera.Close();

	return NULL;
}

static void
capture(CBaslerGigECamera* camera, uint8_t* imageBuffer, uint32_t imageSize)
{
	// Get and open the first stream grabber object of the selected camera
	CBaslerGigECamera::StreamGrabber_t StreamGrabber(camera->GetStreamGrabber(0));
	StreamGrabber.Open();

	// We won't use image buffers greater than ImageSize
	StreamGrabber.MaxBufferSize.SetValue(imageSize);

	// We won't queue more than one image buffer at a time
	StreamGrabber.MaxNumBuffer.SetValue(1);

	StreamGrabber.PrepareGrab();
	const StreamBufferHandle hBuffer = StreamGrabber.RegisterBuffer(imageBuffer, imageSize);
	StreamGrabber.QueueBuffer(hBuffer, NULL);

	camera->AcquisitionStart.Execute();

	if (StreamGrabber.GetWaitObject().Wait(5000))
	{
		GrabResult Result;
		StreamGrabber.RetrieveResult(Result);

		if (Result.Succeeded())
		{
			cout << "Image acquired..." << endl;
			cout << "Size: " << Result.GetSizeX() << " x " << Result.GetSizeY() << endl;
			cout << "Gray value of first pixel: " << (uint32_t) imageBuffer[0] << endl << endl;
		}
		else
		{
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

	StreamGrabber.DeregisterBuffer(hBuffer);
	StreamGrabber.FinishGrab();
	StreamGrabber.Close();
}

static void
setExposure(CBaslerGigECamera* camera, uint32_t exposure)
{
	camera->ExposureMode.SetValue(ExposureMode_Timed);
	camera->ExposureTimeAbs.SetValue(exposure);
}

static void
getExposure(CBaslerGigECamera* camera, uint32_t* exposure)
{
	*exposure	=	camera->ExposureTimeAbs.GetValue();
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
