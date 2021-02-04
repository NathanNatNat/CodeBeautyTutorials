#include <iostream>
using namespace std;

void IntroduceMe(string name, string city, int age = 0);

int main()
{
	string Name, City;
	int Age;

	cout << "Please enter your name: ";
	cin >> Name;
	cout << "Please enter the city you live in: ";
	cin >> City;
	cout << "Please enter your age: ";
	cin >> Age;

	IntroduceMe(Name, City, Age);

	system("pause>0");
}

void IntroduceMe(string name, string city, int age)
{
	cout << "My name is " << name << "." << endl;
	cout << "I live in " << city << "." <<  endl;

	if (age!=0)
	cout << "I am " << age << " years old." << endl;
}
