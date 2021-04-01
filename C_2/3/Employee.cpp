#include "Employee.h"
#include "Person.h"
#include <sstream>
#include <iostream>
Employee::Employee(string& department, string& rank, int hiredYear)
{
	department = "aa";
	rank = "ab";
	hiredYear = 2017;
}
Employee::Employee(string& department, string& rank, int hiredYear, string& name, int birthYear)
{
	

}
string Employee::getDepartment() const
{
	return department;
}
void Employee::setDepartment(string& department)
{
	
}
string Employee::getRank()const
{
	return rank;
}
void Employee::setRank(string& rank)
{
	
}
int Employee::getHiredYear()const
{
	return hiredYear;
}
void Employee::setHiredYear(int hiredYear)
{
	
}
string Employee::toString()const
{
	return ("employee");
}
int Employee::getStayYear()const
{
	return (2018 - hiredYear);
}