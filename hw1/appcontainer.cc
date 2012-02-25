/*	appcontainer.cc
 *
 *
 *	*/

#include "appcontainer.h"


Appcontainer::Appcontainer() {
/*  initialize an Appcontainer object
 *  pre: none
 *  post: Appcontainer has been created and initialized to empty
 *  */
}

void Appcontainer::findbyindividual(const Individual person) {
/*  displays all appointments in the appcontainer that match Individual person,
 *      each matching appointment is preceded by its appointment # for 
 *      deletion / replacement purposes
 *  pre: Appcontainer has been created
 *  post: all appointments in the appcontainer that have the same Individual as
 *      Individual person have been displayed, and each displayed appointment
 *      is preceded by a display of its appointment #
 *  */
	for (int i = 0; i < size(); i++) {
		if ((get(i).GetFirstName() == person.GetFirstName()) &&
			get(i).GetLastName() == person.GetLastName()) {
			DisplayAppNum(i);
			get(i).Display();
		}
	}
}

void Appcontainer::findbytime(const Time t) {
/*  displays all appointments in the appcontainer that are occuring at Time t,
 *      each matching appointment is preceded by its appointment # for 
 *      deletion / replacement purposes
 *  pre: Appcontainer has been created
 *  post: all appointments in the appcontainer that are occuring at Time t
 *      have been displayed, and each displayed appointment is preceded by
 *      a display of its appointment #
 *  */
	for (int i = 0; i < size(); i++) {
		if ((t >= get(i).GetStart()) && (t <= get(i).GetEnd())) {
			DisplayAppNum(i);
			get(i).Display();
			}

	}
}

void Appcontainer::displayday(const Day d){
/*  displays all appointments in the appcontainer that are on Day d
 *  pre: Appcontainer has been created
 *  post: all appointments in the appcontainer that are on Day d have been
 *      displayed
 *  */
	for (int i = 0; i < size(); i++) {
		if (get(i).GetDay() == d) {
			get(i).Display();
		}
	}
}

void Appcontainer::displayweek(){
/*  displays all appointments in the whole week
 *  pre: Appcontainer has been created
 *  post: all appointments for the week have been displayed 
 *  */
	traverse(displaycontainer);
}

void Appcontainer::makeapp(Entry x, Position p) {
/*  makes an appointment x at Position p, then sorted to correct
 *  position
 *  pre: Appcontainer has been created, x is a valid appointment,
 *       0 <= p <= n, where n is number of appointments in week,
 *       and the appointment x does not conflict time-wise with
 *       any appointments already in the container
 *  post: x is inserted into the appcontainer at Position p, all
 *       Positions at p and after have been increased by 1, then
 *       the week is sorted
 *  */

	if (timeavailable(x,size())) {
		insert(x, p);
	}
	sort();
}	

void Appcontainer::changeapp(Entry x, Position p) {
/*  changes the appointment at Position p with entry x, then sorts
 *  to correct position
 *  pre: Appcontainer has been created, 0 <= p <= n, where
 *  	n is the number of appointments in a week, and the
 *  	appointment x does not conflict time-wise with any appoint-
 *  	ments already in the container (excluding the appointment 
 *  	being changed)
 *  post: appointment at Position p has been replaced with x, 
 *  	then week is sorted
 *  */
	if (timeavailable(x,p)) {
		replace(x, p);
	}
	sort();
}

bool Appcontainer::timeavailable(Entry &x, Position exclude) {
/*  checks if there is available space for a new appointment x,
 *  does not check Position exclude
 *  pre: Appcontainer has been created, 0 <= exclude < n, where
 *  	n is the number of appointments in a week
 *  post: returns true if appointment x will not conflict time-wise with
 *  	any other appointments in the week (excluding Position 
 *  	exclude)
 *  */
	for (int i = 0; i < exclude; i ++) {
		if (get(i).Overlap(x)) {
			printf("Cannot make/change the appointment; the");
			printf(" desired time slot is already filled.\n");
			return false;
		} 
	}
	if (exclude != size()) {
		for (int i = exclude + 1; i < size(); i ++) {
			if (get(i).Overlap(x)) {
				printf("Cannot make/change the appointment; ");
				printf("the desired time slot is already filled.\n");
				return false;
			} 
		}
	}
	return true;
}

void Appcontainer::sortbytime() {
	bool done = false;
	while (done == false) {
		done = true;
		for (int i = 0; i < size() - 1; i++) {
			if (get(i).GetStart() > get(i+1).GetStart()) {
				insert(remove(i),i+1);
				done = false;
			}		
		}
	}	
}

void Appcontainer::sortbysingleday(Day d) {
	for (int i = 0; i < size(); i++) {
		if (get(i).GetDay() == d) {
			insert(remove(i),sortplace);
			sortplace++;
		}
	}
}

void Appcontainer::sortbyday() {
	sortplace = 0;
	sortbysingleday('m');
	sortbysingleday('t');
	sortbysingleday('w');
	sortbysingleday('r');
	sortbysingleday('f');
	sortbysingleday('s');
	sortbysingleday('u');
}

void Appcontainer::sort() {
	sortbytime();
	sortbyday();
}



void Appcontainer::DisplayAppNum(const int i) const{
/*  displays an appointment's appointment #
 *      appointment #s are used to specify which appointment a user wants to
 *      modify, and the an appointment's appointment # is equal to the 
 *      appointment's week-container index
 *  pre: Appcontainer has been created
 *  post: displays the appointment # of the appointment at int i
 * */
	printf("Appointment Number: %d\n", i);
}




