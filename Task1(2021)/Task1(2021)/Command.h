#pragma once
#ifndef PROCESSING_H
#define PROCESSING_H
#include"Student.h"
#include"Professor.h"
#include"StudentRepository.h"
#include"ProfessorRepository.h"

class Processing {

	StudentRepository studentRepository;
	ProfessorRepository professorRepository;
	
public:
	Processing(int max_value = 100);
	~Processing();

	void AddStudent(Student& student);
	void RemoveStudent(int index);
	void PrintStudent();
	void GetMaxPoint();
	void GetStudentForContest(int user_input);
	void ReadStudentFromFile();
	Student& GetBiggerPoint(Student& student1, Student& student2);

	void AddProfessor(Professor& professor);
	void RemoveProfessor(int index);
	void PrintProfessor();
	//void GetMaxPoint();
	//void GetStudentForContest(int user_input);
	void ReadProfessorFromFile();
	Professor& GetBiggerRating(Professor& professor1, Professor& professor2);

};

#endif