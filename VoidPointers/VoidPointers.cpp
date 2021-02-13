#include <iostream>
using namespace std;

void PrintNumber(int* NumberPtr)
{
	cout << *NumberPtr << endl;
}

void PrintLetter(char* CharPtr)
{
	cout << *CharPtr << endl;
}

void Print(void* Ptr, char Type)
{
	switch (Type)
	{
		case 'i': cout << *((int*)Ptr) << endl; break; // Handle int*
		case 'c': cout << *((char*)Ptr) << endl; break;// Handle char*
		default: break;
	}
}

int main()
{
	int Number = 5;
	char Letter = 'A';
	//PrintNumber(&Number);
	//PrintLetter(&Letter);
	Print(&Number, 'i');
	Print(&Letter, 'c');

	system("pause>0");
}
