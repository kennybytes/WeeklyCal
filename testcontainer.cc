
/*  File: testcontainer.c
 *  Date: 6 Sep 05
 *  Rev: 25 Sep 07
 *
 *  simple tests for container data type
 */

#include "entry.h"
#include "time.h"
#include "datime.h"
#include "appointment.h"
#include "appcontainer.h"
#include "containerutil.h"

void printcontainer(Entry);

main()
{
   Appcontainer l,k,j;
   Entry a;
   int x;

   Time t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11;
   t1.InitSingle(830);
   t2.InitSingle(930);
   t3.InitSingle(1030);
   t4.InitSingle(1130);
   t5.InitSingle(1230);
   t6.InitSingle(1330);
   t7.InitSingle(1430);
   t8.InitSingle(1530);
   t9.InitSingle(900);
   t10.InitSingle(1531);
   t11.InitSingle(1630);

   Individual i1,i2,i3;
   i1.Init("Robert","Kiessling");
   i2.Init("James","Shirokane");
   i3.Init("John","Smith");;


   Appointment a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
   a1.Init('m',t1,t2,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a2.Init('m',t3,t4,i2.GetFirstName().GetName(),i2.GetLastName().GetName());
   a3.Init('m',t5,t6,i2.GetFirstName().GetName(),i2.GetLastName().GetName());
   a4.Init('m',t7,t8,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a5.Init('t',t1,t2,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a6.Init('m',t8,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a7.Init('m',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());


   a8.Init('f',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a9.Init('r',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a10.Init('w',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a11.Init('t',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());
   a12.Init('m',t10,t11,i1.GetFirstName().GetName(),i1.GetLastName().GetName());



/*
	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	l.insert(a1, 0);
	l.insert(a2, 1);
	l.insert(a3, 2);

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	x = l.size();
	printf("size of Container is %d\n", x);
	
	//l.traverse(printcontainer);
	l.displayweek();
	printf("\n");

	l.insert(a4, 1);
	l.traverse(printcontainer);

	printf("\n");

	a = l.remove(2);
	printf("deleted entry: \n");
	a.Display();
	printf("\n");
	l.traverse(printcontainer);

	printf("\n");

	a = l.get(3);
	printf("retrieved entry:\n");
	a.Display();
	a = l.get(2);
	printf("retrieved entry:\n");
	a.Display();

	printf("\n");

	l.replace(a3, 1);

	l.traverse(printcontainer);
	
	printf("\n");

	printf("clearing...");
	l.clear();

	x = l.size();
	printf("size of container is %d\n", x);

	printf("\n");

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

*/
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("APPCONTAINER TESTS:\n");
	printf("\n");
	
	//  Appcontainer Tests:

	// Testing makeapp
	l.makeapp(a1, 0);
	l.makeapp(a2, 1);
	l.makeapp(a3, 2);
	l.makeapp(a4, 3);
	l.makeapp(a5, 4);

	// Testing display week
	printf("display week:\n");
	l.displayweek();
	printf("\n");

	// Testing makeapp (when desired timeslot might be full)	
	printf("attempt to add appointment:\n");
	a6.Display();
	printf("adding...\n");
	l.makeapp(a6, 5);
	printf("\n");
	l.displayweek();

	printf("\n");
	printf("attempt to add appointment:\n");
	a7.Display();
	printf("adding...\n");
	l.makeapp(a7, 5);
	printf("\n");
	l.displayweek();
	printf("\n");

	// Testing remove
	printf("removing appointment 3:\n");
	printf("     before:\n");	
	l.displayweek();
	l.remove(3);
	printf("     after:\n");
	l.displayweek();
	printf("\n");


	// Testing changeapp
	printf("changing appointment 4 into:\n");
	a6.Display();
	l.changeapp(a6,4);	
	printf("     after change:\n");
	l.displayweek();
	printf("\n");

	// Testing changeapp (when desired timeslot might be full)	
	printf("changing appointment 4 into:\n");
	a2.Display();
	l.changeapp(a2,4);	
	printf("     after change:\n");
	l.displayweek();
	printf("\n");

	// Testing find by individual
	printf("finding by individual: Robert Kiessling\n");
	l.findbyindividual(i1);
	printf("\n");	

	printf("finding by individual: James Shirokane\n");
	l.findbyindividual(i2);
	printf("\n");

	printf("finding by individual: John Smith\n");
	l.findbyindividual(i3);
	printf("\n");

	// Testing find by time
	printf("find by time: 9:00\n");
	l.findbytime(t9);
	printf("\n");

	// Testing display day
	printf("display day: m\n");
	l.displayday('m');
	printf("\n");

	printf("display day: t\n");
	l.displayday('t');
	printf("\n");


	// Testing sorting
	//
	//
	// NOTE: SORTING IS DONE AFTER APPOINTMENT INSERTION SO THESE
	// TESTS NO LONGER REALLY TEST ANYTHING
	//
	//
	//
	printf("testing sorting: clearing week and making new week:\n");
	l.clear();
	l.makeapp(a5, 0);
	l.makeapp(a4, 1);
	l.makeapp(a3, 2);
	l.makeapp(a2, 3);
	l.makeapp(a1, 4);
	l.makeapp(a8, 5);
	l.makeapp(a9, 6);
	l.makeapp(a10, 7);
	l.makeapp(a11, 8);
	l.makeapp(a12, 9);
	l.displayweek();
	printf("     sorting by time...\n");
	l.sortbytime();
	l.displayweek();
	printf("     sorting by day...\n");
	l.sortbyday();
	l.displayweek();	

	printf("\n\n");
	l.clear();
	printf("total sort test:\n");
	printf("original:\n");
	l.makeapp(a5, 0);
	l.makeapp(a4, 1);
	l.makeapp(a3, 2);
	l.makeapp(a2, 3);
	l.makeapp(a1, 4);
	l.makeapp(a8, 5);
	l.makeapp(a9, 6);
	l.makeapp(a10, 7);
	l.makeapp(a11, 8);
	l.makeapp(a12, 9);
	l.displayweek();
	printf("      sorting...\n");
	l.sort();
	l.displayweek();
	printf("\n");	


}

void printcontainer(Entry x)
{  
	x.Display(); 
//	printf("%d\n", x.Display());
}


