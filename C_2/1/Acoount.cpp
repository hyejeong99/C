#include "Account.h"

Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}
Account::Account(int newId, double newBalance, double newAnnualInterestRate)
{
	id = newId;
	balance = newBalance;
	annualInterestRate = newAnnualInterestRate;
}
double Account:: getMonthlyInterestRate()
{
	return balance*annualInterestRate / 1200;
}
int Account::withdraw(int money)
{
	balance = balance - money;
	return (balance - money);
}
int Account::deposit(int money)
{
	balance = balance + money;
	return (balance + money);
}
int Account::amount()
{
	return balance;
}