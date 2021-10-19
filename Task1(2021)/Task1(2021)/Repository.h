#pragma once
#include"Error.h"
#include"Student.h"
#include<iostream>
#include<fstream>
using namespace std;

template <class T>
class Repository {
	T* entities;
	int max_value;
	int current_value;

public:

	Repository(int max_value = 100) 
	{
		this->max_value = max_value;
		current_value = 0;
		entities = new T[max_value];
	}
	~Repository() {
		delete[] entities;
	}
	void Add(T& item) 
	{
		if (current_value >= max_value)
			throw Error(ErrorCode::MaxSizeReached);

		entities[current_value++] = item;
	}
	void Remove(int index)
	{
		if (index < 0 || index >= current_value)
			throw Error(ErrorCode::IndexOutsideLimit);

		for (int i = index; i < (current_value - 1); i++)
			entities[i] = entities[i + 1];

		current_value--;
	}
	void Print()
	{
		cout << GetTitle() << endl;
		for (int i = 0; i < current_value; i++)
		{
			cout << entities[i];    
		}
	}
	float GetMaxPoint()
	{
		float Max_point = entities[0].GetPoint();
		for (int i = 0; i < current_value; i++) {
			if (Max_point < entities[i].GetPoint()) {
				Max_point = entities[i].GetPoint();
			}
		}
		return Max_point;
	}

	void GetStudentForContest(int user_input)
	{
	Student student1;
		for (int i = 0; i < current_value; i++)
		{
			for (int j = i + 1; j < current_value; j++)
			{
				if (entities[i].GetPoint() < entities[j].GetPoint())
				{
					student1 = entities[i];
					entities[i] = entities[j];
					entities[j] = student1;
				}
			}
		}
		for (int i = 0; i < user_input; i++)
		{
			cout << entities[i].to_str() << endl;
		}
	}

protected:
	virtual string GetTitle() { return ""; }
	virtual string GetFileName() { return ""; }

	void WriteToFile()
	{
		ofstream Write_in_File(GetFileName());
		Write_in_File << "Students/Professors:\n";
		for (int i = 0; i < current_value; i++)
		{
			Write_in_File << i << ") " << entities[i].to_str() << endl;
		}
		Write_in_File.close();

	}
};