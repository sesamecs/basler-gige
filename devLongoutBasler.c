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
#include <longoutRecord.h>

/*Application includes*/
#include "drvBasler.h"

/*Macros*/
#define NUMBER_OF_OUTPUTS	10
#define NAME_LENGTH			10
#define COMMAND_LENGTH		20
#define VALUE_LENGTH		10

typedef struct
{
	basler_t	device;
	char		name[NAME_LENGTH];
	char		command[COMMAND_LENGTH];
} output_t;

/*Local variables*/
static	output_t	outputs[NUMBER_OF_OUTPUTS];
static	int			outputCount;

/*Function prototypes*/
static	long	init(int after);
static	long	initRecord(longoutRecord *record);
static 	long	writeRecord(longoutRecord *record);
static	void*	thread(void* arg);

/*Function definitions*/
static long
init(int after)
{
	if (!after)
		outputCount	=	0;
	return 0;
}

static long 
initRecord(longoutRecord *record)
{
	char	*parameters;
	int		nameLength;

	if (outputCount == NUMBER_OF_OUTPUTS)
	{
		errlogPrintf("Unable to initialize %s: Too many records\r\n", record->name);
		return -1;
	}

    if (record->out.type != INST_IO) 
	{
		errlogPrintf("Unable to initialize %s: Illegal output type\r\n", record->name);
		return -1;
	}

	/*
	 * Parse output
	 */
	parameters		=	record->out.value.instio.string;

    /* Parse device name */
	nameLength		=	strcspn(parameters, ":");		
	if (nameLength == 0)
	{
		errlogPrintf("Unable to initialize %s: Illegal output device name\r\n", record->name);
		return -1;
	}
	memcpy(outputs[outputCount].name, parameters, nameLength);
	outputs[outputCount].name[nameLength]	=	'\0';

	/* Skip separator*/
    parameters	+= 	nameLength + 1;

    /* Parse command*/
	if (strlen(parameters) == 0)
	{
		errlogPrintf("Unable to initialize %s: Illegal output command\r\n", record->name);
		return -1;
	}
	strcpy(outputs[outputCount].command, parameters);
	printf("%s connects to %s and issues %s command\r\n", record->name, outputs[outputCount].name, outputs[outputCount].command);

	/* Set device*/
	outputs[outputCount].device	=	basler_open(outputs[outputCount].name);
	if (outputs[outputCount].device < 0)
	{
		errlogPrintf("Unable to initalize %s: Could not open device\r\n", record->name);
		return -1;
	}

	record->dpvt	=	&outputs[outputCount];
	outputCount++;

	return 0;
}

static long 
writeRecord(longoutRecord *record)
{
	int			status;
	pthread_t	handle;
	output_t*	private	=	(output_t*)record->dpvt;

	if (!record)
	{
		errlogPrintf("Unable to write %s: Null record pointer\r\n", record->name);
		return -1;
	}

    if (!private)
    {
        errlogPrintf("Unable to write %s: Null private structure pointer\r\n", record->name);
        return -1;
    }

	if (!private->command || !strlen(private->command))
	{
		errlogPrintf("Unable to write %s: Command is null or empty\r\n", record->name);
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
			errlogPrintf("Unable to write %s: Unable to create thread\r\n", record->name);
			return -1;
		}
		record->pact = true;
		return 0;
	}

	/*
	 * This is the second pass, complete the request and return
	 */

	record->pact	=	false;

	printf("Wrote %s.VAL=%d\r\n", record->name, record->val);

	return 0;
}

void*
thread(void* arg)
{
	int				status;
	longoutRecord*		record	=	(longoutRecord*)arg;
	output_t*		private	=	(output_t*)record->dpvt;

	/*Detach thread*/
	pthread_detach(pthread_self());

	status	=	basler_setExposure(private->device, record->val);
	if (status < 0)
	{
		errlogPrintf("Unable to write %s: Driver thread is unable to write\r\n", record->name);
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
} devLongoutBasler =
{
    5,
    NULL,
    init,
    initRecord,
    NULL,
    writeRecord,
};
epicsExportAddress(dset, devLongoutBasler);
