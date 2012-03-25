
/*
 *  File:  datime.h
 *  Name:
 *  login: 
 *  Date:  22 Aug 07
 *  Mod:
 */



/*  Defines the "DaTime" data time and the functions that manipulate it 
 *
 *  A "DaTime" object records the day of the week and time span for
 *  a scheduled event.
 */

#ifndef DATIME_H
#define DATIME_H

#include "common.h"
#include "day.h"
#include "time.h"

/*  DaTime Class declaration  */
class DaTime {

public:
	/* Initialization functions   */
	void Init(Day day, Time start, Time end);
	void Clear();
	void Copy(DaTime &source);
	
	/* Accessor functions  */
	Day GetDay() const;
	Time GetStart() const;
	Time GetEnd() const;
	int GetDuration() const;
	
	/* Mutator functions  */
	void SetDay(Day day);
	void SetStart(Time start);
	void SetEnd(Time end);
	void SetDuration(int mins);
	
	
	/* Display functions  */
	void Display();
	
	/* Comparison functions  */
	bool operator==(const DaTime &b) const;
	bool operator!=(const DaTime &b) const;
	bool operator<(const DaTime &b) const;
	bool operator>(const DaTime &b) const;
	bool operator<=(const DaTime &b) const;
	bool operator>=(const DaTime &b) const;
	bool Overlap(const DaTime &b) const;
	bool NonOverlap(const DaTime &b) const;
	int Difference(const DaTime &b) const;
	
	/* Manipulation functions  */
	void ChangeDay(Day day);
	void ChangeDuration(int dur);
	void ChangeStart(Time newstart);
	DaTime Merge(DaTime &b);
	

private:

	/* Internal Functions */
	bool DayBefore(const DaTime &b) const;
	bool SameDay(const DaTime &b) const;
	bool NotSameDay(const DaTime &b) const;
	int DayValue() const;
	/* Internal Variables */
	Day day;
	Time start;
	Time end;
};
#include "datime_inl.h"
#endif
