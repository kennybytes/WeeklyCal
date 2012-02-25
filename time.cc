
/*
 *  File:  time.cc
 *  Name:
 *  login: 
 *  Date:  25 Aug 07
 *  Mod:
 */

/*  Implementation of Time data type operations
 */


#include <stdio.h>
#include "time.h"
#include "common.h"

#undef DEBUG

/* Initialization functions   */
/*  Initialize the hour and minutes from a given hour 		and given minutes input  */
void Time::Init(int hour, int minute)
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Init\n");
	#endif

	this->SetHour(hour);		
	this->SetMinute(minute);	

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Init\n");
	#endif
}

/*  Initialize the hour and minutes from a single time 		input (which includes the hour and minutes) */
void Time::InitSingle(int hrmin)
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_InitSingle\n");
	#endif

	this->SetHour(hrmin/100);
	this->SetMinute(hrmin%100);

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_InitSingle\n");
	#endif
}

/*  Initialize the hour and minutes to zero  */
void Time::Clear()
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Clear\n");
	#endif

	this->SetHour(0);
	this->SetMinute(0);

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Clear\n");
	#endif
}

/*  Obtain the hour and minute of a desired time, and
	initialize it as the hour and minutes  */
void Time::Copy(Time &source)
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Copy\n");
	#endif

	this->SetHour(source.GetHour());
	this->SetMinute(source.GetMinute());

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Copy\n");
	#endif
}

/* Manipulation functions  */
/*  Add a desired amount of minutes to a specific time  */
Time Time::Add(int minutes)
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Add\n");
	#endif

	int sum;
	Time t;

	sum = (this->GetHour() * 60 + this->GetMinute() 
		+ minutes);

	t.HourMinute(sum);
	return t;

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Add\n");
	#endif
}

/*  Calculate the difference between two different times  */
int Time::Difference(Time &b)
{
  int diff;

	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Difference\n");
	#endif

	diff = ((GetHour() * 60 + GetMinute()) 
		- (b.GetHour() * 60 + b.GetMinute()));

	if (diff < 0)
	{
		return  diff * (-1);
	}
	else
	{
		return diff;
	}

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Difference\n");
	#endif
}

/*  conversion of minutes to minutes & hours  */
void Time::HourMinute(int mins)
{
  int hours, minutes;

	hours = (mins / 60);
	minutes = (mins % 60);

	this->SetHour(hours);
	this->SetMinute(minutes);
}
