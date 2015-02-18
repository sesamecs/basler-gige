/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3.0 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Abdallah Ismail <abdallah.ismail@sesame.org.jo>, 2015
 */

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
#include <boRecord.h>

/*Application includes*/
#include "drvBasler.h"

/*Macros*/
#define NUMBER_OF_OUTPUTS	100
#define NAME_LENGTH			100
#define COMMAND_LENGTH		100

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
static	long	initRecord(boRecord *record);
static 	long	writeRecord(boRecord *record);
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
initRecord(boRecord *record)
{
	char*	parameters;
	int		nameLength;

	if (outputCount == NUMBER_OF_OUTPUTS)
	{
		errlogPrintf("\x1B[31Unable to initialize %s: Too many records\r\n\x1B[0m", record->name);
		return -1;
	}

    if (record->out.type != INST_IO) 
	{
		errlogPrintf("\x1B[31Unable to initialize %s: Illegal output type\r\n\x1B[0m", record->name);
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
		errlogPrintf("\x1B[31Unable to initialize %s: Illegal output device name\r\n\x1B[0m", record->name);
		return -1;
	}
	memcpy(outputs[outputCount].name, parameters, nameLength);
	outputs[outputCount].name[nameLength]	=	'\0';

	/* Skip separator*/
    parameters	+= 	nameLength + 1;

    /* Parse command*/
	if (strlen(parameters) == 0)
	{
		errlogPrintf("\x1B[31Unable to initialize %s: Illegal output command\r\n\x1B[0m", record->name);
		return -1;
	}
	strcpy(outputs[outputCount].command, parameters);

	/* Set device*/
	outputs[outputCount].device	=	basler_open(outputs[outputCount].name);
	if (outputs[outputCount].device < 0)
	{
		errlogPrintf("\x1B[31Unable to initalize %s: Could not open device\r\n\x1B[0m", record->name);
		return -1;
	}

	record->dpvt	=	&outputs[outputCount];
	record->mask	=	1;
	outputCount++;

	return 0;
}

static long 
writeRecord(boRecord *record)
{
	int			status;
	pthread_t	handle;
	output_t*	private	=	(output_t*)record->dpvt;

	if (!record)
	{
		errlogPrintf("\x1B[31Unable to write %s: Null record pointer\r\n\x1B[0m", record->name);
		return -1;
	}

    if (!private)
    {
        errlogPrintf("\x1B[31Unable to write %s: Null private structure pointer\r\n\x1B[0m", record->name);
        return -1;
    }

	if (!private->command || !strlen(private->command))
	{
		errlogPrintf("\x1B[31Unable to write %s: Command is null or empty\r\n\x1B[0m", record->name);
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
			errlogPrintf("\x1B[31Unable to write %s: Unable to create thread\r\n\x1B[0m", record->name);
			return -1;
		}
		record->pact = true;
		return 0;
	}

	/*
	 * This is the second pass, complete the request and return
	 */
	record->pact	=	false;
	return 0;
}

void*
thread(void* arg)
{
	int			status	=	0;
	boRecord*	record	=	(boRecord*)arg;
	output_t*	private	=	(output_t*)record->dpvt;

	/*Detach thread*/
	pthread_detach(pthread_self());

	if (strcmp(private->command, "setTriggerSource") == 0)
		status	=	basler_setTriggerSource(private->device, record->rval);
	else if (strcmp(private->command, "setGainAuto") == 0)
		status	=	basler_setGainAuto(private->device, record->rval);
	else
		errlogPrintf("\x1B[31Unable to write %s: Do not know how to process %s requested by %s\r\n\x1B[0m", record->name, private->command, record->name);
	if (status < 0)
		errlogPrintf("\x1B[31Unable to write %s: Driver thread is unable to write\r\n\x1B[0m", record->name);

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
} devBoBasler =
{
    5,
    NULL,
    init,
    initRecord,
    NULL,
    writeRecord,
};
epicsExportAddress(dset, devBoBasler);
