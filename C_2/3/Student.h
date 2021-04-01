#ifndef  STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;
class Student :public Person
{
private:
	string major;
	int idNumber;
public:
	Student(string& major, int idNumber);
	string getMajor() const;
	void setMajor(string& major);
	int getIdNumber()const;
	void setIdNumber(int idNumber);
	string toString()const;
	int getStayYear()const;
};
#endif 
