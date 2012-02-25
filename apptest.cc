//
//
//
//
//	EE205 
//	R1T4
//	Homework1 
//	Test Driver for Appointment class
//
//

#include <stdio.h>
#include <string.h>
#include "appointment.h"
#include "datime.h"
#include "time.h"
#include "common.h"
main()
{

	Appointment a1;
	Appointment a2;
	Appointment a3;
	Appointment a4;
	
	Appointment a5[10];
	Time t1;
	Time t2;
	Time t3;

	TestHead("Initialization");
	t1.Init(11,30);
	t2.Init(12,30);
	
	Test("Initializing a1");	
	a1.Init('m', t1, t2, "Kenny", "Luong");
	a1.Display();

	Test("Initializing a2");
	a2.Init('m', t2, t2, "Tep", "Dobry");
	a2.Display();

	Test("Copy a2 to a4");
	a4=a2;
	a4.Display();

	Test("Clear a1");		
	a1.Clear();
	a1.Display();
	
	Test("Clear a2");
	a2.Clear();
	a2.Display();
	
	TestHead("Accessor Functions");
	Test("Initializing a1 to Kenny Luong");
	a1.Init('m', t1, t2, "Kenny", "Luong");
	a1.Display();
	
	Test("Initializing a2 to Tep Dobry");	
	a2.Init('m', t2, t2, "Tep", "Dobry");
	a2.Display();
	
	Test("GetStart for a1");
	a1.GetStart().Display();
	printf("\n");	
	Test("GetEnd for a1");
	a1.GetEnd().Display();
	printf("\n");	
	Test("GetDuration for a1");
	printf("%d\n", a2.GetDuration());
	
	TestHead("Mutator Functions");
	
	TestHead("Display Functions");
	
	TestHead("Comparison Functions");

	
	TestHead("Manipulation Functions");



	
}
	









