#include "Info.h"
#include <string>
#include<iostream>
using namespace std;

Info::Info(string phone, string address_of_club, string professors, string email) {
	this->phone = phone;
	this->address_of_club = address_of_club;
	this->professor = professors;
	this->email = email;

}
string Info::toStr()
{
	return "Information for user: \n1)Phone: " + phone + " \n2)Address of math club: " + address_of_club + " \n3)Professor: " + professor + " \n4)E-mail: " + email;
}
Info info("+380935059706", "Lviv, Chervonoyi Kalyny 46", "Chuzukov Igor Albertovuch", "math.club@gmail.com");
void Info::PrintInfo() {

	cout << info.toStr();
}