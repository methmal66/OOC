#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "Student.hpp"
using namespace std;

void Student::inputMarks(int id) {
    cout << "Enter marks1 and marks2 for student" << id << ">> ";
    scanf("%d %d", &marks1, &marks2);
}

float Student::calculateCA(int no) {
    if (no == 1) return marks1 * 20 / 100.0;
    if (no == 2) return marks2 * 30 / 100.0;
    throw invalid_argument("CA no must be 1 or 2");
}

void Student::displayReport(int no) {
    cout << left << setw(10) << no << setw(10) << marks1 << setw(10) << marks2 << setw(10) << calculateCA(1) << setw(10) << calculateCA(2) << endl;
}