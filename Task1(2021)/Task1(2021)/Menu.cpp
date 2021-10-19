#include "Menu.h"
#include "Student.h"
#include "Professor.h"
#include "Error.h"
#include"Command.h"
#include"Repository.h"
#include <iostream>
#include <string>
#include "Info.h"
using namespace std;

void Menu::ShowMenu()
{
	char user_input;

	do {
		showMainMenu();
		cin >> user_input;
		safeHandleUserInput(user_input);

		cout << endl;
	} while (user_input != '0');
}

void Menu::showMainMenu()
{
	cout << "Math club!!!\nPlease choose the option:\n";
	cout << "1 - Add new student;\n";
	cout << "2 - Print students;\n";
	cout << "3 - Remove student;\n";
	cout << "a - Add new professor;\n";
	cout << "b - Print professors;\n";
	cout << "c - Remove professor;\n";
	cout << "4 - Get Max point;\n";
	cout << "5 - Get information\n";
	cout << "6 - Students for contest ;\n";
	cout << "7 - Get bigger point betweent 2 students\n";
	cout << "8 - Get bigger rating betweent 2 professors\n";
	cout << "9 - Print student by indx ;\n";
	cout << "0 - Exit.\n";
}

void Menu::showAndHadnleAddStudentMenu()
{
	cout << "Enter information of student by space:" << endl;
	Student student;
	cin >> student;
	processing.AddStudent(student);

	cout << "Student added!\n";
}

void Menu::showAndHadnleRemoveStudentMenu()
{
	int index;
	cout << "Input student index\n";
	cin >> index;

	processing.RemoveStudent(index);
	cout << "Student removed!\n";
}

void Menu::showAndHadnleAddProfessorMenu()
{
	cout << "Enter information of professor by space:" << endl;
	Professor professor;
	cin >> professor;
	processing.AddProfessor(professor);

	cout << "Professor added!\n";
}

void Menu::showAndHadnleRemoveProfessorMenu()
{
	int index;
	cout << "Input professor index\n";
	cin >> index;

	processing.RemoveProfessor(index);
	cout << "Professor removed!\n";
}

void Menu::safeHandleUserInput(char user_input)
{
	try
	{
		handleUserInput(user_input);
	}
	catch (Error& error)
	{
		cout << "Error occurs: " << error.to_str() << endl;
	}
	catch (...)
	{
		cout << "Some error occurs" << endl;
	}
}

void Menu::handleUserInput(char user_input)

{
	Student student1("Krasna", "Olia", 7);
	Student student2("Horyn", "Yulia", 11);
	Student student3("Andr", "Irina", 10);
	Student student4("Gura", "Oleh", 7);
	Student student5("Borus", "Ostap", 8);
	Student student6("Boiko", "Anna", 9);
	Student students [] = { student1, student2, student3, student4, student5, student6 };
	Info info("+380935059706", "Lviv, Chervonoyi Kalyny 46", "Chuzukov Igor Albertovuch", "math.club@gmail.com");

	Professor professor1("Igor", "Albertovuch", 5);
	Professor professor2("Alla", "Olegivna", 4.5);
	Professor professor3("Taras", "Ostapovuch", 3.3);
	Professor professors[] = { professor1, professor2, professor3 };


	switch (user_input)
	{
	case '1':
		showAndHadnleAddStudentMenu();
		break;
	case '2':
		processing.PrintStudent();
		cout << endl;
		break;
	case '3':
		showAndHadnleRemoveStudentMenu();
		break;
	case 'a':
		showAndHadnleAddProfessorMenu();
		break;
	case 'b':
		processing.PrintProfessor();
		cout << endl;
		break;
	case 'c':
		showAndHadnleRemoveProfessorMenu();
		break;
	case '4':
		cout << "Max point is " << endl;
		processing.GetMaxPoint();
		break;
	case '5':
		cout << " " << endl;
		info.PrintInfo();
		break;
	case '6':
		int user_input;
		cout << "Enter number of students for contest" << endl;
		cin >> user_input;
		processing.GetStudentForContest(user_input);
		break;
	case '7':
		cout << "Higher point\n" << processing.GetBiggerPoint(student1, student2) << endl;
		break;
	case '8':
		cout << "Higher rating\n" << processing.GetBiggerRating(professor1, professor2) << endl;
		break;
	case'9':
		int idx;
		cout << "Input index from 0 to 5 to get the element of array\n";
		cin >> idx;
		cout << students[idx] << endl;
		break;

	default:
		cout << "Wrong command selected\n";
		break;
	}
}