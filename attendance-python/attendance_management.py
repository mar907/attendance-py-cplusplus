import csv

class AttendanceManagement:
    def __init__(self):
        self.attendance_list = []

    def takeAttendance(self, student, course, date, present):
        attendance = {
            'student': student,
            'course': course,
            'date': date,
            'present': present
        }
        self.attendance_list.append(attendance)

    def showAttendance(self):
        for attendance in self.attendance_list:
            student_name = attendance['student'].name
            course_name = attendance['course'].name
            date = attendance['date']
            present = attendance['present']
            print(f"Student: {student_name}, Course: {course_name}, Date: {date}, Present: {present}")

    def saveAttendanceToFile(self):
        with open('attendance_m.csv', mode='w', newline='') as file:
            fieldnames = ['Student', 'Course', 'Date', 'Present']
            writer = csv.DictWriter(file, fieldnames=fieldnames)

            writer.writeheader()
            for attendance in self.attendance_list:
                student_name = attendance['student'].name
                course_name = attendance['course'].name
                date = attendance['date']
                present = attendance['present']
                writer.writerow({'Student': student_name, 'Course': course_name, 'Date': date, 'Present': present})