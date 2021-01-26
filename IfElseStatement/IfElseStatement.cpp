#include <iostream>
using namespace std;

int main()
{
    //User enters interger(whole) number.
    //Program writes out if that number is even or odd.

    cout << 2 % 2 << endl; // Modulus, produces the remainder when x is divided by y, x % y.
    cout << 5 % 2 << endl;

    int Number;
    cout << "Please enter a whole number: \n";
    cin >> Number;

    if (Number % 2 == 0)
    {
        cout << "You have entered an even number." << endl;
    }
    else
    {
        cout << "You have entered an odd number." << endl;
    }
    cout << "Thanks, Bye.";


    system("pause>0");
}