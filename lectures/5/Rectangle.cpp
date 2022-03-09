class Rectangle {
private:
    int width;
    int length;

public:
    void setWidth(int);
    void setLength(int);
    int calculateArea();
};

void Rectangle::setWidth(int x) {
    width = x;
}

void Rectangle::setLength(int x) {
    length = x;
}

int Rectangle::calculateArea() {
    return width * length;
}