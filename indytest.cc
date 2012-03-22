//
//	EE205
//	R1T4
//	indytest.cc
//
//	Test driver for the individual class
//


#include <stdio.h>
#include <string.h>
#include "individual.h"
#include "common.h"
main()
{

	Individual one;
	Individual two;
	Individual three;
	Individual four[5];
	TestHead("Initialization Functions");

	Test("Initializing One");
	one.Init("Kenny", "Luong");
	one.Displayln();
		
	Test("Initalizing Two");
	two.Init("Patrick", "Luong");
	two.Displayln();

	Test("Initializing Three");
	three.Init("Xe", "Luong");
	three.Displayln();
	
	Test("Clear One");
	one.Clear();
	one.Displayln();
	
	Test("clear Two");
	two.Clear();
	two.Displayln();
		
	Test("copy three to two");
	two.Display();
	three.Displayln();
	two.Copy(three);
	two.Display(); 
	three.Displayln();
	
	
	TestHead("Testing Accessor Functions");
	
	TestHead("Testing Mutator Functions");
	
	TestHead("Testing Comparison Functions");

	Test("Compare two to three");
	printf("Two ="); 
	two.Displayln();
	printf("Three=");
	three.Displayln();
	if(two==three)
		printf("Two is Equal to Three\n");
	if(two!=three)
		printf("Two is not equal to three\n");

	Test("Compare Three to One");
	printf("one=");
	one.Displayln();
	printf("three=");
	three.Displayln();
	if(one==three)
		printf("Three is equal to one\n");
	if(one!=three)
		printf("Three is not equal to one\n");
	
	TestHead("Testing Manipulation Functions");

	Test("Init one to 'Kenny Luong'");
	one.Init("Kenny", "Luong");
	one.Displayln();
	Test("Change one to 'Xe Luong'");
	one.ChangeIndividual("Xe", "Luong");
	one.Displayln();	            	
		
	

}
