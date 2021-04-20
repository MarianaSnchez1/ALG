// implementation file
#include "point.hpp"

// constructors
Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x0, int y0) {
    x = x0;
    y = y0;
}

// setters or modifiers
void Point::setx(int x0) {
    x = x0;
}

void Point::sety(int y0) {
    y = y0;
}

// getters or accessors
int Point::getx() {
    return x;
}

int Point::gety() {
    return y;
}

// prefix operator
Point Point::operator++() {
    cout << "Prefix\n";
    x = x + 1;
    y = y + 1;
    return *this;
}

// postfix operator
Point Point::operator++(int) {
    cout << "Postfix\n";
    Point aux(x, y);
    x = x + 1;
    y = y + 1;
    return aux;
}

bool operator==(Point a, Point b) {
    bool first = a.getx() == b.getx();
    bool second = a.gety() == b.gety();
    return first and second;
}

Point operator+(Point a, Point b) {
    Point res;
    res.setx(a.getx() + b.getx());
    res.sety(a.gety() + b.gety());
    return res;
}

ostream& operator<<(ostream &os, Point z) {
    os << "(" << z.getx() << "," << z.gety() << ")";
    return os;
}

