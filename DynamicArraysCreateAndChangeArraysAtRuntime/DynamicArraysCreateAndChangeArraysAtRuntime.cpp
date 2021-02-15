#include <iostream>
using namespace std;

int main()
{
	int Size;
	cout << "Please enter array size: ";
	cin >> Size;
	//int MyArray[Size];

	// "new" allocates memory at runtime, must be de-allocated with "delete" once no longer needed!
	int* MyArray = new int[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << "Array[" << i << "]: ";
		cin >> MyArray[i];
	}

	for (int i = 0; i < Size; i++)
	{
		//cout << "Array element " << i << " = " << MyArray[i] << endl;
		cout << "Array element " << i << " = " << *(MyArray+i) << endl;
	}

	// "new" allocates memory at runtime, must be de-allocated with "delete" once no longer needed!
	delete []MyArray;
	MyArray = NULL;

	system("pause>0");
}
