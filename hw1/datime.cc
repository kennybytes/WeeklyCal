/*
 *  File:  datime.c
 *  Name:
 *  login: 
 *  Date:  25 Aug 07
 *  Mod:
 */

/*  Implementation of DaTime data type operations
 */


#include <stdio.h>
#include "datime.h"
#include "time.h"
#include "common.h"
#include "individual.h"

/* #define DEBUG */
/* Initialization functions   */
void DaTime::Init(Day day, Time start, Time end)
{	
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Init\n");
	#endif

	SetDay(day);
	SetStart(start);
	SetEnd(end);

	#ifdef DEBUG
	fprintf(stderr, "\tExit Init\n");
	#endif
}

void DaTime::Clear()
{	
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Clear\n");
	#endif

	SetDay('\0');
	start.Clear();
	end.Clear();

	#ifdef DEBUG
	fprintf(stderr, "\tExit Clear\n");
	#endif
}

/* Accessor functions  */

int DaTime::GetDuration() const
{
	#ifdef DEBUG
	fprintf(stderr,"\tExecute GetDuration\n");
	#endif

	Time t1 = this->GetStart();
	Time t2 = this->GetEnd();
	return t1.Difference(t2);
		
}	

/* Mutator functions */

void DaTime::SetDuration(int mins)
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter SetDuration\n");
	#endif

	Time s = GetStart();
	Time e = s.Add(mins);

	SetEnd(e);

	#ifdef DEBUG
	fprintf(stderr, "\tExit SetDuration\n");
	#endif
}



/* Display functions  */
void DaTime::Display()
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Display\n");
	#endif

	switch(GetDay())
	{
	   case 'u':	printf("Sunday ");
			break;
	   case 'm':	printf("Monday ");
			break;
	   case 't':	printf("Tuesday ");
			break;
	   case 'w':	printf("Wednesday ");
			break;
	   case 'r':	printf("Thursday ");
			break;
	   case 'f':	printf("Friday ");
			break;
	   case 's':	printf("Saturday ");
			break;
	   default:	printf("Unknown day ");
	};
	start.Display();
	putchar('-');
	end.Display();
	putchar('\n');

	#ifdef DEBUG
	fprintf(stderr, "\tExit Display\n");
	#endif
}


/* Comparison functions  */
bool DaTime::operator==(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter operator==\n");
	#endif

	if (this->GetDay() == b.GetDay())
	{
		Time s1 = this->GetStart();
		Time s2 = b.GetStart();	

		if (s1.operator==(s2))
		{
			Time e1 = this->GetEnd();
			Time e2 = b.GetEnd();

			if (e1.operator==(e2))
			{
				return TRUE;
			}
			else return FALSE;	
		}
		else return FALSE;	
	}
	else return FALSE;

	#ifdef DEBUG
	DEBUG fprintf(stderr, "\tExit operator==\n");
	#endif 
}

bool DaTime::operator<(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter operator<\n");
	#endif
	
	if (DayBefore(b)) 
	{
		return TRUE;
	}
	else if (SameDay(b))
	{
		Time t1 = this->GetEnd();
		Time t2 = b.GetStart();
		if (t1.operator<(t2))
		{
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;

	#ifdef DEBUG
	fprintf(stderr, "\tExit operator<\n");
	#endif
}

bool DaTime::Overlap(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Overlap\n");
	#endif
	
	Time a_start = this->GetStart();
	Time a_end = this->GetEnd();
	Time b_start = b.GetStart();
	Time b_end = b.GetEnd();

	if(this->GetDay() == b.GetDay())
	{
/*
		if( a_start.operator<=(b_start)  &&
			a_end.operator<=(b_start)	) 
		{
			return FALSE;
		}

		if( b_start.operator<=(a_start) &&
			b_end.operator<=(a_start)	)
		{
			return FALSE;
		}
		else 
			return TRUE;
*/

		if ( ( a_start.operator<=(b_end) &&
			a_start.operator>=(b_start) )
				||
		   ( b_start.operator<=(a_end) &&
			b_start.operator>=(a_start) ) )
		{		
			return TRUE;
		}
		else return FALSE;
	}
	else 
		return FALSE;

	#ifdef DEBUG
	fprintf(stderr, "\tExit Overlap\n");
	#endif
}


/* Manipulation functions  */

DaTime DaTime::Merge(DaTime &b)
{  DaTime temp;
   Time sa = this->GetStart();
   Time sb = b.GetStart();
   Time ea = this->GetEnd();
   Time eb = b.GetEnd();

	#ifdef DEBUG
	fprintf(stderr,"\tEnter Merge\n");
	#endif

	if(this->GetDay() != b.GetDay())
	{
	//	Warning("Cannot merge across days; result cleared");
		temp.Clear();
		return temp;
	}
	
	if( sb.operator<(sa))
	{

		temp.SetDay(b.GetDay());
		temp.SetStart(b.GetStart());
		temp.SetEnd(this->GetEnd());

	}
	else
	{
	
		temp.SetDay(this->GetDay());
		temp.SetStart(this->GetStart());
		temp.SetEnd(b.GetEnd());
	}

	#ifdef DEBUG
	fprintf(stderr, "\tExit Merge\n");
	#endif

		
	return temp;
}

int DaTime::Difference(const DaTime &b) const
{
	#ifdef DEBUG
	fprintf(stderr,"\tEnter Difference\n");
	#endif
	int diff1, diff2;
	Time Sa = this->GetStart();
	Time Ea = this->GetEnd();
	Time Sb = b.GetStart();
	Time Eb = b.GetEnd();
		
	/* Check beginning dates of the events */
	/* If the first event is before the next event */

	if (this->NotSameDay(b))
	{
		printf("Cannot find difference; non-equal days\n");
		return -1;
	}
	else 
	{	
		if (this->NonOverlap(b))
		{
			/*
			diff1 = Ea.Difference(Sb);
			diff2 = Eb.Difference(Sa);
			if (diff1 < diff2) return diff1;
			else return diff2;		
			*/
			
			if (Ea.operator<(Sb))
			{
				printf("Debugger note: Ea,Sb\n");		
				printf("Ea:%d",Ea);
				printf("Sb:%d",Sb);
				return Ea.Difference(Sb);
			}
			else 
			{
				printf("Debugger note: Eb,Sa\n");
				return Eb.Difference(Sa);
			}
		}
		else 
		{
			return 0;
		}
	}
	
	#ifdef DEBUG
	fprintf(stderr, "\tExit Difference\n");
	#endif
}

int DaTime::DayValue() const
{
	switch(this->GetDay())
	{
		case 'u':	return 0;
		case 'm':	return 1;
		case 't':	return 2;
		case 'w':	return 3;
		case 'r':	return 4;
		case 'f':	return 5;
		case 's':	return 6;
		default:	return -1;
	};
}	
