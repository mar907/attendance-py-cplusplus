#include <iostream>
#include <iomanip>
#include "../include/course.hpp"

void Course::setName(string nom)
{
    _name = nom;
};

void Course::setIdentifier(int ident)
{
    _identifier = ident;
};

string Course::getName() const
{
    return _name;
};

int Course::getIdentifier() const
{
    return _identifier;
};

Course::~Course(){};