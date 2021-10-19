#include "Command.h"
#include "Student.h"
#include "Error.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Processing::Processing(int max_value): studentRepository(max_value), professorRepository(max_value)
{
	ReadStudentFromFile();
	ReadProfessorFromFile();
}
Processing::~Processing()
{
	
}

//
void Processing::AddStudent(Student& student)
{
	studentRepository.Add(student);
}

void Processing::RemoveStudent(int index)
{
	studentRepository.Remove(index);
}

void Processing::PrintStudent()
{
	studentRepository.Print();
}
 
//
void Processing::AddProfessor(Professor& professor)
{
	professorRepository.Add(professor);
}

void Processing::RemoveProfessor(int index)
{
	professorRepository.Remove(index);
}

void Processing::PrintProfessor()
{
	professorRepository.Print();
}
//

void Processing::GetMaxPoint()
{
	cout << studentRepository.GetMaxPoint();
}
void Processing::GetStudentForContest(int user_input)
{
	studentRepository.GetStudentForContest(user_input);
}

void Processing::ReadStudentFromFile()
{
	string text;
	ifstream MyReadStudents("In_students.txt");
	while (getline(MyReadStudents, text)) {
		int index = 0;
		int k = 0;
		index = text.find(".", index + 1);
		string name1 = text.substr(k, index - k);
		k = index + 2;
		index = text.find(".", index + 1);
		string last_name1 = text.substr(k, index - k);
		k = index + 2;
		index = text.find(".", index + 1);
		string p = text.substr(k, index - k);
		float point1 = stof(p);
		Student student1(name1, last_name1, point1);
		studentRepository.Add(student1);
	}
	MyReadStudents.close();
}

void Processing::ReadProfessorFromFile()
{
	string text;
	ifstream MyReadProfessors("In_professors.txt");
	while (getline(MyReadProfessors, text)) {
		int index = 0;
		int k = 0;
		index = text.find(".", index + 1);
		string name1 = text.substr(k, index - k);
		k = index + 2;
		index = text.find(".", index + 1);
		string last_name1 = text.substr(k, index - k);
		k = index + 2;
		index = text.find(".", index + 1);
		string r = text.substr(k, index - k);
		float rating1 = stof(r);
		Professor professor1(name1, last_name1, rating1);
		professorRepository.Add(professor1);
	}
	MyReadProfessors.close();
}


Student& Processing::GetBiggerPoint(Student& student1, Student& student2) {
	if (student1 != student2) {
		if (student1 > student2) {
			return student1;
		}
		else {
			return student2;
		}
	}
}

Professor& Processing::GetBiggerRating(Professor& professor1, Professor& professor2) {
	if (professor1 != professor2) {
		if (professor1 > professor2) {
			return professor1;
		}
		else {
			return professor2;
		}
	}
}