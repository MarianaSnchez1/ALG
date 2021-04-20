/*
g++ -std=c++14 -Wall -Wextra -Werror -c main.cpp 
g++ -std=c++14 -Wall -Wextra -Werror -c point.cpp 
g++ -std=c++14 -Wall -Wextra -Werror main.o point.o
./a.out
*/

// drive file
#include <iostream>
#include "point.hpp"
using namespace std;


int main() {
    cout << boolalpha;
    Point p(4, 6), q(-4, -6);
    Point r;

    cout << "Point p: " << p << "  " << r << endl;
    r = ++p;
    cout << "Point p: " << p << "  " << r << endl;

    return 0;
}
