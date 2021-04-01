#include <iostream>
#include <string>
using namespace std;

class EvenNumber
{
	int value;
public:
	EvenNumber();
	EvenNumber(int value);
	int getNext();
	int getPrevious();
	int number();
};