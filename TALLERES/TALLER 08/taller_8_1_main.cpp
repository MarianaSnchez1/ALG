//Punto 1.cpp_main
#include "taller_8_1.hpp"
#include<iostream>
using namespace std;

int main() {
  cout<< boolalpha;

  Rational jesus;
  Rational maria(5,3);
  Rational jose(maria);

  cout<< (jose==maria)<< endl;

  maria.set_num(4);

  cout << "Jesus: " << jesus.get_num() << "/" << jesus.get_den() << endl;
  cout << "Maria: " << maria.get_num() << "/" << maria.get_den() << endl;
  cout << "Jose: " << jose.get_num() << "/" << jose.get_den() << endl;

  maria.set_den(0);

  cout << "Maria: " << maria.get_num() << "/" << maria.get_den() << endl;

  cout<< (jose==maria)<< endl;

  maria=jesus;
  cout << "Jesus: " << jesus.get_num() << "/" << jesus.get_den() << endl;
  cout << "Maria: " << maria.get_num() << "/" << maria.get_den() << endl;

  return 0;
}
