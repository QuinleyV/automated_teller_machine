#include <iostream>
#include <string>

#include "ATM.h"

using namespace std;



double ATM::getBalance()
{
	cout << balance << endl;
	return balance;
}

void ATM::setBalance(double amount)
{
	balance = amount;
}

void ATM::setWithdraw(double amount)
{

	if (balance > amount)
		balance = balance - amount;
	else
		cout << "Error: Insufficient Funds";

}

void ATM::setDeposit(double amount)
{
	balance = balance + amount;

}

double ATM::deposit()
{
	double deposAmount;

	cout << "Enter deposit amount: ";
	cin >> deposAmount;

	cout << "depositing now! ";

	setDeposit(deposAmount);

	return deposAmount;
}

double ATM::withdrawMenu()
{
	double wthdrwLimit = 800;
	int wthdrwChoice;
	double wthdrwAmount;

	cout << "Quick Withdraw" << endl;
	cout << "1: $20" << endl;
	cout << "2: $40" << endl;
	cout << "3: $60" << endl;
	cout << "4: $80" << endl;
	cout << "5: $100" << endl;
	cout << "6: $120" << endl;
	cout << "7: Other Amount" << endl;
	cout << "Enter choice here: ";
	cin >> wthdrwChoice;

	switch (wthdrwChoice)
	{
	case 1:
		setWithdraw(20);
		break;
	case 2:
		setWithdraw(40);
		break;
	case 3:
		setWithdraw(60);
		break;
	case 4:
		setWithdraw(80);
		break;
	case 5:
		setWithdraw(100);
		break;
	case 6:
		setWithdraw(120);
		break;
	case 7:
		cout << "Withdraw amount: ";
		cin >> wthdrwAmount;
		if (wthdrwAmount > wthdrwLimit || wthdrwAmount <= 0.0)
		{
			cout << "Enter valid amount: ";
			cin >> wthdrwAmount;
		}
		else
			setWithdraw(wthdrwAmount);
		break;



	}

	return wthdrwChoice;

}

void ATM::mainMenu(int& choice)
{


	cout << "Thanks for banking with us, what would you like to do today?" << endl;
	cout << "1: Withdraw" << endl;
	cout << "2: Deposit" << endl;
	cout << "3: Balance" << endl;
	cout << "4: Quit" << endl;
	cout << "Enter: ";
	cin >> choice;

	if (choice < 1 || choice > 5)
	{
		cout << "Enter a valid choice: ";
		cin >> choice;
	}

}

ATM::ATM()
{
	balance = 100000;
}
