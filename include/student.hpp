#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string _surname;
    string _name;
    int _identifier;

public:
    Student(){};
    Student(string nom, string sur, int ident)
    {
        _surname = sur;
        _name = nom;
        _identifier = ident;
    };

    void setName(string nom);
    void setSurname(string sur);
    void setIdentifier(int ident);
    string getName() const;
    string getSurname() const;
    int getIdentifier() const;
    virtual ~Student();
};

#endif /* STUDENT_HPP */