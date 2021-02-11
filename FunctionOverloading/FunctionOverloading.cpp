#include <iostream>
using namespace std;

int Sum(int A, int B);
double Sum(double A, double B);
float Sum(float A, float B, float C);

int main()
{
	cout << Sum(1, 2) << endl;
	cout << Sum(4.4, 3.3) << endl;
	cout << Sum(4.4, 3.3, 2.2) << endl;

	system("pause>0");
}

int Sum(int A, int B)
{
	return A + B;
}

double Sum(double A, double B)
{
	return A + B;
}

float Sum(float A, float B, float C)
{
	return A + B + C;
}