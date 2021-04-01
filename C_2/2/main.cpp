#include "evenNumber.h"
using namespace std;
int main()
{
	EvenNumber a1 = EvenNumber(16);
	cout << "현재 짝수는" << a1.number() << "입니다." << endl;
	cout << "다음 짝수는" << a1.getNext() << "입니다." << endl;
	cout << "전 짝수는" << a1.getPrevious() << "입니다." << endl;
	return 0;
}