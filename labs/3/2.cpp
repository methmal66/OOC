#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Fence.hpp"
#include <iostream>
using namespace std;

int main() {
    Rectangle land;
    land.setLength(28);
    land.setWidth(15);

    Fence f;
    f.setPerimeter(land.calculatePerimeter());
    cout << "Insert cost per unit >>> ";
    f.setCostPerUnit(cin);
    cout.precision(2);
    cout << fixed << "Cost to build the fence " << f.calculateCost() << endl;
}