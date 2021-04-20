// interface file

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <iostream>
using namespace std;


class Point {
private:
    int x, y;

public:
    Point();
    Point(int x0, int y0);

    void setx(int x0);
    void sety(int y0);
    int getx();
    int gety();

// TAREA: implementar operator--, operator--(int)
    Point operator++();
    Point operator++(int);
};

// TAREA: implementar operator>>, operator*
Point operator+(Point a, Point b);
bool operator==(Point a, Point b);
ostream& operator<<(ostream &os, Point z);


#endif // _POINT_HPP_

