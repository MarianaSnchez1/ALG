 //CharStack2.hpp
#ifndef _CharStack2_hpp_
#define _CharStack2_hpp_

class CharStack2{
private:
  char *array;
  int capacity;
  int count;
  void expandCapacity();
public:
  CharStack2();
  ~CharStack2();

  int size();
  bool isEmpty();
  void clear();
  void push (char ch);
  char pop();
  char peek();
  void reverse();
  char pook();
};

#endif
