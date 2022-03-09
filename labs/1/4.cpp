#include <iostream>
using namespace std;

typedef struct {
    int mark1;
    int mark2;
} Student;

float calculateCA1(int mark) {
    return mark * (20 / (float)100);
}

float calculateCA2(int mark) {
    return mark * (30 / (float)100);
}

int main() {
    Student* students = (Student*)malloc(INT8_MAX * sizeof(Student));
    cout << "Enter mark1 and mark2 of each student." << endl;
    for (int i = 0; i < INT8_MAX; i++) {
        cout << "Student" << i + 1 << ">>> ";
        Student s = *(students + i);
        try
        {
            cin >> s.mark1 >> s.mark2;
        }
        catch (exception& e)
        {
            break;
        }

    }

    for (int i = 0; i < INT8_MAX; i++) {
        Student s = *(students + i);
        if (!s.mark1)    //check if array exceed the length
            break;
        cout << i + 1 << " " << s.mark1 << " " << s.mark2 << " "
            << calculateCA1(s.mark1) << "% " << calculateCA2(s.mark2) << "% " << endl;
    }

}