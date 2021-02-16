// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
using namespace std;

void MyFunction()
{
	// Memory leak as we have not released the memory using "delete" after no longer needed, standard compiler will not detect this, PVS studio will.
	// V773 Visibility scope of the 'ptr' pointer was exited without releasing the memory. A memory leak is possible. DetectingErrorsInCodeUsingPVSStudio.cpp 15
	int* ptr = new int [5];
	ptr[2] = 10;

	cout << "Hi, I am = " << ptr[2] << endl;
}

void MyFunction2()
{
	int* ptr = new int[5];
	ptr[2] = 10;

	cout << "Hi, I am = " << ptr[2] << endl;
	// V611 The memory was allocated using 'new T[]' operator but was released using the 'delete' operator. 
	// Consider inspecting this code. It's probably better to use 'delete [] ptr;'. DetectingErrorsInCodeUsingPVSStudio.cpp 25
	delete ptr; // should be "delete [] ptr;" // Memory leak as we have not released the memory for the entire array, standard compiler will not detect this, PVS studio will.
}

int main()
{
	int SavedMoney[5] = { 100, 200, 300, 400, 500};
	int Total = 0;

	for (int i = 0; i < 5; i++) // Should be i < 5, not i <=5.
	{
		// V557 Array overrun is possible. The value of 'i' index could reach 5. DetectingErrorsInCodeUsingPVSStudio.cpp 36
		Total += SavedMoney[i]; 
	}


	Total = 0;
	// V621 Consider inspecting the 'for' operator. 
	// It's possible that the loop will be executed incorrectly or won't be executed at all.DetectingErrorsInCodeUsingPVSStudio.cpp 44
	// V654 The condition 'i < 5' of loop is always true. DetectingErrorsInCodeUsingPVSStudio.cpp 44
	//for (int i = 0; i < 5; i--) // Should be i++, not i--. this will cause an infinite loop and crash.
	//{
	//	Total += SavedMoney[i];
	//}

	cout << "Total: " << Total;

	MyFunction();
	MyFunction2();

	system("pause>0");
}
