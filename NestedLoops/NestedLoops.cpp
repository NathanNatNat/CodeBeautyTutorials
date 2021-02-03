#include <iostream>
using namespace std;

int main()
{
	int Grade, GradeSum = 0;

	for (int i = 0; i < 3; i++)
	{
		do 
		{
			cout << "Please enter grade " << i + 1 << ": ";
			cin >> Grade;

		} while (Grade < 1 || Grade > 5);

		GradeSum += Grade;
	}

	cout << "Sum of grades = " << GradeSum << endl;
	cout << "Average grade = " << (float)GradeSum / 3 << endl;

	system("pause>0");
}
