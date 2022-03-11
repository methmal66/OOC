#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
private:
    float width;
    float length;
public:
    void setWidth(float);
    void setLength(float);
    float calculateArea();
    float calculatePerimeter();
};

#endif