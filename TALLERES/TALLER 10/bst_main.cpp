//bst_main.cpp
#include "bst.hpp"
#include <string>


int main(){
  cout << boolalpha;

  bst<string> dwight;
  dwight.insert("happy");
  dwight.insert("sneezy");
  dwight.insert("bashfull");
  dwight.insert("doc");
  dwight.insert("grumpy");
  dwight.insert("sleepy");
  dwight.insert("dopey");

  cout << "Creating BTS con los enanos: " << endl;
  dwight.display();
  cout<< endl;

  cout << "Quitemos happyness away" << endl;
  dwight.remove("happy"); //CORREGIR, DEJA A SLEEPY 2 VECES
  dwight.display();
  cout<< endl;

  cout << "Quedaron enanos?: " << dwight.empty() << endl;

  return 0;
}
