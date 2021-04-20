//CharStack.hpp
#ifndef _CharStack_hpp_
#define _CharStack_hpp_

#include <vector>
#include <iostream>
using namespace std;

class CharStack{
private:
  vector<char> elements;
public:
  CharStack();
  ~CharStack();

  int size();
  bool isEmpty();
  void clear();
  void push (char ch);
  char pop();
  char peek();
  char Rpeek();
  void X();
};

#endif
