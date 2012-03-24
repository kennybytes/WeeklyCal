//	ee205
//	r1t4
//	Homework 1
//	Individual.cc
//	 
//	The individual object takes care of individual, including the name
//	and the comparisons between individuals.
//
	
	
#include <stdio.h>
#include <string>
#include "individual.h"
#include "common.h"
#include "name.h"



/*
 *
 *	CONSTRUCTORS
 *
 *
 */

Individual::Individual(){
	FirstName.SetName("NULL");
	LastName.SetName("NULL");
}
/*
 *
 *
 *
 *	Initialization Functions
 *
 *
 */
void Individual::Init(Word First, Word Last){

	FirstName.Init(First);
	LastName.Init(Last);
}


void Individual::Clear(){
	FirstName.Clear();
	LastName.Clear();
}


void Individual::Copy(Individual &source){
	FirstName.SetName(source.GetFirstName());
	LastName.SetName(source.GetLastName());
	
}

/*
 *
 *
 *	Accessor Functions
 *
 *
 *
 */




/*
 *
 *
 *
 * Mutator Functions
 *
 *
 *
 *
 */


void Individual::SetIndividual(Name FirstName, Name LastName){
	SetFirstName(FirstName);
	SetLastName(LastName);

}

/*
 *
 *
 *
 * Display Functions
 *
 *
 */

void Individual::Display(){
	FirstName.Display();
	printf(" ");
	LastName.Display();
	printf(" ");
}

void Individual::Displayln(){	
	this->Display();
	printf("\n");
}


/*
 *
 * Comparison Functions
 *
 *
 */

/*	
 *
 * 	Manipulation Functions
 *
 *
 *
 */
void Individual::ChangeIndividual(Word First, Word Last){
	ChangeFirstName(First);	
	ChangeLastName(Last);
}

/*	Private Helper Functions
 *
 *
 *
 *
 *
 */

