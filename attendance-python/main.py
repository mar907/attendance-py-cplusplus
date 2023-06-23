from student import Student
from course import Course
from attendance_management import AttendanceManagement

student = Student()
student.setIdentifier(1)
student.setName("Juan")
student.setSurname("Perez")

course = Course()
course.setIdentifier(1)
course.setName("Algebra")

attendanceManagement = AttendanceManagement()
attendanceManagement.takeAttendance(student, course, "2021-06-08", True)

attendanceManagement.showAttendance()
attendanceManagement.saveAttendanceToFile()