#include <iostream>
#include <iomanip>

#define SPACE 10
#define RESET "\033[0m"
#define GREEN "\033[32m"

using namespace std;

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int main() {
    //setw() is used to set a tab space with dynamic width

    cout << GREEN;
    cout << "+----------+----------+----------+" << endl;
    cout << "|" << setw(SPACE + 1) << "x|" << setw(SPACE + 1) << "Square|" << setw(SPACE + 1) << "Cube|" << endl;
    cout << "+----------+----------+----------+" << endl;
    cout << RESET;

    for (int i = 1; i <= 10; i++)
        cout << "|" << setw(SPACE) << i << "|" << setw(SPACE) << square(i) << "|" << setw(SPACE) << cube(i) << "|" << endl;
    cout << "+----------+----------+----------+" << endl;

}