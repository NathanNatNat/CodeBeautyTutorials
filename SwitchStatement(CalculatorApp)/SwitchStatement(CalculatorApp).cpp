#include <iostream>
using namespace std;

// Calculator app.
// User enters two numbers with an operation sign.
// Calculate the result and write it to the console.

int main()
{
	float FirstNumber, SecondNumber;
	char Operation;

	cout << "**Calculator.**" << endl;
	cout << "Please enter the numbers you want calculating with the operation you would like to be performed(e.g: 2x2): " << endl;
	cin >> FirstNumber >> Operation >> SecondNumber;

	switch (Operation)
	{
		case '-': cout << FirstNumber << Operation << SecondNumber << " = " << FirstNumber - SecondNumber << endl; break;
		case '+': cout << FirstNumber << Operation << SecondNumber << " = " << FirstNumber + SecondNumber << endl; break;
		case '/': cout << FirstNumber << Operation << SecondNumber << " = " << FirstNumber / SecondNumber << endl; break;
		case '*': cout << FirstNumber << Operation << SecondNumber << " = " << FirstNumber * SecondNumber << endl; break;
		case '%':
			// Modulo Operation cant be float or double.
			bool IsFirstNumberInt, IsSecondNumberInt;
			IsFirstNumberInt = ((int)FirstNumber == FirstNumber);
			IsSecondNumberInt = ((int)SecondNumber == SecondNumber);

			if (IsFirstNumberInt && IsSecondNumberInt && SecondNumber!=0)
				cout << FirstNumber << Operation << SecondNumber << " = " << (int)FirstNumber % (int)SecondNumber << endl;
			else
				cout << "Modulo operation requires whole numbers, Please enter valid numbers!" << endl;
			break;
		default: cout << "Not a valid Operation!" << endl;
	}



	system("pause>0");
}
