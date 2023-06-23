rm -rf build
mkdir build
g++ main.cpp src/attendance_management.cpp src/course.cpp src/student.cpp -o ./build/app.out
build/app.out