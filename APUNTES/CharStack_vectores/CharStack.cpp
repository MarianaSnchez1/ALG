//CharStack.cpp

#include "CharStack.hpp"

CharStack::CharStack(){
  //elements.clear();
}

CharStack::~CharStack(){
  /*Empty*/
}

int CharStack::size(){
  return elements.size();
}

bool CharStack::isEmpty(){
  return elements.empty();
}

void CharStack::clear(){
  elements.clear();
}

void CharStack::push (char ch){
  elements.push_back(ch);
}

char CharStack::pop(){
  char result = elements [elements.size()-1];
  elements.pop_back();
  return result;
}

char CharStack::peek(){
  return elements [elements.size()-1];
}

char CharStack::Rpeek(){
  return elements [elements.size()-1];
}

void CharStack::X(){
  CharStack rev;
  while (!elements.empty()){
    rev.push(elements.peek());
    elements.pop();
  }
  elements=rev;
}
