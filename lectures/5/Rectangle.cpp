#include "Rectangle.hpp"

void Rectangle::setWidth(int x) {
    width = x;
}

void Rectangle::setLength(int x) {
    length = x;
}

int Rectangle::calculateArea() {
    return width * length;
}