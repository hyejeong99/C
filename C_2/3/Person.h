#ifndef  PERSON_H
#define PERSON_H
#include<string>
#include <iostream>
using namespace std;
class Person
{
private:
	string name;
	int bithYear;
public:
	Person();
	Person(string&name, int birthYear);
	string getName()const;
	void setName(string& name);
	int getBirthYear()const;
	void setBirthYear(int birthYear);
	string toString()const;
	int getStayYear()const;
};
#endif

