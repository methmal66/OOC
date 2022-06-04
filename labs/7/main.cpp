#include "Distance.hpp"

int main(int argc, char** argv) {
    // //exercise1
    // Distance d1;
    // d1.printDistance();

    // Distance d2(11, 6.25);
    // d2.printDistance();
    // //static objects automatically get deleted when the program exist from the scope they where defined

    //exercise2
    Distance* d3 = new Distance();
    d3->printDistance();

    Distance* d4 = new Distance(11, 6.25);
    d4->printDistance();

    Distance* d = d3->add(d4);
    d->printDistance();
}