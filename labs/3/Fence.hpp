#ifndef FENCE_HPP
#define FENCE_HPP
#include <iostream>

class Fence {
private:
    float perimeter;
    float costPerUnit;
public:
    void setPerimeter(float);
    void setCostPerUnit(std::istream&);
    float calculateCost();
};

#endif