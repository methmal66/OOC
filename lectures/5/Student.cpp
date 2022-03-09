#include "Student.hpp"
using namespace std;

void Student::setStudentNo(int no) {
    studentNo = no;
}

void Student::setName(string _name) {
    name = _name;
}

int Student::getStudentNo() {
    return studentNo;
}

string Student::getName() {
    return name;
}

int Student::getMarks(int no) {
    if (no == 1)return marks1;
    if (no == 2) return marks2;
    if (no == 3) return marks3;
}

void Student::assignMarks(int m1, int m2, int m3) {
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

float Student::calculateAverage() {
    const int total = marks1 + marks2 + marks3;
    return total / 3.0;
}