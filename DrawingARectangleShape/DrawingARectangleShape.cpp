#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int RectangleHeight, RectangleWidth;

	cout << "Please enter rectangle height: ";
	cin >> RectangleHeight;
	cout << "Please enter rectangle width: ";
	cin >> RectangleWidth;
	char Symbol;
	cout << "Please enter symbol to use: ";
	cin >> Symbol;

	for (int Height = 0; Height < RectangleHeight; Height++)
	{
		for (int Width = 0; Width < RectangleWidth; Width++)
		{
			cout << setw(3) << Symbol;
		}
		cout << endl;
	}

	system("pause>0");
}
