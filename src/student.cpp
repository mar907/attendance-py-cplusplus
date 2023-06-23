#include <iostream>
#include <iomanip>
#include "../include/student.hpp"

void Student::setName(string nom)
{
    _name = nom;
}
void Student::setSurname(string sur)
{
    _surname = sur;
}
void Student::setIdentifier(int ident)
{
    _identifier = ident;
}
string Student::getName() const
{
    return _name;
}
string Student::getSurname() const
{
    return _surname;
}
int Student::getIdentifier() const
{
    return _identifier;
}

/* float Alumno::notaFinal()
{
    float notaFinal;
    cout << "ALUMNO" << endl;
    cout << "Ingrese la primera nota del alumno: " << endl;
    cin >> nota1;
    cout << "Ingrese la segunda nota del alumno: " << endl;
    cin >> nota2;
    cout << "Ingrese la tercera nota del alumno: " << endl;
    cin >> nota3;
    notaFinal = (nota1 + nota2 + nota3) / 3;
    cout << "La nota final del alumno es: " << fixed << setprecision(1) << notaFinal << endl;
    cout << "------------------------------" << endl;

    return notaFinal;
}
string Alumno::AproRepro(const float notaFinal)
{
    cout << "Ingrese el nombre del alumno: " << endl;
    cin >> nombre;
    cout << "Ingrese la cedula del alumno: " << endl;
    cin >> cedula;

    if (notaFinal >= 4.8)
    {
        cout << "El/la alumno/a " << nombre << " esta APROBADO" << endl;
    }
    else
    {
        cout << "El/la alumno/a " << nombre << " con cedula " << cedula << " ,esta DESAPROBADO" << endl;
    }
    cout << "------------------------------" << endl;
    cout << endl;
    return nombre;
}
 */
Student::~Student()
{
}
