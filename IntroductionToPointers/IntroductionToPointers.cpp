#include <iostream>
using namespace std;

int main()
{
	int N = 5;
	int* ptr = &N;
	cout << &N << endl; // output: Memory Address.
	cout << ptr << endl; // output: Memory Address.
	cout << *ptr << endl; // Dereference, output: Value stored at Memory Address.
	*ptr = 10; // Changed value at the memory address.
	cout << *ptr << endl;
	cout << N << endl;

	int V;
	int* ptr2 = &V;
	*ptr2 = 7;
	cout << "v = " << V << endl;

	system("pause>0");
}
