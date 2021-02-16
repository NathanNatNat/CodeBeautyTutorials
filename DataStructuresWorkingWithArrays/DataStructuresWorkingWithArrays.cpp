// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
using namespace std;

// Saved Money in 6 months and 2 years.

int main()
{
	// Total, Average, InTwoYears.

	const int ArraySize = 6; // Can be changed at runtime if using a dynamic array.

	float MonthsArray[ArraySize]; //= { 100, 220, 300, 0, 200, 250 }; // 0 1 2 3 4 5
	float Total = 0;

	for (int i = 0; i < ArraySize; i++)
	{
		cout << "Enter amount for month " << i+1 << "(Array Element " << i << "): ";
		cin >> MonthsArray[i];
		Total += MonthsArray[i];
	}

	float Average = Total / ArraySize;
	float InTwoYears = Average * 24;

	cout << "Total = " << Total << endl;
	cout << "Average = " << Average << endl;
	cout << "InTwoYears = " << InTwoYears << endl;

	system("pause>0");
	return 0;
}
