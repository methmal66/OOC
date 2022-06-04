class Distance {
private:
    int feets;
    int inches;

public:
    Distance();
    Distance(int feets, int inches);
    void inputDistance();
    void printDistance();
    Distance* add(Distance*);
    ~Distance();
};