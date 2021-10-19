#include "Student.h"
#include"Error.h"
#include <string>
#include<iostream>
using namespace std;

Student::Student(string name, string last_name, float p_point)
{
	this->name = name;
	this->last_name = last_name;
	if (p_point < 0 || p_point > 12)
		throw Error(ErrorCode::Incorrect_point);
	point = p_point;
	
}

string Student::to_str()
{
	return "Student: " + name + " " + last_name + " " + to_string(point);
}

string Student::GetName()
{
	return name;
}
string Student::GetLastName()
{
	return last_name;
}
float Student::GetPoint()
{
	return point;
}

ostream& Student::operator<<(ostream& out)
{
	return out << name << " " << last_name << " " << point << " " << "\n";
}

ostream& operator<<(ostream& out, Student& student)
{
	return student << cout;
}
istream& operator>>(istream& in, Student& student)
{
	char* name = new char[50];
	char* last_name = new char[50];
	int point;

	in >> name >> last_name >> point;

	student = Student(name, last_name, point);

	return in;
}
bool operator== (const Student& student1, const Student& student2)
{
	return (student1.name == student2.name &&
		student1.last_name == student2.last_name && student1.point == student2.point);
}

bool operator!=(const Student& student1, const Student& student2) {
	return !(student1 == student2);
}
bool Student::operator>(Student& student)
{
	return this->point > student.point;
}