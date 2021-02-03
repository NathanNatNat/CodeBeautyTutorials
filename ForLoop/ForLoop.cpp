#include <iostream>
using namespace std;

int main()
{
	// Calculating the factorial of a number.
	// The factorial of a number is the product of all the integers from 1 to that number.
	// For example, the factorial of 6 is 1*2*3*4*5*6 = 720. Factorial is not defined for negative numbers, and the factorial of zero is one, 0! = 1.

	int Number;
	cout << "Please enter a number: ";
	cin >> Number;

	int Factorial = 1;

	/*
	//initial value.  Condition. Increment.
	for (int i = 1; i <= Number; i++)
	{
		Factorial*= i;
	}*/

	for (int i = Number; i >= 1; i--)
	{
		Factorial *= i;
	}

	cout << Number << "!=" << Factorial;

	system("pause>0");
}
