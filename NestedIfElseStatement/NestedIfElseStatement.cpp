#include <iostream>
using namespace std;

int main()
{

	//User enters side lengths of a triangle (a,b,c).
	//Program should write out whether that triangle is equilateral, isosceles or scalene.
	//equilateral: In geometry, an equilateral triangle is a triangle in which all three sides have the same length.
	//isosceles: In geometry, an isosceles triangle is a triangle that has two sides of equal length.
	//scalene: A scalene triangle has all its sides of different lengths.

	float a, b, c;
	cout << "a, b, c: " << endl;
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral triangle" << endl;
	else
	{
		if (a != b && a != c && b != c)
			cout << "Scalene triangle" << endl;
		else
			cout << "isosceles triangle" << endl;
	}

	system("pause>0");
}
