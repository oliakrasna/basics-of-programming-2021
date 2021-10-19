#pragma once

#include"Repository.h"
#include"Student.h"
#include<string>
using namespace std;

class StudentRepository : public Repository<Student>
{
protected:
    string GetFileName() { return "Out_students.txt"; }
    string GetTitle() { return "Students:"; }
public:
    StudentRepository(int max) : Repository(max) {}

    ~StudentRepository()
    {
        WriteToFile();
    }

};
