//	R1T4 
//	Homework 1
//	individual.h
//
//
//	An 'Individual' object represents an individual. 
//	Currently, that individual is only made up of a 
//	first name and a last name, but there is room
//	for additions later on if need be. 
//
//	Currently, the individual object is made up of two
//	name objects, a first name and a last name.
//
//

#include <stdio.h>
#include "name.h"
#include <string>

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H


class Individual{

public:
 	Individual();
	//~individual();
	
	// Initialization function
	void Init(Word First, Word Last);
	void Clear();
	void Copy(Individual &source);

	// Accessor Functions
	Name GetFirstName() const;
	Name GetLastName() const;


	// Mutator Functions
	void SetFirstName(Name FirstName);
	void SetLastName(Name LastName);
	void SetIndividual(Name FirstName, Name LastName);

	// Display Functions
	void Display();
	void Displayln();


	// Comparison FUnctions
	bool operator==(const Individual &b) const;
	bool operator!=(const Individual &b) const;

	// Manipulation Functions
	void ChangeIndividual(Word First, Word Last);
	void ChangeFirstName(Word First);
	void ChangeLastName(Word Last);



private:
	Name FirstName;
	Name LastName;

};

#include "individual_inl.h"
#endif
