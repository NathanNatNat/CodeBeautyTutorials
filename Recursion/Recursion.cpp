#include <iostream>
using namespace std;

/*
* function is called within the same function, it is known as recursion in C++.The function which calls the same function, is known as recursive function.
* A function that calls itself, and doesn't perform any task after function call, is known as tail recursion.
* In tail recursion, we generally call the same function with return statement.
*/

// Sum numbers between M-N.

int RecursiveSum(int M, int N)//M = 2, N = 4.
{
	return M == N ? M : M + RecursiveSum(M + 1, N);
}

int Factorial(int FactorialNum)
{
	return !FactorialNum >= 1 ? 1 : FactorialNum * Factorial(FactorialNum -1);
}

int main()
{
	int M = 2, N = 4;
	cout << "Sum = " << RecursiveSum(M, N) << endl;

	int FactorialNum = 6; // Factorial of 6 should be 720.
	cout << "Factorial = " << Factorial(FactorialNum) << endl;

	//int Sum = 0;
	//for (int i = M; i <= N; i++)
	//{
	//	Sum += i;
	//}
	//cout << "Sum = " << Sum << endl;

	system("pause>0");
}
