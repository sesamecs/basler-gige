/*Standard includes*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*EPICS includes*/
#include <epicsExport.h>
#include <devSup.h>
#include <errlog.h>
#include <dbAccess.h>
#include <recSup.h>
#include <longinRecord.h>

/*Application includes*/
#include "drvBasler.h"

/*Macros*/
#define NUMBER_OF_INPUTS	10
#define NAME_LENGTH			10
#define COMMAND_LENGTH		20

typedef struct
{
	basler_t	device;
	char		name[NAME_LENGTH];
	char		command[COMMAND_LENGTH];
} input_t;

/*Local variables*/
static	input_t	inputs[NUMBER_OF_INPUTS];
static	int		inputCount;

/*Function prototypes*/
static	long	init(int after);
static	long	initRecord(longinRecord *record);
static 	long	readRecord(longinRecord *record);
static	void*	thread(void* arg);

/*Function definitions*/
static long
init(int after)
{
	if (!after)
		inputCount = 0;
	return 0;
}

static long 
initRecord(longinRecord *record)
{
	char*	parameters;
	int		nameLength;

	if (inputCount == NUMBER_OF_INPUTS)
	{
		errlogPrintf("Unable to initialize %s: Too many records\r\n", record->name);
		return -1;
	}

    if (record->inp.type != INST_IO) 
	{
		errlogPrintf("Unable to initialize %s: Illegal input type\r\n", record->name);
		return -1;
	}

	/*
	 * Parse input
	 */
	parameters		=	record->inp.value.instio.string;

    /* Parse device name */
	nameLength		=	strcspn(parameters, ":");		
	if (nameLength == 0)
	{
		errlogPrintf("Unable to initialize %s: Illegal input device name\r\n", record->name);
		return -1;
	}
	memcpy(inputs[inputCount].name, parameters, nameLength);
	inputs[inputCount].name[nameLength]	=	'\0';

	/* Skip separator*/
    parameters	+= 	nameLength + 1;

    /* Parse command*/
	if (strlen(parameters) == 0)
	{
		errlogPrintf("Unable to initialize %s: Illegal input command\r\n", record->name);
		return -1;
	}
	strcpy(inputs[inputCount].command, parameters);
	printf("%s connects to %s and issues %s command\r\n", record->name, inputs[inputCount].name, inputs[inputCount].command);

	/* Set device*/
	inputs[inputCount].device	=	basler_open(inputs[inputCount].name);
	if (inputs[inputCount].device < 0)
	{
		errlogPrintf("Unable to initalize %s: Could not open device\r\n", record->name);
		return -1;
	}
	record->dpvt				=	&inputs[inputCount];
	inputCount++;

	return 0;
}

static long 
readRecord(longinRecord *record)
{
	int			status;
	pthread_t	handle;
	input_t*	private	=	(input_t*)record->dpvt;

	if (!record)
	{
		errlogPrintf("Unable to read %s: Null record pointer\r\n", record->name);
		return -1;
	}

    if (!private)
    {
        errlogPrintf("Unable to read %s: Null private structure pointer\r\n", record->name);
        return -1;
    }

	if (!private->command || !strlen(private->command))
	{
		errlogPrintf("Unable to read %s: Command is null or empty\r\n", record->name);
		return -1;
	}

	/*
	 * Start IO
	 */

	/*If this is the first pass then start IO thread, set PACT, and return*/
	if(!record->pact)
	{
		status	=	pthread_create(&handle, NULL, thread, (void*)record);	
		if (status)
		{
			errlogPrintf("Unable to read %s: Unable to create thread\r\n", record->name);
			return -1;
		}
		record->pact = true;
		return 0;
	}

	/*
	 * This is the second pass, complete the request and return
	 * Set UDF to false if VAL has been updated
	 */
	record->pact	=	false;
	record->udf		=	false;

	printf("%s.VAL=%u\r\n", record->name, record->val);

	return 0;
}

void*
thread(void* arg)
{
	int				status;
	longinRecord*	record	=	(longinRecord*)arg;
	input_t*		private	=	(input_t*)record->dpvt;

	/*Detach thread*/
	pthread_detach(pthread_self());

	if (strcmp(private->command, "getExposure") == 0)
	{
		status	=	basler_getExposure(private->device, (uint32_t*)&record->val);
		if (status < 0)
		{
			errlogPrintf("Unable to read %s: Driver thread is unable to read\r\n", record->name);
			return NULL;
		}
	}
	else if (strcmp(private->command, "getImageWidth") == 0)
	{
		status	=	basler_getImageWidth(private->device, (uint32_t*)&record->val);
		if (status < 0)
		{
			errlogPrintf("Unable to read %s: Driver thread is unable to read\r\n", record->name);
			return NULL;
		}
	}
	else if (strcmp(private->command, "getImageHeight") == 0)
	{
		status	=	basler_getImageHeight(private->device, (uint32_t*)&record->val);
		if (status < 0)
		{
			errlogPrintf("Unable to read %s: Driver thread is unable to read\r\n", record->name);
			return NULL;
		}
	}
	else if (strcmp(private->command, "getImageSize") == 0)
	{
		status	=	basler_getImageSize(private->device, (uint32_t*)&record->val);
		if (status < 0)
		{
			errlogPrintf("Unable to read %s: Driver thread is unable to read\r\n", record->name);
			return NULL;
		}
	}
	else
	{
		errlogPrintf("Unable to read %s: Do not know how to process \"%s\" requested by %s\r\n", private->command, record->name);
		return NULL;
	}

	/*Process record*/
	dbScanLock((struct dbCommon*)record);
	(record->rset->process)(record);
	dbScanUnlock((struct dbCommon*)record);

	return NULL;
}

struct devsup {
    long	  number;
    DEVSUPFUN report;
    DEVSUPFUN init;
    DEVSUPFUN init_record;
    DEVSUPFUN get_ioint_info;
    DEVSUPFUN io;
} devLonginBasler =
{
    5,
    NULL,
    init,
    initRecord,
    NULL,
    readRecord
};
epicsExportAddress(dset, devLonginBasler);
