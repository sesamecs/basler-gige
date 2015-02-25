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
#include <waveformRecord.h>

/*Application includes*/
#include "basler.h"

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
static	input_t			inputs[NUMBER_OF_INPUTS];
static	int				inputCount;

/*Function prototypes*/
static	long			init(int after);
static	long			initRecord(waveformRecord *record);
static 	long			readRecord(waveformRecord *record);
static	void*			thread(void* arg);

/*Function definitions*/
static long
init(int after)
{
	if (!after)
		inputCount = 0;
	return 0;
}

static long 
initRecord(waveformRecord *record)
{
	char	*parameters;
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

	/*Check and read command*/
	if (!strlen(parameters))
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
readRecord(waveformRecord *record)
{
	int			status, fd, n;
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
	if (!record->bptr)
	{
		errlogPrintf("\x1B[31mUnable to read %s: Null array pointer\r\n\x1B[0m", record->name);
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
	 */
	record->pact	=	false;

#if 0
	/*Create file*/
	fd	=	open("image.pgm", O_CREAT | O_RDWR);
	if (fd < 0)
		perror("open");
	/*Write image header*/
	n	=	write(fd, "P5\n1296 966\n255\n", strlen("P5\n1296 966\n255\n"));
	if (n < strlen("P5\n1296 966\n255\n"))
		perror("write");
	/*Dump image binary*/
	n	=	write(fd, record->bptr, record->nelm);
	if (n < record->nelm)
		perror("write");
	/*Close file*/
	close(fd);
#endif

	return 0;
}

void*
thread(void* arg)
{
	int				status	=	0;
	uint32_t		size;
	waveformRecord*	record	=	(waveformRecord*)arg;
	input_t*		private	=	(input_t*)record->dpvt;

	/*Detach thread*/
	pthread_detach(pthread_self());

	status	=	basler_getSize(private->device, &size);
	if (status < 0)
		errlogPrintf("\x1B[31mUnable to read %s: Driver thread is unable to read\r\n\x1B[0m", record->name);
	status	=	basler_getImage(private->device, record->bptr, size);
	if (status < 0)
		errlogPrintf("\x1B[31mUnable to read %s: Driver thread is unable to read\r\n\x1B[0m", record->name);

	record->nord	=	size;
	record->val		=	record->bptr;

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
} devWaveformBasler =
{
    5,
    NULL,
    init,
    initRecord,
    NULL,
    readRecord
};
epicsExportAddress(dset, devWaveformBasler);
