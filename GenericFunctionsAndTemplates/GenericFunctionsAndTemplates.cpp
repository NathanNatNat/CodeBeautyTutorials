#include <iostream>
using namespace std;

template <typename T>
void Swap(T& A, T& B)
{
	T Temp = A;
	A = B;
	B = Temp;
}

int main()
{
	int A = 5, B = 7;
	A = 5, B = 7;
	cout << A << " - " << B << endl;
	Swap<int>(A, B);
	cout << A << " - " << B << endl;

	char C = 'c', D = 'd';
	cout << C << " - " << D << endl;
	Swap<char>(C, D);
	cout << C << " - " << D << endl;

	system("pause>0");
}
