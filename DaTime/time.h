
/*
 *  File:  time.h
 *  Name:
 *  login: 
 *  Date:  25 Aug 07
 *  Mod:
 */

/*  Defines the "Time" data time and the functions that manipulate it 
 *
 *  A "Time" object records the hours and minutes of a time of day
 */

#ifndef TIME_H
#define TIME_H

#include "common.h"


/*  Time data type declaration  */
class Time{

public:
/* Initialization functions   */
void Init(int hour, int minute);
void InitSingle(int hrmin);
void Clear();
void Copy(Time &source);

/* Accessor functions  */
int GetHour() const;
int GetMinute() const;

/* Mutator functions  */
void SetHour(int hour);
void SetMinute(int min);

/* Display functions  */
void Display();

/* Comparison functions  */
bool operator==(const Time &b) const;
bool operator!=(const Time &b) const;
bool operator<(const Time &b) const;
bool operator>(const Time &b) const;
bool operator<=(const Time &b) const;
bool operator>=(const Time &b) const;

/* Manipulation functions  */
Time Add(int minutes);
int Difference(Time &b);

private:
int hour;
int minute;

/*  Converting function  */
void HourMinute(int mins);
} ; 
#include "time_inl.h"
#endif
