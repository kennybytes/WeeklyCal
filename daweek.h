// 	R1T4 
// 	Homework 1
// 	daweek.h
//
//	This class is implemented to keep track of appointments over a 
//	given week. 


class DaWeek {

public:
	// Constructors
	DaWeek();
	~DaWeek();

	// accessors
	bool isempty() const;
	bool isfull() const;
	int size() const;
	Appointment get(Position p) const;

	// mutators
	void clear();
	// void traverse??
	void insert();
	Appointment remove();
	void replace();
	
	
private: 
	
	ListNode *Sunday;
	ListNode *Monday;
	ListNode *Tuesday;
	ListNode *Wednesday;
	ListNode *Thursday;
	ListNode *Friday;
	ListNode *Saturday;
		
	
}
