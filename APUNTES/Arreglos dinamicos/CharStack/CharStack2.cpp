//CharStack2.cpp
using namespace std;

#include "CharStack2.hpp"
const int INITIAL_CAPACITY = 10;

CharStack2::CharStack2(){
  capacity = INITIAL_CAPACITY;
  array = new char[capacity];
  count = 0;
}

CharStack2::~CharStack2(){
  delete [] array;
}

int CharStack2::size(){
  return count;
}

bool CharStack2::isEmpty(){
  return count==0;
}

void CharStack2::clear(){
  count = 0;
}

void CharStack2::push (char ch){
  if (count == capacity){
    expandCapacity();
  }
  array[count++] = ch;
}

char CharStack2::pop(){
  return array[--count];
}

char CharStack2::peek() {
  return array[count-1];
}

void CharStack2::reverse() {
  char *oldArray = array;
  array = new char[capacity];
  for (int i = 0; i < count; i++){
    array[i] = oldArray[count-1-i];
  }
  delete[] oldArray;
char CharStack2::pook() {
  return array [count];
}

void CharStack2::expandCapacity() {
  char *oldArray = array;
  capacity *= 2;
  array= new char [capacity];
  for (int i=0; i<count; i++){
    array[i] = oldArray [i];
  }
  delete[] oldArray;
}
