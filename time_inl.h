
/*  File: time_inl.h
 *  Team Name: R1T4
 *  login: R1T4
 *  Date: 19 Feb 12
 */

/*  Inline functions for time.cc  */

#include <stdio.h>
#include <stdlib.h>

/*  Accessor functions  */
/*  Obtain the hour from a given input  */
inline int Time::GetHour() const
{
	#ifdef DEBUG
	fprintf(stderr, "\tExecute time_GetHour\n");
	#endif

	return this->hour;
}

/*  Obtain the minutes from a given input  */
inline int Time::GetMinute() const
{
	#ifdef DEBUG
	fprintf(stderr, "\tExecute time_GetMinute\n");
	#endif

	return this->minute;
}

/* Mutator functions  */
/*  Set hour to specific time  */
inline void Time::SetHour(int hour)
{
	#ifdef DEBUG
        fprintf(stderr, "\tEnter time_SetHour\n");
	#endif

        this->hour = hour;

        #ifdef DEBUG
        fprintf(stderr, "\tExit time_SetHour\n");
        #endif
}

/*  Set minutes to specific time */
inline void Time::SetMinute(int min)
{
	#ifdef DEBUG
        fprintf(stderr, "\tEnter time_SetMinute\n");
        #endif

        this->minute = min;

        #ifdef DEBUG
        fprintf(stderr, "\tExit time_SetMinute\n");
        #endif
}

/* Display functions  */
/*  Display the hour and minutes  */
inline void Time::Display()
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Display\n");
	#endif

	printf("%02d:%02d", this->GetHour(), this->GetMinute());

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Display\n");
	#endif
}

/* Comparison functions  */
/*  Equal function  */
inline bool Time::operator==(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_Equal\n");
	#endif

	return ((this->GetHour() == b.GetHour()) && 
		(this->GetMinute() == b.GetMinute()));

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_Equal\n");
	#endif
}

/*  Not equal function  */
inline bool Time::operator!=(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_NotEqual\n");
	#endif

	return !this->operator==(b);
	
	#ifdef DEBUG
	fprintf(stderr, "\tExit time_NotEqual\n");
	#endif
}

/*  Less than function  */
inline bool Time::operator<(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_LessThan\n");
	#endif

	
	return ((this->GetHour() < b.GetHour())
		|| ((this->GetHour() == b.GetHour()) 
		&& (this->GetMinute() < b.GetMinute())));

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_LessThan\n");
	#endif
}

/*  Greater than function  */
inline bool Time::operator>(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_GreaterThan\n");
	#endif

	return (!this->operator<(b) && !this->operator==(b));

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_GreaterThan\n");
	#endif
}

/*  Less than or equal function  */
inline bool Time::operator<=(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_LessThanOrEqual\n");
	#endif

	return (this->operator<(b) || this->operator==(b));
	
	#ifdef DEBUG
	fprintf(stderr, "\tExit time_LessThanOrEqual\n");
	#endif
}

/*  Greater than or equal function  */
inline bool Time::operator>=(const Time &b) const
{
	#ifdef DEBUG
	fprintf(stderr, "\tEnter time_GreaterThanOrEqual\n");
	#endif

        return (this->operator>(b) || this->operator==(b));

	#ifdef DEBUG
	fprintf(stderr, "\tExit time_GreaterThanOrEqual\n");
	#endif
}
