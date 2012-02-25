
/*  File: testcontainer.c
 *  Date: 6 Sep 05
 *  Rev: 25 Sep 07
 *
 *  simple tests for container data type
 */

#include "appcontainer.h"
#include "entry.h"
#include "appointment.h"

void printcontainer(Entry);

main()
{
	Container l;
	Appointment a1;
	Time t1;
	Time t2;
	Individual person;

	t1.SetHour(10);
	t1.SetMinute(30);

	t2.SetHour(7);
	t2.SetMinute(50);
	
	person.Init("Kenny", "Luong");	
	person.Displayln();
	
	t1.Display();
	printf("\n");
	t2.Display();
	printf("\n");
	
	a1.Init('m', t1, t2, "Kenny", "Luong");
	a1.Display();
	if(l.isempty())
	{
		printf("l is empty\n");
	}
		
	printf("size of container is %d\n", l.size());
	l.insert(a1);	
	printf("size of container is %d\n", l.size());
}
/*
void printcontainer(Entry x)
{   printf("%d\n", x);   }  */

