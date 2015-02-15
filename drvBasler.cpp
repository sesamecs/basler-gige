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
	OPCODE_GET_IMAGE			,
	OPCODE_SET_GAIN_AUTO		,
	OPCODE_GET_GAIN_AUTO		,
	OPCODE_SET_GAIN				,
	OPCODE_GET_GAIN				,
	OPCODE_SET_EXPOSURE			,
	OPCODE_GET_EXPOSURE			,
	OPCODE_SET_WIDTH			,
	OPCODE_GET_WIDTH			,
	OPCODE_SET_HEIGHT			,
	OPCODE_GET_HEIGHT			,
	OPCODE_GET_SIZE				,
	OPCODE_SET_TRIGGER_SOURCE	,
	OPCODE_GET_TRIGGER_SOURCE	,
	OPCODE_SET_OFFSET_X			,
	OPCODE_GET_OFFSET_X			,
	OPCODE_SET_OFFSET_Y			,
	OPCODE_GET_OFFSET_Y
} opcode_t;

typedef struct
{
	char								name	[30];
	char								ip		[30];
	pthread_mutex_t						hardwareMutex;	
	pthread_mutex_t						syncMutex;
	pthread_cond_t						conditionSignal;
	opcode_t							opcode;
	int32_t								status;
	uint8_t*							buffer;
	bool								gainAuto;
	uint32_t							gain;
	uint32_t							exposure;
	uint32_t							width;
	uint32_t							height;
	uint32_t							size;
	triggerSource_t						triggerSource;
	uint32_t							offsetX;
	uint32_t							offsetY;
	CBaslerGigECamera*					camera;
	CBaslerGigECamera::StreamGrabber_t*	streamGrabber;
} configuration_t;

/*
 * Private members
 */
static	configuration_t			configurations[NUMBER_OF_DEVICES];
static	int						deviceCount		=	0;
static	PylonAutoInitTerm 		autoInitTerm;

/*
 * Private function prototypes
 */
static	long	init(void);
static	long	report(int detail);
static	void* 	thread(void* arg);
static	long	getImage(configuration_t* configuration);
static	long	setGainAuto(configuration_t* configuration, bool gainAuto);
static	long	getGainAuto(configuration_t* configuration, bool *gainAuto);
static	long	setGain(configuration_t* configuration, uint32_t gain);
static	long	getGain(configuration_t* configuration, uint32_t *gain);
static	long	setExposure(configuration_t* configuration, uint32_t exposure);
static	long	getExposure(configuration_t* configuration, uint32_t *exposure);
static	long	setWidth(configuration_t* configuration, uint32_t width);
static	long	getWidth(configuration_t* configuration, uint32_t *width);
static	long	setHeight(configuration_t* configuration, uint32_t height);
static	long	getHeight(configuration_t* configuration, uint32_t *height);
static	long	getSize(configuration_t* configuration, uint32_t *size);
static	long	setTriggerSource(configuration_t* configuration, triggerSource_t source);
static	long	getTriggerSource(configuration_t* configuration, triggerSource_t* source);
static	long	setOffsetX(configuration_t* configuration, uint32_t offsetX);
static	long	getOffsetX(configuration_t* configuration, uint32_t *offsetX);
static	long	setOffsetY(configuration_t* configuration, uint32_t offsetY);
static	long	getOffsetY(configuration_t* configuration, uint32_t *offsetY);

/*
 * Function definitions
 */
static long 
init(void)
{
	int			status;
	pthread_t	handle;
	basler_t	device;

	for (device = 0; device < deviceCount; device++)
	{
		/*Initialize sync methods*/
		pthread_mutex_init(&configurations[device].hardwareMutex, NULL);
		pthread_mutex_init(&configurations[device].syncMutex, NULL);
		pthread_cond_init(&configurations[device].conditionSignal, NULL);

		/*Lock synchronization mutex*/
		pthread_mutex_lock(&configurations[device].syncMutex);

		/*Start new driver thread*/
		printf("Initializing %s @ %s\r\n", configurations[device].name, configurations[device].ip);
		status	=	pthread_create(&handle, NULL, thread, &configurations[device]);	
		if (status)
		{
			errlogPrintf("\x1B[31mUnable to initialize driver thread: Unable to create thread\r\n\x1B[0m");
			pthread_mutex_unlock(&configurations[device].syncMutex);
			return -1;
		}

		/*Wait for driver thread to initialize*/
		pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].syncMutex);

		if (configurations[device].status < 0)
			errlogPrintf("\x1B[31mUnable to initialize driver thread\r\n\x1B[0m");
	}

	return 0;
}

void*
thread(void* arg)
{
	configuration_t*	configuration;
	IPylonDevice*		device;

	configuration			=	(configuration_t*)arg;

	try
	{
		device					=	CTlFactory::GetInstance().CreateDevice(CBaslerGigEDeviceInfo().SetIpAddress(configuration->ip));
		configuration->camera	=	new CBaslerGigECamera(device);
		configuration->camera->Open();

		configuration->camera->PixelFormat.SetValue(PixelFormat_Mono8);
		configuration->camera->GevSCPSPacketSize.SetValue(1500);
		configuration->camera->GevSCPD.SetValue(0);
		configuration->camera->GevSCFTD.SetValue(0);

		configuration->camera->AcquisitionMode.SetValue(AcquisitionMode_SingleFrame);

		configuration->camera->TriggerSelector.SetValue(TriggerSelector_AcquisitionStart);
		configuration->camera->TriggerMode.SetValue(TriggerMode_Off);
		configuration->camera->TriggerSelector.SetValue(TriggerSelector_FrameStart);
		configuration->camera->TriggerMode.SetValue(TriggerMode_On);
		configuration->camera->TriggerSource.SetValue(TriggerSource_Software);
		configuration->triggerSource	=	TRIGGER_SOURCE_SOFTWARE;
		configuration->camera->TriggerDelayAbs.SetValue(0);

		configuration->camera->GainAuto.SetValue(GainAuto_Continuous);
		configuration->gainAuto	=	true;

		configuration->streamGrabber	=	new CBaslerGigECamera::StreamGrabber_t(configuration->camera->GetStreamGrabber(0));
		configuration->streamGrabber->Open();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		configuration->status	=	-1;
	}

	/*Inform init() that driver thread has initialized*/
	pthread_mutex_lock(&configuration->syncMutex);
	pthread_cond_signal(&configuration->conditionSignal);

	while (true) 
	{ 
		/*Wait for command*/
		pthread_cond_wait(&configuration->conditionSignal, &configuration->syncMutex);


		/*Execute command*/
		switch (configuration->opcode)
		{
			case OPCODE_GET_IMAGE:
				configuration->status	=	getImage(configuration);
				break;
			case OPCODE_SET_GAIN_AUTO:
				configuration->status	=	setGainAuto(configuration, configuration->gainAuto);
				break;
			case OPCODE_GET_GAIN_AUTO:
				configuration->status	=	getGainAuto(configuration, &configuration->gainAuto);
				break;
			case OPCODE_SET_GAIN:
				configuration->status	=	setGain(configuration, configuration->gain);
				break;
			case OPCODE_GET_GAIN:
				configuration->status	=	getGain(configuration, &configuration->gain);
				break;
			case OPCODE_SET_EXPOSURE:
				configuration->status	=	setExposure(configuration, configuration->exposure);
				break;
			case OPCODE_GET_EXPOSURE:
				configuration->status	=	getExposure(configuration, &configuration->exposure);
				break;
			case OPCODE_SET_WIDTH:
				configuration->status	=	setWidth(configuration, configuration->width);
				break;
			case OPCODE_GET_WIDTH:
				configuration->status	=	getWidth(configuration, &configuration->width);
				break;
			case OPCODE_SET_HEIGHT:
				configuration->status	=	setHeight(configuration, configuration->height);
				break;
			case OPCODE_GET_HEIGHT:
				configuration->status	=	getHeight(configuration, &configuration->height);
				break;
			case OPCODE_SET_OFFSET_X:
				configuration->status	=	setOffsetX(configuration, configuration->offsetX);
				break;
			case OPCODE_GET_OFFSET_X:
				configuration->status	=	getOffsetX(configuration, &configuration->offsetX);
				break;
			case OPCODE_SET_OFFSET_Y:
				configuration->status	=	setOffsetY(configuration, configuration->offsetY);
				break;
			case OPCODE_GET_OFFSET_Y:
				configuration->status	=	getOffsetY(configuration, &configuration->offsetY);
				break;
			case OPCODE_GET_SIZE:
				configuration->status	=	getSize(configuration, &configuration->size);
				break;
			case OPCODE_SET_TRIGGER_SOURCE:
				configuration->status	=	setTriggerSource(configuration, configuration->triggerSource);
				break;
			case OPCODE_GET_TRIGGER_SOURCE:
				configuration->status	=	getTriggerSource(configuration, &configuration->triggerSource);
				break;
		}
		pthread_cond_signal(&configuration->conditionSignal);
	}

	configuration->camera->Close();

	return NULL;
}

long
basler_getImage(basler_t device, uint8_t *buffer, uint32_t size)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].buffer	=	buffer;
	configurations[device].size		=	size;
	configurations[device].opcode	=	OPCODE_GET_IMAGE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to capture image\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);
	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);
	return 0;
}

long
basler_setGainAuto(basler_t device, bool gainAuto)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].gainAuto	=	gainAuto;
	configurations[device].opcode	=	OPCODE_SET_GAIN_AUTO;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set gain mode: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getGainAuto(basler_t device, bool* gainAuto)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_GAIN_AUTO;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read gain mode: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*gainAuto	=	configurations[device].gainAuto;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}
long
basler_setGain(basler_t device, uint32_t gain)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].gain		=	gain;
	configurations[device].opcode	=	OPCODE_SET_GAIN;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set gain: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getGain(basler_t device, uint32_t* gain)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_GAIN;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read gain: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*gain	=	configurations[device].gain;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setExposure(basler_t device, uint32_t exposure)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].exposure	=	exposure;
	configurations[device].opcode	=	OPCODE_SET_EXPOSURE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set exposure: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getExposure(basler_t device, uint32_t* exposure)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_EXPOSURE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read exposure: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*exposure	=	configurations[device].exposure;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setWidth(basler_t device, uint32_t width)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	if ((width + configurations[device].offsetX) > 1296)
	{
		errlogPrintf("\x1B[31mBad width/offsetX configuration\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	configurations[device].width	=	width;
	configurations[device].opcode	=	OPCODE_SET_WIDTH;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set width: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getWidth(basler_t device, uint32_t* width)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_WIDTH;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read width: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*width	=	configurations[device].width;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setHeight(basler_t device, uint32_t height)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	if ((height + configurations[device].offsetY) > 966)
	{
		errlogPrintf("\x1B[31mBad height/offsetY configuration\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	configurations[device].height	=	height;
	configurations[device].opcode	=	OPCODE_SET_HEIGHT;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set height: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getHeight(basler_t device, uint32_t* height)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_HEIGHT;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read height: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*height	=	configurations[device].height;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setOffsetX(basler_t device, uint32_t offsetX)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	if ((offsetX + configurations[device].width) > 1296)
	{
		errlogPrintf("\x1B[31mBad width/offsetX configuration\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	configurations[device].offsetX	=	offsetX;
	configurations[device].opcode	=	OPCODE_SET_OFFSET_X;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set the x offset: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getOffsetX(basler_t device, uint32_t* offsetX)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_OFFSET_X;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read the x offset: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*offsetX	=	configurations[device].offsetX;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setOffsetY(basler_t device, uint32_t offsetY)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	if ((offsetY + configurations[device].height) > 966)
	{
		errlogPrintf("\x1B[31mBad height/offsetY configuration\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	configurations[device].offsetY	=	offsetY;
	configurations[device].opcode	=	OPCODE_SET_OFFSET_Y;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set the y offset: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getOffsetY(basler_t device, uint32_t* offsetY)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_OFFSET_Y;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read the y offset: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*offsetY	=	configurations[device].offsetY;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}
long
basler_getSize(basler_t device, uint32_t* size)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_SIZE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read image size: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*size	=	configurations[device].size;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_setTriggerSource(basler_t device, triggerSource_t source)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].triggerSource	=	source;
	configurations[device].opcode			=	OPCODE_SET_TRIGGER_SOURCE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to set trigger source: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}

long
basler_getTriggerSource(basler_t device, triggerSource_t* source)
{
	/*Lock camera*/
	pthread_mutex_lock(&configurations[device].hardwareMutex);

	configurations[device].opcode	=	OPCODE_GET_TRIGGER_SOURCE;

	/*Synchronize*/
	pthread_mutex_lock(&configurations[device].syncMutex);
	pthread_cond_signal(&configurations[device].conditionSignal);
	pthread_cond_wait(&configurations[device].conditionSignal, &configurations[device].syncMutex);
	if (configurations[device].status < 0)
	{
		errlogPrintf("\x1B[31mUnable to read trigger source: Exception occured!\r\n\x1B[0m");
		pthread_mutex_unlock(&configurations[device].syncMutex);
		pthread_mutex_unlock(&configurations[device].hardwareMutex);
		return -1;
	}

	*source	=	configurations[device].triggerSource;
	pthread_mutex_unlock(&configurations[device].syncMutex);

	/*Unlock camera*/
	pthread_mutex_unlock(&configurations[device].hardwareMutex);

	return 0;
}


static long
getImage(configuration_t* configuration)
{
	try
	{
		configuration->streamGrabber->MaxBufferSize.SetValue(configuration->size);
		configuration->streamGrabber->MaxNumBuffer.SetValue(1);

		configuration->streamGrabber->PrepareGrab();
		const StreamBufferHandle image	= configuration->streamGrabber->RegisterBuffer(configuration->buffer, configuration->size);
		configuration->streamGrabber->QueueBuffer(image, NULL);

		configuration->camera->AcquisitionStart.Execute();
		if (configuration->triggerSource == TRIGGER_SOURCE_SOFTWARE)
			configuration->camera->TriggerSoftware.Execute();

		if (configuration->streamGrabber->GetWaitObject().Wait(3000))
		{
			GrabResult Result;
			configuration->streamGrabber->RetrieveResult(Result);

			if (Result.Succeeded())
			{
				printf("Gray value of first pixel: %d\r\n", (uint32_t) configuration->buffer[0]);
				configuration->streamGrabber->DeregisterBuffer(image);
				configuration->streamGrabber->FinishGrab();
				return 0;
			}
			else
			{
				printf("Error code : %x\r\n", Result.GetErrorCode());
				configuration->streamGrabber->DeregisterBuffer(image);
				configuration->streamGrabber->FinishGrab();
				return -1;
			}
		}
		else 
		{
			printf("Timeout occurred!\r\n");
			configuration->streamGrabber->CancelGrab();
			for (GrabResult r; configuration->streamGrabber->RetrieveResult(r););
			configuration->streamGrabber->DeregisterBuffer(image);
			configuration->streamGrabber->FinishGrab();
			return -1;
		}
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setGainAuto(configuration_t* configuration, bool gainAuto)
{
	try
	{
		if (gainAuto)
			configuration->camera->GainAuto.SetValue(GainAuto_Continuous);
		else
			configuration->camera->GainAuto.SetValue(GainAuto_Off);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getGainAuto(configuration_t* configuration, bool* gainAuto)
{
	int gainAutoEnum;

	try
	{
		gainAutoEnum	=	configuration->camera->GainAuto.GetValue();
		if (gainAutoEnum == GainAuto_Off)
			*gainAuto	=	false;
		else
			*gainAuto	=	true;
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setGain(configuration_t* configuration, uint32_t gain)
{
	int	gainAutoEnum;

	try
	{
		gainAutoEnum	=	configuration->camera->GainAuto.GetValue();
		if (gainAutoEnum == GainAuto_Off)
		{
			configuration->camera->GainSelector.SetValue(GainSelector_All);
			configuration->camera->GainRaw.SetValue(gain);
		}
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getGain(configuration_t* configuration, uint32_t* gain)
{
	try
	{
		*gain	=	configuration->camera->GainRaw.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setExposure(configuration_t* configuration, uint32_t exposure)
{
	try
	{
		if (exposure < 16)
			exposure = 16;

		configuration->camera->ExposureMode.SetValue(ExposureMode_Timed);
		configuration->camera->ExposureTimeAbs.SetValue(exposure);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getExposure(configuration_t* configuration, uint32_t* exposure)
{
	try
	{
		*exposure	=	configuration->camera->ExposureTimeAbs.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setWidth(configuration_t* configuration, uint32_t width)
{
	try
	{
		configuration->camera->Width.SetValue(width);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getWidth(configuration_t* configuration, uint32_t* width)
{
	try
	{
		*width	=	configuration->camera->Width.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setHeight(configuration_t* configuration, uint32_t height)
{
	try
	{
		configuration->camera->Height.SetValue(height);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getHeight(configuration_t* configuration, uint32_t* height)
{
	try
	{
		*height	=	configuration->camera->Height.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setOffsetX(configuration_t* configuration, uint32_t offsetX)
{
	try
	{
		configuration->camera->OffsetX.SetValue(offsetX);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getOffsetX(configuration_t* configuration, uint32_t* offsetX)
{
	try
	{
		*offsetX	=	configuration->camera->OffsetX.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setOffsetY(configuration_t* configuration, uint32_t offsetY)
{
	try
	{
		configuration->camera->OffsetY.SetValue(offsetY);
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getOffsetY(configuration_t* configuration, uint32_t* offsetY)
{
	try
	{
		*offsetY	=	configuration->camera->OffsetY.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getSize(configuration_t* configuration, uint32_t* size)
{
	try
	{
		*size	=	configuration->camera->Width.GetValue()*configuration->camera->Height.GetValue();
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
setTriggerSource(configuration_t* configuration, triggerSource_t source)
{
	try
	{
		switch (source)
		{
			case TRIGGER_SOURCE_SOFTWARE:
				configuration->camera->TriggerSource.SetValue(TriggerSource_Software);
				break;
			case TRIGGER_SOURCE_HARDWARE:
				configuration->camera->TriggerSource.SetValue(TriggerSource_Line1);
				configuration->camera->TriggerActivation.SetValue(TriggerActivation_RisingEdge);
				break;
			default:
				configuration->camera->TriggerSource.SetValue(TriggerSource_Software);
				break;
		}
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
	return 0;
}

static long
getTriggerSource(configuration_t* configuration, triggerSource_t* source)
{
	try
	{
		switch (configuration->camera->TriggerSource.GetValue())
		{
			case TriggerSource_Software:
				*source	=	TRIGGER_SOURCE_SOFTWARE;
				break;
			case TriggerSource_Line1:
				*source	=	TRIGGER_SOURCE_HARDWARE;
				break;
			default:
				*source	=	TRIGGER_SOURCE_SOFTWARE;
				break;
		}
	} catch (GenICam::GenericException &e)
	{
		errlogPrintf("\x1B[31mException: %s\r\n\x1B[0m", e.GetDescription());
		return -1;
	}
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

basler_t
basler_open(char *deviceName)
{
	basler_t device;

	for (device = 0; device < deviceCount; device++)
	{
		if (strcmp(configurations[device].name, deviceName) == 0)
			return (basler_t)device;
	}

    errlogPrintf("\x1B[31mUnable to open device: device %s not found\r\n\x1B[0m", deviceName);
	return -1;
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
		errlogPrintf("\x1B[31mUnable to configure device: Missing name\r\n\x1B[0m");
		return -1;
	}
	if (!ip || !strlen(ip) || inet_pton(AF_INET, ip, buffer) < 0)
	{
		errlogPrintf("\x1B[31mUnable to configure device: Missing or incorrect IP address\r\n\x1B[0m");
		return -1;
	}
	if (deviceCount >= NUMBER_OF_DEVICES)
	{
		errlogPrintf("\x1B[31mUnable to configure device: Too many devices\r\n\x1B[0m");
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
