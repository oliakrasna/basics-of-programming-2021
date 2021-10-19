#pragma once
#include"Repository.h"
#include"Professor.h"
#include<string>
using namespace std;

class ProfessorRepository : public Repository<Professor>
{
protected:
    string GetFileName() { return "Out_professor.txt"; }
    string GetTitle() { return "Robot:"; }
public:
    ProfessorRepository(int max) : Repository(max) {}

    ~ProfessorRepository()
    {
        WriteToFile();
    }
};