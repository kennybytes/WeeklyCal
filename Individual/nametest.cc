//
//
//	EE205
//	T1R4
//	Homework 1
//
//	nametest.cc
//	
//	Main test driver for the name class
//

#include <string.h>
#include <stdio.h>
#include "name.h"

main()
{

	Name person1;
	Name person2;
	Name person3;
	Name person4;
/*
 *
 * 	Test Inits
 *
 */
	printf("Init Person1= Kenny\n");
	person1.Init("Kenny");
	person1.Displayln();
	
	printf("Clear person1\n");
	person1.Clear();
	person1.Displayln();
	
	printf("Init person2 = Kenny\n");
	person2.Init("Kenny");
	person2.Displayln();
	
	printf("Init person3 = Patrick\n");
	person3.Init("Patrick");
	person3.Displayln();

	printf("Init person4 = Kenny\n");
	person4.Init("Kenny");
	person4.Displayln();


/*	
 *	Test Comparison Operators
 *
 */
	printf("\n");

	if(person2==person3)
		printf("person2 equals person3\n");
	else if(person2!=person3)
		printf("person2 does not equal person3\n");
	
	if(person2==person4)
		printf("person2 equals person4\n");
	else if(person2!=person4)
		printf("person2 does not equal person4\n");	

/*
 *
 * 	Test Manipluation Function
 *
 */
	printf("\n");

	printf("Change name of person2 to patrick\n");
	printf("Before change, person3=");
	person3.Displayln();
	printf("After Change, person3=");
	person3.ChangeName("Kenny");	
	person3.Displayln();
}
