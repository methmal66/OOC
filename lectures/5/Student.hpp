#include <iostream>
using namespace std;

class Student {

private:
    int studentNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void setStudentNo(int);
    void setName(string _name);

    int getStudentNo();
    string getName();
    int* getMarks();

    void assignMarks(int, int, int);
    float calculateAverage();
};

