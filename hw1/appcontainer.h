#ifndef APPCONTAINER_H
#define APPCONTAINER_H

#include "container.h"
#include <iostream>
typedef int Position;

class Appcontainer: public Container {

public:

	// constructors
	Appcontainer();

	// mutators
	void findbyindividual(const Individual person);
		// displays all appointments matching person
		// includes appointment #s for deletion/replacement
	void findbytime(const Time t);
		// displays all appointments that are at Time t
		// includes appointment #s for deletion/replacement
	void displayday(const Day d);
		// displays all appointments on a Day d 
	void displayweek();
		// displays all appointments in the whole week (entire
		// container)
	void makeapp(Entry x, Position p = -1);
		// makes an appointment x at Position p (-1 is the end
		// of the week), then week is sorted
	void changeapp(Entry x, Position p);
		// changes the appointment at Position p with entry x,
		// then week is sorted
	bool timeavailable(Entry &x, Position exclude);
		// checks if there is available space for a new
		// appointment x, does not check Position exclude 
		// (useful for changeapp function)
	void sortbytime();
		// sorts the week according to time
	void sortbyday();
		// sorts the week according to day
	void sort();
		// sorts the week according to both time and day

private:
	void DisplayAppNum(const int) const;
		// displays the appointment # (for use in deletion/
		// replacement)
	void sortbysingleday(Day d);
		// sorts all appointments of a single day to the 
		// front of the int sortplace
	int sortplace;
};

#endif
