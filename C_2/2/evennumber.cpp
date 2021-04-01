#include "evenNumber.h"

EvenNumber::EvenNumber()
{
	value = 0;
}
EvenNumber::EvenNumber(int newValue)
{
	value = newValue;
}
int EvenNumber::getNext()
{
	return (value + 2);
}
int EvenNumber::getPrevious()
{
	return (value - 2);
}
int EvenNumber::number()
{
	return value;
}