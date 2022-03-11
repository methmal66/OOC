#include "Circle.hpp"
#include "Square.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;

int main() {
    Circle c;
    c.setRadius(5);

    Square s;
    s.setLength(4);

    Rectangle r;
    r.setLength(7);
    r.setWidth(3);

    Rectangle yard;
    yard.setLength(28);
    yard.setWidth(15);

    const float greenArea = yard.calculateArea() - c.calculateArea() - s.calculateArea() - r.calculateArea();
    cout.precision(2);
    cout << fixed << "Area of the green colored area is " << greenArea << endl;
}