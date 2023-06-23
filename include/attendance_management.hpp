#ifndef ATTENDANCE_MANAGEMENT_HPP
#define ATTENDANCE_MANAGEMENT_HPP
#include <iostream>
#include <string>
#include "./course.hpp"
#include "./student.hpp"
using namespace std;

class AttendanceManagement
{
private:
public:
    AttendanceManagement(){};
    void takeAttendance(Student *student, Course *course, string datetime, bool state);
    void showAttendance();
    virtual ~AttendanceManagement();
};

#endif /* ATTENDANCE_MANAGEMENT_HPP */
