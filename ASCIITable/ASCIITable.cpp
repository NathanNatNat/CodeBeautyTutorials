#include <iostream>
using namespace std;

int main()
{
	cout << (int)'a' << endl;
	cout << int('a') << endl;
	cout << int('a') << endl;
	cout << char(65) << endl;

	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letters: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "ASCII message int: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;
	cout << "ASCII message char: " << char(c1) << char(c2) << char(c3) << char(c4) << char(c5);

	system("pause>0");
}
