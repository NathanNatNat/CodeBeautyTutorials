#include <iostream>
using namespace std;

int main()
{
	// Body mass index calculator
	// weight(kg) / (height * height(m))
	// Underweight < 18.5
	// Normal weight 18.5-24.9
	// Overweight >25

	cout << "Body mass index calculator." << endl;
	float Weight, Height, BMI;
	cout << "Please enter Weight in Kilograms: ";
	cin >> Weight;
	cout << "Please enter Height in Metres: ";
	cin >> Height;

	BMI = Weight / (Height * Height);

	if (BMI < 18.5)
		cout << "You are underweight." << endl;
	else if (BMI > 25)
		cout << "You are overweight." << endl;
	else
		cout << "You have a normal weight." << endl;

	cout << "Your Body mass index is: " << BMI << endl;


	system("pause > 0");
}
