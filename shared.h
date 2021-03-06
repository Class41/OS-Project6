#ifndef SHARED_H
#define SHARED_H

/*
*	Author: Vasyl Onufriyev
*	Project 6
*	Date: 4/26/19
*	Purpose: Shared memory be here
*/


#define MAX_PROCS 19

/* Time structure */
typedef struct
{
	unsigned int seconds;
	unsigned int ns;
} Time;

typedef struct
{
	int pid; //process pid
	char status[50];
	Time unblockTime; //Time proccess in queue should be unblocked at
	int unblockOP; //Op to perform after dequeued
	int lastFrameRequested; //frame parameter for unblock operation
} Process;

typedef struct
{
	Time sysTime;
	Process proc[MAX_PROCS]; //process table
} Shared;

#endif
