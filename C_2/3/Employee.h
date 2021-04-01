#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;
class Employee :public Person
{
private:
	string department;
	string rank;
	int hiredYear;
public:
	Employee(string& department, string& rank, int hiredYear);
	Employee(string& department, string& rank, int hiredYear, string& name, int birthYear);
	string getDepartment() const;
	void setDepartment(string& department);
	string getRank()const;
	void setRank(string& rank);
	int getHiredYear()const;
	void setHiredYear(int hiredYear);
	string toString()const;
	int getStayYear()const;
};
#endif