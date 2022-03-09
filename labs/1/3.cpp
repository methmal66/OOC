#include <iostream>
using namespace std;

typedef struct {
    int width;
    int height;
} Rectangle;

int calculateArea(Rectangle r) {
    return r.width * r.height;
}

int main() {
    Rectangle yard;
    cout << "Enter yard width and height>>> ";
    cin >> yard.width >> yard.height;

    Rectangle house;
    cout << "Enter house width and height>>> ";
    cin >> house.width >> house.height;

    const int lawnArea = calculateArea(yard) - calculateArea(house);
    cout << "Lawn area is : " << lawnArea << endl;
}