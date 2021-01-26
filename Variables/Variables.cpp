#include <iostream>
using namespace std;

int main()
{
    float AnnualSalary;
    cout << "Please enter your annual salary: ";
    cin >> AnnualSalary;
    float MonthlySalary = AnnualSalary / 12;
    cout << "Your monthly salary is: " << MonthlySalary << endl;
    cout << "In 10 years you will earn: " << MonthlySalary * 10;

    char Character = 'a';


    system("pause>0");
}
