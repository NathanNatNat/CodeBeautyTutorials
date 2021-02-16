#include <iostream>
using namespace std;

int main()
{
	int Rows, Collumns;
	cout << "Rows, Collumns: ";
	cin >> Rows >> Collumns;

	int** Table = new int*[Rows];

	for (int i = 0; i < Rows; i++)
	{
		Table[i] = new int[Collumns];
	}

	Table[1][2] = 88;

	for (int i = 0; i < Rows; i++)
	{
		delete[] Table[i];
	}

	delete[] Table;
	Table = NULL;

	system("pause>0");
}