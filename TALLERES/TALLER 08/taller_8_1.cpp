//Punto 1.cpp
#include "taller_8_1.hpp"

int gcd(int num, int den){
  long gcd,tmp,rest;
  gcd=abs(num);
  tmp=den;
  while (tmp>0){
    rest= gcd % tmp;
    gcd=tmp;
    tmp=rest;
  }
  return gcd;
}


Rational::Rational(){
  num=0;
  den=1;
  mcd=gcd(0,1);
}

Rational::Rational(int x, int y){
  num=x;
  if (y!=0){
    den=y;
  }else{
    cout << "F <constructor>"<< endl;
    den=1;
    //exit(0); Para salir de todo todo
  }
  mcd=gcd(num,den);
}

Rational::Rational (Rational &other){
  num= other.num;
  den= other.den;
  mcd= other.mcd;
}

int Rational::get_num(){
  return num;
}
int Rational::get_den(){
  return den;
}

void Rational::set_num(int jose){
  num=jose;
}
void Rational::set_den (int paolo){
  if (paolo!=0){
    den=paolo;
  }else{
    cout << "F <set_den>"<< endl;
    den=1;
  }
}


bool operator== (Rational &a, Rational &b){
  if (a.get_num()==b.get_num() && a.get_den()==b.get_den()){
    return true;
  }else{
    return false;
  }
}
#endif
