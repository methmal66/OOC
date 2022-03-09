#include "Circle.hpp"
#include <iostream>
using namespace std;

int main() {
    Circle c1;
    c1.setRadius(7);
    cout << "Area of the circle 1 : " << c1.calculateArea() << endl;

    Circle c2;
    c2.setRadius(14);
    c2.setRadius(14);
    cout << "Area of the circle 2 : " << c2.calculateArea() << endl;
}