#include "Account.h"
using namespace std;
int main()
{
	Account a1 = Account(1122,20000.0,4.5);
	a1.withdraw(2500);
	cout << "ù��° ��ü�� �ܾ���" << a1.amount() << endl;
	cout << "ù��° ��ü�� ��������" << a1.getMonthlyInterestRate() << endl;
	Account a2 = Account(1133,1500.0,5.0);
	a2.deposit(5000);
	cout << "�ι�° ��ü�� �ܾ���" << a2.amount() << endl;
	cout << "�ι�° ��ü�� ��������" << a2.getMonthlyInterestRate() << endl;
	
	return 0;
}