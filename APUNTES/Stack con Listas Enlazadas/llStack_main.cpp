//llStack_main.cpp
#include "llStack.hpp"
#include <string>
#include <iostream>
using namespace std;

int main(){
  llStack<int> geraldo;
  for (int i=0; i<10; i+=2){
    geraldo.push(i);
  }

  geraldo.display();

  cout << endl;

  cout << "Pop: " << geraldo.pop() << endl;

  cout<< endl;
  geraldo.display();
  cout<< endl;

  geraldo.clear();
  geraldo.display();
  cout<< endl;
  
  cout << "Adding new numbers to stack" << endl;
  vector<int> clara {1,2,3,4,5};
  geraldo.multi_push(clara);
  geraldo.display();
}
