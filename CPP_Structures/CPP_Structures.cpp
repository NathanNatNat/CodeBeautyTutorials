// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
using namespace std;

struct SmartPhone
{
	string PhoneName{ };
	int StorageSpace{ };
	string Color{ };
	double Price{ };
};

struct Person
{
	string Name{ };
	int Age{ };
	SmartPhone Smart_Phone{ };
};

void PrintSmartPhoneInfo(const SmartPhone &Smart_Phone)
{
	cout
		<< "Phone name: " << Smart_Phone.PhoneName << endl
		<< "Storage Space: " << Smart_Phone.StorageSpace << "GB" << endl
		<< "Color: " << Smart_Phone.Color << endl
		<< "Price: " << Smart_Phone.Price << " GBP" << endl << endl;
}

void PrintPersonInfo(const Person &Person)
{
	cout
		<< "Name: " << Person.Name << endl
		<< "Age: " << Person.Age << endl;
		PrintSmartPhoneInfo(Person.Smart_Phone);
}

int main()
{
	SmartPhone Smart_Phone;
	Smart_Phone.PhoneName = { "Samsung Galaxy S5" };
	Smart_Phone.StorageSpace = { 16 };
	Smart_Phone.Color = { "Black" };
	Smart_Phone.Price = { 499.99 };

	SmartPhone Smart_Phone2;
	Smart_Phone2.PhoneName = { "Samsung Galaxy S10" };
	Smart_Phone2.StorageSpace = { 32 }; //-V112
	Smart_Phone2.Color = { "Gray" };
	Smart_Phone2.Price = { 799.99 };

	PrintSmartPhoneInfo(Smart_Phone);
	PrintSmartPhoneInfo(Smart_Phone2);

	Person Person;
	Person.Name = { "Saldina" };
	Person.Age = { 26 };
	Person.Smart_Phone = { Smart_Phone2 };
	PrintPersonInfo(Person);

	cout << endl << endl;
	return 0;
}
