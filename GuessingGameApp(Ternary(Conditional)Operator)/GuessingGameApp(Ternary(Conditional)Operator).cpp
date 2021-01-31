#include <iostream>
using namespace std;

// Guessing Game.
// Two users.
// First user enters a number.
// Clear the entered number from the console so the second user can't see it.
// Second user enters a guess number.


int main()
{
	int FirstUserNumber, SecondUserNumber;
	cout << "First user please enter a number: ";
	cin >> FirstUserNumber;
	system("cls"); // Clear console.
	cout << "Second user please enter your guess number: ";
	cin >> SecondUserNumber;

	//(FirstUserNumber == SecondUserNumber) ? cout << "Correct!" : cout << "Incorrect!"; // Ternary(Conditional) Operator.
	cout << ((FirstUserNumber == SecondUserNumber) ? "Correct!" : "Incorrect!"); // Same as above, but within one cout.

	/* Normal if/else
	if (FirstUserNumber == SecondUserNumber)
		cout << "Correct!";
	else
		cout << "Incorrect!";*/

	system("pause>0");
}
