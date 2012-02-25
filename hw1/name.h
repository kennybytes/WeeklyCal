//	EE205
//	R1T4
//	name.h
//
//	Defines the Name class
//
//	A name object is a representation of a name, 
//	but just a single name. It does not
//	differentiate between first and last names.
//
//	The name object relies on a std::string, which
//	is type def'd to a 'Word" type. 
//
//
#include <string>
#ifndef NAME
#define NAME

typedef std::string Word;

class Name{
public:

	// Constructors
	Name();
	//~Name();

	// inits;
	void Init(Word name);
	void Clear();
	void Copy(Name &source);
		//copies a name into another name
	// Accessor Functions
	Word GetName() const;
	
	// Mutator Functions
	void SetName(Word name);	
		//Sets a name if given a Word type
	void SetName(Name name);
		//Sets a name if given a name object
	
	// Display Functions
	void Display();
		//Displays the name on the standard out
	void Displayln();
		//Displays a name with a newline
	
	// Comparison Operators
	bool operator==(const Name b) const;
	bool operator!=(const Name b) const;

	// Manipulation Functions
	void ChangeName(Word name);
		//Changes a current name to a new one

private:
	
	Word name;
};

#include "name_inl.h"
#endif

