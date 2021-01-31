#include <iostream>
using namespace std;

int main()
{
    // Reversing a number.

    int Number, ReversedNumber = 0;
    cout << "Please enter a number: ";
    cin >> Number;

    while (Number != 0)
    {
        ReversedNumber *= 10;
        ReversedNumber += Number % 10;
        Number /= 10;
    }

    cout << "Reversed number is: " << ReversedNumber;

    system("pause>0");
}