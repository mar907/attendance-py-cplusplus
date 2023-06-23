#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int _identifier;
    string _name;

public:
    Course(){};
    Course(string nom, int ident)
    {
        _name = nom;
        _identifier = ident;
    };
    void setName(string nom);
    void setIdentifier(int ident);
    string getName() const;
    int getIdentifier() const;

    virtual ~Course();
};

#endif /* COURSE_HPP */