#include "Person.h"
#include <sstream>
#include <iostream>
Person::Person()
{
	name = "aa";
	bithYear = 1;
}
Person::Person(string&name, int birthYear)
{
	
}
string Person::getName()const
{
	return name;
}
void Person::setName(string& name)
{
	
}
int Person::getBirthYear()const
{
	return bithYear;
}
void Person::setBirthYear(int birthYear)
{
	
}
string Person::toString()const
{
	return ("person");
}
int Person::getStayYear()const
{
	return (2018 - bithYear);
}