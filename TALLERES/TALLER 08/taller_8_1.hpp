//Punto 1.hpp
#ifndef _POINT_HPP_
#define _POINT_HPP_

#include<iostream>
using namespace std;

int gcd(int num, int den);
class Rational {
private:
  int num,den,mcd;

public:
  Rational();
  Rational(int x, int y);
  Rational (Rational &other);

  int get_num();
  int get_den();
  void set_num(int jose);
  void set_den (int paolo);

  Rational & operator= (const Rational &other){
    num= other.num;
    den= other.den;
    mcd= other.mcd;

    return *this;
  }

};
bool operator== (Rational &a, Rational &b);

#endif //_POINT_HPP_
