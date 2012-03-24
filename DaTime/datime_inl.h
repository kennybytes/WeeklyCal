
/*
 *  File:  datime_inl.h
 *  Name: R1T4
 *  Date:  2/21/2012
 */

/* Datime Inline functions */

#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "day.h"
#include "time.h"

/* Copys day, start, to another day */
inline void DaTime::Copy(DaTime &dest)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Copy\n");
	#endif
	
	dest.Init(this->GetDay(), this->GetStart()
					,this->GetEnd());


	#ifdef DEBUG
	fprintf(stderr, "\tExit Copy\n");
	#endif
}

/* Gets day */
inline Day DaTime::GetDay() const
{
	#ifdef DEBUG
	fprintf(stderr,"\tExecute GetDay\n");
	#endif
	
	return day;
}

/* Gets start time */
inline Time DaTime::GetStart() const
{
	#ifdef DEBUG
	fprintf(stderr,"\tExecute GetStart\n");
	#endif

	return start;
}

/* Gets end time */
inline Time DaTime::GetEnd() const
{
	#ifdef DEBUG
	fprintf(stderr,"\tExecute GetEnd\n");
	#endif

	return end;
}

/* Sets to chosen day */
inline void DaTime::SetDay(Day day)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter SetDay\n");
	#endif

	this->day = day;

	#ifdef DEBUG
	fprintf(stderr, "\tExit SetDay\n");
	#endif
}

/* Sets start time */
inline void DaTime::SetStart(Time start)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter SetStart\n");
	#endif

	this->start = start;

	#ifdef DEBUG
	fprintf(stderr, "\tExit SetStart\n");
	#endif
}

/* Sets end time */
inline void DaTime::SetEnd(Time end)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter SetEnd\n");
	#endif

	this->end = end; 
	#ifdef DEBUG
	fprintf(stderr, "\tExit SetEnd\n");
	#endif
}

/* Does not equal function */
inline bool DaTime::operator!=(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Notoperator==\n");
	#endif

	return (!operator==(b));	

	#ifdef DEBUG
	fprintf(stderr, "\tExit Notoperator==\n");
	#endif
}

/* Greater than function */
inline bool DaTime::operator>(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter GreaterThan\n");
	#endif

	return (!operator<=(b));

	#ifdef DEBUG
	fprintf(stderr, "\tExit GreaterThan\n");
	#endif
}

/* Less than or equal function */
inline bool DaTime::operator<=(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter LessThanOrEqual\n");
	#endif

	return ((this->operator<(b)) || (this->operator==(b)));

	#ifdef DEBUG
	fprintf(stderr, "\tExit LessThanOrEqual\n");
	#endif
}

/* Greater than or equal function */
inline bool DaTime::operator>=(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter GreaterThanOrEqual\n");
	#endif

	return(!this->operator<(b));	

	#ifdef DEBUG
	fprintf(stderr, "\tExit GreaterThanOrEqual\n");
	#endif
}

/* Checks that it doesn't overlap */
inline bool DaTime::NonOverlap(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter NonOverlap\n");
	#endif

	return (!this->Overlap(b));

	#ifdef DEBUG
	fprintf(stderr, "\tExit NonOverlap\n");
	#endif
}


/* Manipulation functions  */
/* Sets to chosen day */
inline void DaTime::ChangeDay(Day day)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter ChangeDay\n");
	#endif

	SetDay(day);

	#ifdef DEBUG
	fprintf(stderr, "\tExit ChangeDay\n");
	#endif
}

/* Sets duration to new duration */
inline void DaTime::ChangeDuration(int dur)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter ChangeDuration\n");
	#endif

	SetDuration(dur);

	#ifdef DEBUG
	fprintf(stderr, "\tExit ChangeDuration\n");
	#endif
}

/* Changes start time */
inline void DaTime::ChangeStart(Time newstart)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter ChangeStart\n");
	#endif

	SetStart(newstart);

	#ifdef DEBUG
	fprintf(stderr, "\tExit ChangeStart\n");
	#endif
}

/* Compares 2 days, to see which is before */
inline bool DaTime::DayBefore(const DaTime &b) const
{
	return(this->DayValue() < b.DayValue());
}

/* Compares if same day */
inline bool DaTime::SameDay(const DaTime &b) const
{
	return(this->DayValue() == b.DayValue());
}

/* Compares if different day */
inline bool DaTime::NotSameDay(const DaTime &b) const
{
	return !this->SameDay(b);
}
