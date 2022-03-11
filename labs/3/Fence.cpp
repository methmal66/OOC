#include "Fence.hpp"
#include <iostream>

void Fence::setPerimeter(float _perimeter) { perimeter = _perimeter; }

void Fence::setCostPerUnit(std::istream& stream) {
    stream >> costPerUnit;
}

float Fence::calculateCost() {
    return perimeter * costPerUnit;
}