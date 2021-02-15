#include <iostream>
using namespace std;

int	GetMin(int Numbers[], int Size)
{
	int Min = Numbers[0];

	for (int i = 1; i < Size; i++)
	{
		if (Numbers[i] < Min)
			Min = Numbers[i];
	}

	return Min;
}

int	GetMax(int Numbers[], int Size)
{
	int Max = Numbers[0];

	for (int i = 1; i < Size; i++)
	{
		if (Numbers[i] > Max)
			Max = Numbers[i];
	}

	return Max;
}

void GetMinAndMax(int Numbers[], int Size, int* Min, int* Max)
{
	for (int i = 1; i < Size; i++)
	{
		if (Numbers[i] < *Min)
			*Min = Numbers[i];

		if (Numbers[i] > *Max)
			*Max = Numbers[i];
	}
}

int main()
{
	int Numbers[5] = { 5, 4, -2, 29, 6 };

	cout << "Min is: " << GetMin(Numbers, 5) << endl;
	cout << "Max is: " << GetMax(Numbers, 5) << endl << endl;

	int Min = Numbers[0];
	int Max = Numbers[0];

	GetMinAndMax(Numbers, 5, &Min, &Max);

	cout << "Min2 is: " << Min << endl;
	cout << "Max2 is: " << Max << endl << endl;

	system("pause>0");
}
