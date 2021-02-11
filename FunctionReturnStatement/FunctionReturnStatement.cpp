#include <iostream>
using namespace std;

bool IsPrimeNumber(int number);

int main()
{
	// Program for checking prime numbers.
	// In math, prime numbers are whole numbers greater than 1, that have only two factors 1 and the number itself.
	// Prime numbers are divisible only by the number 1 or itself.

	int Number;
	int PrimeNumbers = 0;
	int NonePrimeNumbers = 0;
	cout << "Please enter the max number to check for prime numbers: ";
	cin >> Number;

	for (int i = 0; i <= Number; i++)
	{
		cout << i << (IsPrimeNumber(i) ? " Is a prime number." : " Is not a prime number.") << endl;

		IsPrimeNumber(i) ? PrimeNumbers++ : NonePrimeNumbers++;
	}

	cout << "There are " << PrimeNumbers << " prime numbers and " << NonePrimeNumbers << " none prime numbers within " << 0 <<" - " << Number << ".";

	system("pause>0");
}

bool IsPrimeNumber(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
			break;
		}
	}

	return true;
}
