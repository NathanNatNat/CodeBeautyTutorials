#include <iostream>
using namespace std;

void ShowMenu();

int main()
{
	// ATM app.
	// Check account balance.
	// deposit money.
	// withdraw money.
	// show menu.

	int MenuOption;
	double AccountBalance = 500;

	do {
		ShowMenu();
		cout << "Please choose an option: ";
		cin >> MenuOption;
		system("cls");

		switch (MenuOption)
		{
			case 1: cout << "The account balance is: " << "£" << AccountBalance << endl; break;
			case 2: cout << "Please enter a deposit amount: ";
				double DepositAmount;
				cin >> DepositAmount;
				AccountBalance += DepositAmount;
				break;
			case 3: cout << "Please enter a withdrawal amount: ";
				double WithdrawalAmount;
				cin >> WithdrawalAmount;
				if (WithdrawalAmount <= AccountBalance)
					AccountBalance -= WithdrawalAmount;
				else
					cout << "Insufficient funds." << endl;
				break;
			default:
				break;
		}
	} while (MenuOption != 4);

	system("pause>0");
}

void ShowMenu()
{
	cout << "**********MENU**********" << endl;
	cout << "1. Check balance." << endl;
	cout << "2. Deposit money." << endl;
	cout << "3. Withdraw money." << endl;
	cout << "4. Exit." << endl;
	cout << "************************" << endl;
}