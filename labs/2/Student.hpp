#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    int marks1;
    int marks2;

public:
    void inputMarks(int);
    float calculateCA(int);
    void displayReport(int);
};

#endif