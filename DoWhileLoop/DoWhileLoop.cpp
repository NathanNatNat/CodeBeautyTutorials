#include <iostream>
using namespace std;

int main()
{
	// Program for pin validation.

	int UsersPin = 1234, EnteredPin, AttemptCounter = 0;

	do
	{
		cout << "Enter your Pin: ";
		cin >> EnteredPin;
		if (EnteredPin != UsersPin)
		{
			cout << "Incorrect pin!" << endl;
			AttemptCounter++;
		}
			
	} while (AttemptCounter < 3 && EnteredPin != UsersPin);

	if (AttemptCounter < 3)
		cout << "Loading..";
	else
		cout << "Blocked...";

	system("pause>0");
}
