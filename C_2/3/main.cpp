#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"
#include"Person.h"
#include"Student.h"
using namespace std;
bool compareYear(const Person & p1, const Person &p2);
void swapidNumbers(int* &p1, int* &p2);
int main()
{
	ifstream input("student.txt");
	string field;
	int mi;
	string name;
	int ni;
	input >> field >> mi >> name >> ni;
	cout << "Student: " << name << " " << mi << endl;
	input >> field >> mi >> name >> ni;
	cout << "Student: " << name << " " << mi << endl;
	input.close();

	cout << "Enter the Name:" << endl;
	string name1;
	cin >> name1;
	cout << "Enter the department and rank:" << endl;
	string department;
	string rank;
	cin >> department >> rank;
	cout << "Enter the hired Year:" << endl;
	int hiredYear;
	cin >> hiredYear;
	cout << "Enter the birthYear:" << endl;
	int bithYear;
	cin>> bithYear;
	Employee a1(department, rank, hiredYear);

	Employee a2(department, rank, hiredYear, name, bithYear);

	cout << "the more stay person:" << endl;
	cout << "the more stay person:" << endl;

	cout << "swap the idNumbers of two students" << endl;
	cout << "Students" << endl;
	cout << "Students" << endl;

	cout << "file close" << endl;
}
bool compareYear(const Person & p1, const Person &p2)
{
}
void swapidNumbers(int* &p1, int* &p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}