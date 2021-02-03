#include <iostream>
using namespace std;

int main()
{
    // Multiplication Table.

	for (long long MultiplyAmount = 1; MultiplyAmount <= 10; MultiplyAmount++)
	{
		for (long long NumberToMultiply = 1; NumberToMultiply <= 10; NumberToMultiply++)
		{
			cout << MultiplyAmount << " x " << NumberToMultiply << " = " << MultiplyAmount * NumberToMultiply << endl;
		}
		cout << endl;
	}

    system("pause>0");
}
