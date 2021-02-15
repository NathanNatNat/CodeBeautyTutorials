#include <iostream>
using namespace std;

int main()
{
	//int LuckyNumbers[5] = { 2, 3, 5, 7, 9 };
	//cout << LuckyNumbers << endl; // Will output the memory address of the first element in the array.
	//cout << &LuckyNumbers[0] << endl;
	//cout << LuckyNumbers[2] << endl; // will output the 3rd element in the array (the array starts at element 0).
	//cout << *(LuckyNumbers+2) << endl; // will output the 3rd element in the array using dereference (the array starts at element 0).


	int LuckyNumbers2[5];

	for (int i = 0; i <=4; i++)
	{
		cout << "Number: ";
		cin >> LuckyNumbers2[i];
	}

	for (int i = 0; i <= 4; i++)
	{
		//cout << LuckyNumbers2[i] << " ";
		cout << "LuckyNumber " << i << ": " <<*(LuckyNumbers2+i) << endl;
	}

	system("pause>0");
}
