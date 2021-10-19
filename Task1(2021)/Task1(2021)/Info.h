#pragma once
#ifndef INFO_H
#define INFO_H
#include<string>
using namespace std;
class Info
{
private:
	string phone;
	string address_of_club;
	string professor;
	string email;
public:
	Info(string phone = "", string address_of_club = "", string professors = "", string email = "");
	string toStr();
	void PrintInfo();

};
#endif 
