#include <iostream>
using namespace std;

int main()
{
	// Write out all the numbers between 100-500 that are divisable by 3 and 5.

	int Counter = 100;
	int CounterMax = 500;

	while (Counter <= CounterMax)
	{
		if (Counter % 3 == 0 && Counter % 5 == 0)
			cout << Counter << " is divisible by 3 and 5." << endl;

		Counter++; // Without this, there will be a infinite loop.
	}

	system("pause>0");
}
