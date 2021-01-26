#include <iostream>
using namespace std;

/*
* Type chart.
* |---------------------|-----------|-----------------------------------|
* |         Type        |   Memory  |       Min and Max values          |
* |---------------------|-----------|-----------------------------------|
* |char                 | 1 byte    | -127 to 127 or 0 to 255           |
* |---------------------|-----------|-----------------------------------|
* |unsigned char        | 1 byte    | 0 to 255                          |
* |---------------------|-----------|-----------------------------------|
* |signed char          | 1 byte    | -127 to 127                       |
* |---------------------|-----------|-----------------------------------|
* |int                  | 4 bytes   | -2.147.483.648 to 2.147.483.647   |
* |---------------------|-----------|-----------------------------------|
* |unsigned int         | 4 bytes   | 0 to 4.294.967.295                |
* |---------------------|-----------|-----------------------------------|
* |signed int           | 4 bytes   | -2.147.483.648 to 2.147.483.647   |
* |---------------------|-----------|-----------------------------------|
* |short int            | 2 bytes   | -32.768 to 32.767                 |
* |---------------------|-----------|-----------------------------------|
* |unsigned short int   | 1 byte    | 0 to 65.535                       |
* |---------------------|-----------|-----------------------------------|
* |signed short int     | 1 byte    | -32.768 to 32.767                 |
* |---------------------|-----------|-----------------------------------|
* |long int             | 4 bytes   | -2.147.483.648 to 2.147.483.647   |
* |---------------------|-----------|-----------------------------------|
* |signed long int      | 4 bytes   | -2.147.483.648 to 2.147.483.647   |
* |---------------------|-----------|-----------------------------------|
* |unsigned long int    | 4 bytes   | 0 to 4.294.967.295                |
* |---------------------|-----------|-----------------------------------|
* |float                | 4 bytes   | +/- 3.4e +/- 38 (~7 digits)       |
* |---------------------|-----------|-----------------------------------|
* |double               | 8 bytes   | +/- 1.7e +/- 308 (~15 digits)     |
* |---------------------|-----------|-----------------------------------|
*/

int main()
{
    int YearOfBirth = 1995;
    char Gender = 'f';
    bool IsOlderThan18 = true;
    float AverageGrade = 4.5;
    double Balance = 435342342435;

    cout << "Size of int is: " << sizeof(int) << " bytes\n";
    cout << "Int min value is: " << INT_MIN << endl;
    cout << "Int max value is: " << INT_MAX << endl;
    cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes\n";
    cout << "Unsigned int max value is " << UINT_MAX << endl;
    cout << "Size of bool is: " << sizeof(bool) << " bytes\n";
    cout << "Size of char is: " << sizeof(char) << " bytes\n";
    cout << "Size of float is: " << sizeof(float) << " bytes\n";
    cout << "Size of double is: " << sizeof(double) << " bytes\n";

    int IntMax = INT_MAX;
    cout << IntMax << " INT_MAX\n";
    cout << IntMax + 1 << " INT_MAX + 1 Datatype overflow: cant go past max value, so resets to min value";


    system("pause>0");
}
