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
#include <biRecord.h>

/*Application includes*/
#include "drvBasler.h"

/*Macros*/
#define NUMBER_OF_INPUTS	100
#define NAME_LENGTH			100
#define COMMAND_LENGTH		100

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
static	long	initRecord(biRecord *record);
static 	long	readRecord(biRecord *record);
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
initRecord(biRecord *record)
{
	char*	parameters;
	int		nameLength;

	if (inputCount == NUMBER_OF_INPUTS)
	{
		errlogPrintf("\x1B[31mUnable to initialize %s: Too many records\r\n\x1B[0m", record->name);
		return -1;
	}

    if (record->inp.type != INST_IO) 
	{
		errlogPrintf("\x1B[31mUnable to initialize %s: Illegal input type\r\n\x1B[0m", record->name);
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
		errlogPrintf("\x1B[31mUnable to initialize %s: Illegal input device name\r\n\x1B[0m", record->name);
		return -1;
	}
	memcpy(inputs[inputCount].name, parameters, nameLength);
	inputs[inputCount].name[nameLength]	=	'\0';

	/* Skip separator*/
    parameters	+= 	nameLength + 1;

    /* Parse command*/
	if (strlen(parameters) == 0)
	{
		errlogPrintf("\x1B[31mUnable to initialize %s: Illegal input command\r\n\x1B[0m", record->name);
		return -1;
	}
	strcpy(inputs[inputCount].command, parameters);

	/* Set device*/
	inputs[inputCount].device	=	basler_open(inputs[inputCount].name);
	if (inputs[inputCount].device < 0)
	{
		errlogPrintf("\x1B[31mUnable to initalize %s: Could not open device\r\n\x1B[0m", record->name);
		return -1;
	}
	record->dpvt				=	&inputs[inputCount];
	inputCount++;

	return 0;
}

static long 
readRecord(biRecord *record)
{
	int			status;
	pthread_t	handle;
	input_t*	private	=	(input_t*)record->dpvt;

	if (!record)
	{
		errlogPrintf("\x1B[31mUnable to read %s: Null record pointer\r\n\x1B[0m", record->name);
		return -1;
	}

    if (!private)
    {
        errlogPrintf("\x1B[31mUnable to read %s: Null private structure pointer\r\n\x1B[0m", record->name);
        return -1;
    }

	if (!private->command || !strlen(private->command))
	{
		errlogPrintf("\x1B[31mUnable to read %s: Command is null or empty\r\n\x1B[0m", record->name);
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
			errlogPrintf("\x1B[31mUnable to read %s: Unable to create thread\r\n\x1B[0m", record->name);
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

	return 0;
}

void*
thread(void* arg)
{
	int				status	=	0;
	biRecord*		record	=	(biRecord*)arg;
	input_t*		private	=	(input_t*)record->dpvt;

	/*Detach thread*/
	pthread_detach(pthread_self());

	if (strcmp(private->command, "getTriggerSource") == 0)
		status	=	basler_getTriggerSource(private->device, (uint32_t*)&record->rval);
	else if (strcmp(private->command, "getGainAuto") == 0)
		status	=	basler_getGainAuto(private->device, (bool*)&record->rval);
	else
		errlogPrintf("\x1B[31mUnable to read %s: Do not know how to process %s requested by %s\r\n\x1B[0m", record->name, private->command, record->name);
	if (status < 0)
		errlogPrintf("\x1B[31mUnable to read %s: Driver thread is unable to read\r\n\x1B[0m", record->name);

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
} devBiBasler =
{
    5,
    NULL,
    init,
    initRecord,
    NULL,
    readRecord
};
epicsExportAddress(dset, devBiBasler);
