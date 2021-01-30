#include <iostream>
using namespace std;

/*
* The five arithmetical operations supported by C++ are:
* |----------|----------------------------------------------------------|
* |	operator |						description							|
* |----------|----------------------------------------------------------|
* |	   +	 |	addition												|
* |----------|----------------------------------------------------------|
* |	   -	 |	subtraction												|
* |----------|----------------------------------------------------------|
* |	   *	 |	multiplication											|
* |----------|----------------------------------------------------------|
* |	   /	 | 	division												|
* |----------|----------------------------------------------------------|
* |	   %	 |	modulo (gives the remainder of a division of two values)|
* |----------|----------------------------------------------------------|
*
* The relational operators in C++ are:
* |----------|-----------------------------------|
* | operator |	 description					 |
* |----------|-----------------------------------|
* |	  ==	 |	(a==b)  Equal to				 |
* |----------|-----------------------------------|
* |	  !=	 |	(a!=b)  Not equal to			 |
* |----------|-----------------------------------|
* |	  <		 |	(a<b)   Less than				 |
* |----------|-----------------------------------|
* |	  >		 |	(a>b)   Greater than			 |
* |----------|-----------------------------------|
* |	  <=	 |	(a<=b)  Less than or equal to	 |
* |----------|-----------------------------------|
* |   >=	 |	(a>=b)  Greater than or equal to |
* |----------|-----------------------------------|
*/

int main()
{
	cout << "Operators.";
	cout << "\n\nArithmetical:\n";
	// Arithmetical.
	//+,-,*,/,%
	cout << 5 + 2 << endl;
	cout << 5 / 2 << endl; // will output 2, needs to be float or double: cout << 5 / 2.0 << endl; = 2.5
	cout << 5 % 2 << endl; // remainder division, will output 1: 5 % 2 = remainder 1

	//++, --
	int counter = 7;
	counter++; // increment counter + 1
	cout << counter << endl;
	counter--; // decrement counter - 1
	cout << counter << endl;

	// pre/post increment/decrement.
	int counter2 = 7;
	cout << counter2++ << endl; // post increment, will show no change as the increment has happened after the output.
	counter2 = 7; // reset
	cout << ++counter2 << endl; // pre increment, will show counter2 + 1 as the increment has happened before the output.
	//system("cls"); // Clear console.

	cout << "\n\nRelational:\n";
	// Relational.
	// <,>,<=,>=,==,!=
	int a = 5, b = 5;
	cout << (a > b) << endl; // is a greater than b? returns 0 (false) as they are the same.
	a = 6, b = 5;
	cout << (a > b) << endl; // is a greater than b? returns 1 (true) as 6 is greater than 5.
	//system("cls"); // Clear console.

	cout << "\n\nLogical:\n";
	//Logical.
	//&&,||,!
	a = 5, b = 8;
	cout << (a == 5 && b == 5) << endl; // is a equal to 5 AND is b equal to 5? returns 0 (false) as a is equal to 5, but b is not.
	cout << (a == 5 || b == 5) << endl; // is a equal to 5 OR is b equal to 5? returns 1 (true) as a is equal to 5.
	cout << !(a == 5 || b == 5) << endl; // is a NOT equal to 5 OR is b NOT equal to 5? returns 0 (false) as b is not equal to 5.
	cout << (a == 5 && b == 5+3) << endl; // is a equal to 5 and is b equal to 5 plus 3 (8)? returns 1 (true).
	//system("cls"); // Clear console.

	cout << "\n\nAssignment:\n";
	//Assignment.
	//=,+=,-=,*=,/=,%=
	int x = 5;
	x += 7; // X = X + 7 (X = 5 + 7) = 12.
	cout << x << endl;

	system("pause>0");
}
