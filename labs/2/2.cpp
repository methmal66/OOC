#include <iostream>
#include <iomanip>
#include "Student.hpp"
using namespace std;

float calculateCA(int, int);

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++)
        students[i].inputMarks(i + 1);

    cout << endl << left << setw(10) << "Student" << setw(10) << "Marks1" << setw(10) << "Marks2" << setw(10) << "CA_1" << setw(10) << "CA_2" << endl;
    for (int i = 0; i < 5; i++)
        students[i].displayReport(i + 1);
}