#include "Square.hpp"

void Square::setLength(float _length) {
    length = _length;
}

float Square::calculateArea() {
    return length * length;
}