#include <iostream>
#include <string>
using namespace std;

class Account
{
	int id;
	double balance;
	double annualInterestRate;

public:
	Account();
	Account(int newId, double newBalance, double newAnnualInterestRate);
	double getMonthlyInterestRate();
	int withdraw(int money);
	int deposit(int money);
	int amount();
};