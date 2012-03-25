//	R1T4 
//	Homework 1
//	appointment.h
//
//	An appointment object is the object that binds
//	a DaTime object and an Individual class together
//	to represent an appointment. Currently, there
//	are not other objects that are added to the 
//	appointment class. 
//
//

#include <stdio.h>
#include "../Individual/individual.h"
#include "../DaTime/datime.h"
#include "../Common/common.h"
#include "../Individual/name.h"
#include "../DaTime/time.h"


#ifndef APPOINTMENT_H
#define APPOINTMENT_H

class Appointment{

public:
	Appointment();
	Appointment(const Appointment &source);
	//~Appointment;
	
	// Initialization Functions
	void Init(Day day, Time Start, Time End,
				Word FirstName, Word LastName);

	void Clear();
	void Copy(Appointment &x);
	
	// Accessor Functions
	Time GetStart() const;
	Time GetEnd() const;
	int GetDuration() const;
	Day GetDay() const;
	Name GetFirstName() const;
	Name GetLastName() const;	

	// Mutator Functions
	void SetDay(Day day);
	void SetStart(Time start);
	void SetEnd(Time end);
	void SetDuration(int mins);
	void SetIndividual(Name FirstName, Name LastName);

	// Display Functions
	void Display();
	void DisplayName();
	void DisplayTime();
	void DisplayStart();
	void DisplayEnd();
	void DisplayDay();

	// Comparison Functions 
	bool operator==(const Appointment &b) const;
	bool operator!=(const Appointment &b) const;
	bool Overlap(Appointment &b);
	bool NonOverlap(Appointment &b);

	// Manipulation Functions
	void ChangeDay(Day day);
	void ChangeDuration(int dur);
	void ChangeStart(Time newstart);
	

private:
	
	DaTime event;
	Individual person;

};

#include "appointment_inl.h"
#endif
