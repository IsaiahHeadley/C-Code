#include <iostream>  
						
#include <string>
#include <iomanip>

using namespace std;

//Global Declarations of Variables
double iovertime_hours=0, iovertime_pay=0, iovertime_extra=0; 
int ihours, iwage;
string cname;

int main ()
{
	//Enter Employee Information
	cout << "\n\nEnter the employee name = ";
	cin >> cname ;
	cout << "Enter the hours worked  = "  ; 
	cin >> ihours;
	cout << "Enter his or her hourly wage = " ;
	cin >> iwage;   

	// Determine if hours are greater than 40 
	if (ihours < 40)   
	{
		//Do Calculations
		iovertime_hours=0; 
		iovertime_pay=iwage-1.5; 
		iovertime_extra=iovertime_hours*iovertime_pay;

		//Display Employee Details  
		cout << "\n\n";  
		cout << "Employee Name ............. = " << cname << endl; 
		cout << "Base Pay .................. = " << iwage*40 << endl; 
		cout << "Hours in Overtime ......... = " << iovertime_hours << endl;
		cout << "Overtime Pay Amout......... = " << iovertime_extra << endl;
		cout << "Total Pay ................. = " << iovertime_extra+(40*iwage) << endl;  
	}    
	else // Else hours are less than 40 hours
	{
		cout << "\n\n";
		cout << "Employee Name ............. = " << cname << endl;
		cout << "Base Pay .................. = " << iwage*40 << endl;				cout << "Hours in Overtime ......... = " << iovertime_hours << endl;
		cout << "Overtime Pay Amout......... = " << iovertime_extra << endl;
		cout << "Total Pay ................. = " << iovertime_extra+(40*iwage) << endl; 

	} // End of the primary if statement 

} //End of Int Main

    