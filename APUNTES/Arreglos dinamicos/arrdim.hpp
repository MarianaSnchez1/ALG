//arrdim.hpp
#ifndef _arrdim_hpp_
#define _arrdim_hpp_
#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
  T *array;
  int capacity, head, tail;
  void expandCapacity();
public:
  Array();
  ~Array();
  int size();
  bool empty();
  void clear();
  void insert(T val);
  T pop_front();
  T pop_back();
  T front();
  T back();
};

#include "arrdim.cpp"
#endif
