#include <iostream>
using namespace std;

// Checking the number of days in a month.
// User enters a year and a month.
// program writes out how many days there are in that month.

enum months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{	
	// Check for Leap Year.
	// (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)

	int Year, Month;
	cout << "Please Enter the Year: ";
	cin >> Year;
	cout << "Please enter the month: ";
	cin >> Month;

	switch (Month)
	{
		case February: (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) ? cout << "29 days month." : cout << "28 days month."; break;
			// 30 day months.
		case April:
		case June:
		case September:
		case November: cout << "30 days month."; break;
			// 31 day months.
		case January:
		case March:
		case May:
		case July:
		case August:
		case October:
		case December: cout << "31 days month."; break;
		default: cout << "Not a Valid Month!"; break;
	}

	system("pause>0");
}
