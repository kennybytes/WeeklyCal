

/*
 *
 * Accessor Functions
 *
 */



inline Name Individual::GetFirstName() const {
	return FirstName;
}

inline Name Individual::GetLastName() const{
	return LastName;
}



/*
 *
 *
 * Mutator Functions
 *
 *
 */

inline void Individual::SetFirstName(Name FirstName){
	this->FirstName.SetName(FirstName);
}


inline void Individual::SetLastName(Name LastName){
	this->LastName.SetName(LastName);

}



/*
 *
 *
 * Comparison Functions
 *
 */


inline bool Individual::operator==(const Individual &b) const{
	
	return(this->GetFirstName() == b.GetFirstName() &&
			this->GetLastName() ==b.GetLastName());

}

inline bool Individual::operator!=(const Individual &b) const{

	return!(*this==b);
}

/*
 *
 * Manipulation Functions
 *
 */

inline void Individual::ChangeFirstName(Word First){

	FirstName.ChangeName(First);
}

inline void Individual::ChangeLastName(Word Last){

	LastName.ChangeName(Last);
}

/*
 *
 * Private Helper Functions
 *
 *
 */


