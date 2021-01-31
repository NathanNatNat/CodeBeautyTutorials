#include <iostream>
using namespace std;

int main()
{
	// Count digits of a number.

	int Number;
	cout << "Please enter a number: ";
	cin >> Number;

	if (Number == 0)
		cout << "You have entered 0." << endl;
	else
	{
		if (Number < 0)
			Number = -1 * Number;

		int DigitsCounter = 0;

		while (Number > 0)
		{
			//Number = Number / 10;
			Number /= 10;
			DigitsCounter++;
		}
		cout << "Entered number contains: " << DigitsCounter << " digits" << endl;
	}

	system("pause>0");
}
