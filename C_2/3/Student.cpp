#include "Student.h"
#include "Person.h"
#include <sstream>
#include <iostream>
Student::Student(string& major, int idNumber)
{
	major = "ab";
	idNumber = 2;
}
string Student::getMajor()const
{
	return major;
}
void Student::setMajor(string& major)
{
	
}
int Student::getIdNumber()const
{
	return idNumber;
}
void Student::setIdNumber(int idNumber)
{
	
}
string Student::toString() const
{
	return ("student");
}
int Student::getStayYear()const
{
	return (18 - idNumber);
}
