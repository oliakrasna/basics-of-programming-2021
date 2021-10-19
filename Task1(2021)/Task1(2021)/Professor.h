#ifndef PROFESSOR_H
#define PROFESSOR_H

#include<iostream>
#include<string>
#include "Error.h"
using namespace std;

class Professor
{
private:
    string name;
    string last_name;
    int rating;
   
public:
    Professor(string name = "", string last_name = "", int p_rating = 0)
    {
        this->name = name;
        this->last_name = last_name;
        if (p_rating < 0 || p_rating > 5)
            throw Error(ErrorCode::Incorrect_rating);
        rating = p_rating;
       
    }

    string to_str()
    {
        return "Professor: " + name + " " + last_name + " " + to_string(rating) + " " ;
    }
    string GetName()
    {
        return name;
    }
    string GetLastName()
    {
        return last_name;
    }
    int GetRating()
    {
        return rating;
    }
   
    ostream& operator<<(ostream& out)
    {
        return out << name << " " << last_name << " " << rating << " "  << "\n";
    }

    friend ostream& operator<<(ostream& out, Professor& professor)
    {
        return professor << cout;
    }
    friend istream& operator>>(istream& in, Professor& professor)
    {
        char* name = new char[50];
        char* last_name = new char[50];
        int rating;
       

        in >> name >> last_name >> rating;

        professor = Professor(name, last_name, rating);

        return in;
    }
    friend bool operator== (const Professor& professor1, const Professor& professor2)
    {
        return (professor1.name == professor2.name &&
            professor1.last_name == professor2.last_name && professor1.rating == professor2.rating);
    }
    friend bool operator!=(const Professor& professor1, const Professor& professor2) {
        return !(professor1 == professor2);
    }
    bool operator>(Professor& professor)
    {
        return this->rating > professor.rating;
    }
};

#endif