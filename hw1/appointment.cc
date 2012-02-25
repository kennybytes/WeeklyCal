//	EE205
//	R1T4
//	Homework 1
//	appointment.cc
//
//	The appointment object represents a single appointment
//	with a time, day and an individual's name.
//

#include <string.h>
#include <stdio.h>
#include "appointment.h"

/*
 *
 * 	Constructors
 *
 */

Appointment:: Appointment()
{
	Time t1;
	t1.SetHour('0');
	t1.SetMinute('0');
	

	this->Init('m', t1, t1, "NULL", "NULL");
}

Appointment:: Appointment (const Appointment &source)
{
	person = source.person;
	event = source.event;
	
}


/*
 *
 *	 Initialization Functions
 *
 */


void Appointment::Init(Day day, Time Start, Time End, 
			Word FirstName, Word LastName)
{

	event.Init(day, Start, End);
	person.Init(FirstName, LastName);
}

void Appointment::Clear()
{
	event.Clear();
	person.Clear();
}

void Appointment::Copy(Appointment &x)
{
	Init(x.GetDay(),x.GetStart(),x.GetEnd(),x.GetFirstName().GetName(),x.GetLastName().GetName());
}

/*
 *
 *	 Accessor Functions
 *
 */



/*
 *
 * 	Mutator Functions
 *
 */

void Appointment::SetIndividual(Name FirstName, Name LastName)
{
	person.SetFirstName(FirstName); 
	person.SetLastName(LastName);
}



/*
 *
 * 	Display Functions
 *
 */

void Appointment::Display()
{ 
	person.Displayln();
	event.Display();
	printf("\n");
}


/*
 *
 * Comparison Functions
 */

bool Appointment::Overlap(Appointment &b) {
	DaTime d1,d2;
	d1.Init(GetDay(),GetStart(),GetEnd());
	d2.Init(b.GetDay(),b.GetStart(),b.GetEnd());
//	printf("DISPLAYING 2 DATIMES\n");
//	d1.Display();
//	printf("next\n");
//	d2.Display();
//	if (d1.Overlap(d2)) { printf("OVERLAPPING!\n"); }
//	else { printf("NOT OVERLAPPING!\n"); }	

	return d1.Overlap(d2);
}

bool Appointment::NonOverlap(Appointment &b) {
	return !Overlap(b);
}











