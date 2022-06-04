#include <iostream>
#include "Distance.hpp"

using namespace std;

Distance::Distance() {
    feets = 0;
    inches = 0;
}

Distance::Distance(int _feets, int _inches) {
    feets = _feets;
    inches = _inches;
}

void Distance::inputDistance() {
    cout << "Input int feet : ";
    //we cannot use cin to get user inputs in a single line. Thats y scanf is being used here.
    scanf("%d", feets);
    cout << "Input float inches : ";
    scanf("%d", inches);
}

void Distance::printDistance() {
    cout << "Feets : " << feets << ", Inches : " << inches << endl;
}

Distance* Distance::add(Distance* d) {
    Distance* result;
    result->inches = (d->feets * 12 + d->inches) + (feets * 12 + inches);
    result->feets = result->inches / 12;
    result->inches = result->inches % 12;
    return result;
}

Distance::~Distance() {
    cout << "Distance{feets:" << feets << ", inches:" << inches << "} deleted" << endl;
}