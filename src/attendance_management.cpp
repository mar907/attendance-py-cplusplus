#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/attendance_management.hpp"

void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state)
{
    ifstream testOpenfile("attendance.csv");
    bool fileExists = testOpenfile.good();
    testOpenfile.close();

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app);
    if (!fileExists)
    {
        csvFile << "ID de Estudiante,"
                << "Nombre/s,"
                << "Apellido/s,"
                << "ID de Materia,"
                << "Nombre de Materia,"
                << "Marca temporal,"
                << "Presente" << endl;
    };
    csvFile << student->getIdentifier() << ","
            << student->getName() << ","
            << student->getSurname() << ","
            << course->getIdentifier() << ","
            << course->getName() << ","
            << datetime << ","
            << state << "/n";

    csvFile.close();
};

void AttendanceManagement::showAttendance()
{
    ifstream csvFile("attendance.csv");
    if (csvFile.is_open())
    {
        cout << csvFile.rdbuf();
        csvFile.close();
    }
};

AttendanceManagement::~AttendanceManagement(){

};