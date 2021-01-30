#include <iostream>
using namespace std;

int main()
{
    // Program for swapping values of two variables.
    // Value swap using a third variable.
    int a = 20;
    int b = 10;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "Value Swap using a third variable: " << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    // Value swap without using a third variable.
    int c = 20;
    int d = 10;
    cout << "\n\nC: " << c << endl;
    cout << "D: " << d << endl;
    cout << "Value Swap without using a third variable: " << endl;
    c = c + d; // 30.
    d = c - d; // 20.
    c = c - d; // 10.
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;

    system("pause>0");
}
