#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int TriangleLength;
	cout << "Please enter the triangle length: ";
	cin >> TriangleLength;
	char Symbol;
	cout << "Please enter the symbol to use: ";
	cin >> Symbol;

	for (int i = 1; i <= TriangleLength; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(3) << Symbol;
		}
		cout << endl << endl;
	}
	cout << endl << endl;

	// Reversed.
	for (int i = TriangleLength; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(3) << Symbol;
		}
		cout << endl << endl;
	}

	system("pause>0");
}
