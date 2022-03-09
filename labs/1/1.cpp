#include <iostream>
#include <iomanip> //float number formatting

#define RESET "\033[0m"
#define GREEN "\033[32m"
/*
#define RESET   "\032[0m"
#define BLACK   "\032[30m"
#define RED     "\032[31m"
#define GREEN   "\032[32m"
#define YELLOW  "\032[33m"
#define BLUE    "\032[34m"
#define MAGENTA "\032[35m"
#define CYAN    "\032[36m"
#define WHITE   "\032[37m"
#define BOLDBLACK   "\032[1m\033[30m"
#define BOLDRED     "\032[1m\033[31m"
#define BOLDGREEN   "\032[1m\033[32m"
#define BOLDYELLOW  "\032[1m\033[33m"
#define BOLDBLUE    "\032[1m\033[34m"
#define BOLDMAGENTA "\032[1m\033[35m"
#define BOLDCYAN    "\032[1m\033[36m"
#define BOLDWHITE   "\032[1m\033[37m"
*/

using namespace std;

bool isSelected(float mark) {
    int thresold = 60;
    if (mark > 60)
        return true;
    return false;
}

float calculateAverage(int* marks) {
    float total = 0;
    int count = 0;
    while (*(marks + count)) {
        total += *(marks + count++);
    }
    return total / float(count);
}

int main() {
    cout << "Enter a non int at the end" << endl;
    cout << "Enter marks : " << endl;
    int* marks = (int*)malloc(sizeof(int) * INT8_MAX);
    /*
    condition satisfies if mark got input by an integer
    no limit for i is needed, since it's max value is impossible to determine
    */
    for (int i = 0; cin >> *(marks + i); i++) {}
    const float average = calculateAverage(marks);
    //its a good practice to free non using memory blocks 
    free(marks);

    /*
    by default, floats are displayed as non fixed numbers.
    but it has no clue about the number of decimal places to show.
    then we must specify it using 'setprecision()'
    */
    cout << fixed << setprecision(2);
    cout << "Average is : " << average << endl;

    /*
    strings cannot be concated with the '+' as in every other lang
    newer version c++20 introduce a format function in format header, to make this process easy
    https://en.cppreference.com/w/cpp/utility/format/format
    unfortunately, they might still using the old fashion c++11 in exams
    thats why i used the 'output string stream' as a pretty common solution
    it works just as the cout, insted of displaying the output, it stores the result as an object
    then we can call obj.str() to generate a string out of it
    */
    ostringstream message;
    message << "Student is " << (isSelected(average) ? "" : "not ") << "selected to CSNE";

    /*
    this method of having colored output, only works in linux and macos. https://stackoverflow.com/a/9158263
    windows have a different method to implement this https://dev.to/tenry/terminal-colors-in-c-c-3dgc
    remember to reset the terminal colors to previous default one
    */
    cout << GREEN << message.str() << RESET << endl;
}