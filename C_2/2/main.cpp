#include "evenNumber.h"
using namespace std;
int main()
{
	EvenNumber a1 = EvenNumber(16);
	cout << "���� ¦����" << a1.number() << "�Դϴ�." << endl;
	cout << "���� ¦����" << a1.getNext() << "�Դϴ�." << endl;
	cout << "�� ¦����" << a1.getPrevious() << "�Դϴ�." << endl;
	return 0;
}