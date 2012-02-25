/*
 *
 *
 * EE205 
 * Homework 1
 * Appointment_inl.h
 *
 *
 */





/*
 *
 * Accessor Functions
 *
 *
 */


inline Time Appointment::GetStart() const
{ return event.GetStart(); }

inline Time Appointment::GetEnd() const
{ return event.GetEnd(); }

inline int Appointment::GetDuration() const
{ return event.GetDuration(); }

inline Day Appointment::GetDay() const
{ return event.GetDay(); }

inline Name Appointment::GetFirstName() const
{ return person.GetFirstName(); }

inline Name Appointment::GetLastName() const
{ return person.GetLastName(); } 

/*
 *
 * Mutator Functions
 */

inline void Appointment::SetDay(Day day)
{ event.SetDay(day); }

inline void Appointment::SetStart(Time Start)
{ event.SetStart(Start); }

inline void Appointment::SetEnd(Time end)
{ event.SetEnd(end); } 

inline void Appointment::SetDuration(int mins)
{ event.SetDuration(mins); } 


/*
 *
 * Display Functions
 *
 */

inline void Appointment::DisplayName()
{
	person.Display();
}

/*
 *
 * Comparison Functions
 *
 */

inline bool Appointment::operator==(const Appointment &b) const
{
	return(this->person == b.person 
		&&
		this->event == b.event);

}

inline bool Appointment::operator!=(const Appointment &b) const
{
	return(!this->operator==(b));

}

