/*
 *
 *
 * 	EE205
 * 	Homework 1
 * 	weeklycal.cc
 */
#include <iostream>
#include <string.h>
using namespace std;
#include "appcontainer.h"
#include "container.h"
#include <stdio.h>
#include <cstdlib>
#include "time.h"
#include "datime.h"
#include "appointment.h"
#include "containerutil.h"
#include "individual.h"
#define ERROR -2

void DisplayHead(const char *input);
void DisplayMenu(void);
char CheckInput(char input[]);
void DisplayApps(Appcontainer &week, char selection);
Appointment Make(Appcontainer &week);
void Find(Appcontainer &week);
void change(Appcontainer &week, int entry);
void cancel(Appcontainer &week, int entry);
void DisplayFindMenu(void);
Individual ReadIndividual(void);
Time ReadTime(void);
int ReadAppNum(void);

int main()
{
	Appcontainer week, l;
	char input;
	char menu[]="m f d c h q";
	
	// Display Initial Options
	 
	system("clear");
	DisplayMenu();
	while(input!='Q')
	{	
	cout << "Enter Command: ";
	switch(input = CheckInput(menu))
	{
		case 'm':
			week.makeapp(Make(week));
			system("clear");                          	
                	DisplayMenu();
	        	cout << "New Appointment Created" << endl;
			break;
		case 'f':
			Find(week);
			break;
		case 'd':
			char selection;
			cout << "Type 'a' for entire week--"
			<< "Otherwise: m-Monday, t-Tuesday, w-Wenesday, r-Thursday, f-Friday, s-Saturday, u-Sunday" <<endl
			<< "Enter Selection: ";
			cin >> selection;
			DisplayApps(week, selection);
			
			
			break;
		case 'c':
			cout << "Error: cannot cancel appointment--"
				<< "must search" 
				<< "for an appointment first" << endl;
			break;
		case 'h':
			cout << "Error: cannot change appointment -- must search "
				"for an appointment first"<< endl;
			break;
		case 'E': cout << "Error: Incorrect Input" << endl;
		
		case 'q': return 1;	
		default: 
			//invalid input
			break;
	}

	}
	
	system("clear");

}
Appointment Make(Appcontainer &week)
{
	Appointment temp;
	Word FirstName;
	Word LastName;
	Day day;
	Time Start;
	Time End;
	int tempint;
	int tempint2;
	system("clear");
	//cout << "Making New Apointment" << endl;
	DisplayHead("MAKE APPOINTMENT");
	//Get Individual Name
	cout << "First Name: ";
	cin >> FirstName; 
	
	cout << "Last Name: ";
	cin >> LastName;

	//Get Day
	cout << "Day: ";
	cin >> day;
	
	//Get time
	cout<< "Start Time: ";
	scanf("%d:%d", &tempint, &tempint2);
	Start.Init(tempint, tempint2);

	cout<< "End Time: ";
	scanf("%d:%d", &tempint, &tempint2);
	End.Init(tempint, tempint2);
	
	temp.Init(day, Start, End, FirstName, LastName);
	temp.Display();

	return temp;
	
			
}

void Find(Appcontainer &week){
	char ch = 0;
	char FindOptions[] = "i t c h m";
	
	DisplayFindMenu();
	
	
	

	while(ch!='m')
	{
	
		cout << "Enter Command: ";
		switch(ch=CheckInput(FindOptions))
		{
			case 'i':
 				DisplayFindMenu();       
				//Search BY individual	
				cout << "Search by Indvidual" << endl;
				week.findbyindividual(ReadIndividual());
				cout << "Search By Individual"
					<< "results printed." <<endl;
				break;
			case 't':
				DisplayFindMenu();
				cout<< "Search by Time" <<endl;
				week.findbytime(ReadTime());
				cout <<"Search by Time" 
					<<"results printed"<< endl;
				break;
			case 'c':
				cout << "Cancel Appointment" <<endl;
				cout << "Appointment Number: ";
				char in;
				in = ReadAppNum();
				if(in!=ERROR) week.remove(in);
				break;

			case 'h':
				//change
				cout << "Change Appointment" <<endl;
				cout << "Appointment Number: ";
				in = ReadAppNum();
				if(in!=ERROR) week.changeapp(Make(week), in);

				break;
			case 'm':
				//back to menu
				break;
			default: 
				break;
		}

	}
	

system("clear");
	DisplayMenu();
}


void DisplayApps(Appcontainer &week, char selection){
	system("clear");
	DisplayMenu();
	switch(selection)
	{

		case 'a':
			week.displayweek();
			break;
		case 'm':
		case 't':
		case 'w':
		case 'r':
		case 'f':
		case 's':
		case 'u': 
			week.displayday(selection);
			break;
		default:
			break;
	}
	cout << "Appointments displayed." <<endl;	
		
}

void DisplayHead(const char *input){

	cout << "===========================================================" <<endl;
	cout <<"\t\t" << input << "\t\t" << endl;
	cout << "===========================================================" <<endl;


}

void DisplayMenu(void){
	DisplayHead("MAIN MENU");
	cout << "m - Make Appointments     d - Display Appointment" <<endl
	<<"f - Find Appointments     q - Quit" << endl;
	
}

char CheckInput(char input[]){
	char ch;
	cin >> ch;
	
	// Cross check user input
	char *pch;
	pch = strchr(input, ch);
	
	//if not valid, return E (not valid)
	if(!pch)
	{
		return 'E';
	}
	return ch;
}

Individual ReadIndividual()
{
	Individual temp;
	Word FirstName;
	Word LastName;
	cout << "FirstName: ";
	cin >> FirstName;
	cout << "LastName: ";
	cin >> LastName;
	
	temp.Init(FirstName,LastName);
	return temp;
}

void DisplayFindMenu(void)
{
	system("clear");                                                 	
        DisplayHead("FIND APPOINTMENTS");
        cout << "i - Search by Individual  t - Search by Time" <<endl
        	<< "c - Cancel Appointment  h - Change Appointment" <<endl
        	<< "m - Back to Main Menu" << endl;
}

Time ReadTime()
{
	Time temp;
	int tempint;
	int tempint2;
	cout << "Search Time: ";
	scanf("%d:%d", &tempint, &tempint2);
	
	temp.SetHour(tempint);
	temp.SetMinute(tempint2);
	return temp;
}

int ReadAppNum()
{
	int temp;
	char ch;
	cin >> temp;
	cout << "Confirm: Are sure you want to change/delete"
		<< "Entry Number [" << temp<< "] (Y/n)";
	cin >> ch;
	switch(ch)
	{
		case 'Y':
			return temp;
			break;
		case 'n':
			return ERROR;
			break;
	}
}
	
