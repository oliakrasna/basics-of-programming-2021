#pragma once
#ifndef DRONE_H
#define DRONE_H

#include<string>
using namespace std;

class Student
{
private:
	string name;
	string last_name;
	float point;
	
public:
	Student(string name = "", string last_name = "", float point = 0);
	string to_str();
	string GetName();
	string GetLastName();
	virtual float GetPoint();
	ostream& operator<<(ostream& out);
	friend ostream& operator<<(ostream& out, Student& student);
	friend istream& operator>>(istream& in, Student& student);
	friend bool operator== (const Student& student1, const Student& student2);
	friend bool operator!=(const Student& student1, const Student& student2);
	bool operator>(Student& student);
};

#endif 
