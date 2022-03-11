#include "Rectangle.hpp"

void Rectangle::setWidth(float _width) {
    width = _width;
}

void Rectangle::setLength(float _length) {
    length = _length;
}

float Rectangle::calculateArea() {
    return width * length;
}

float Rectangle::calculatePerimeter() {
    return 2 * (width + length);
}