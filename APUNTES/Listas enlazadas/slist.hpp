//Listas enlazadas
#ifndef _slist_hpp_
#define _slist_hpp_

#include <cstdlib>
#include <iostream>

template <typename T>
class List{
private:
  struct Node{
    T data;
    Node *next;
  };

  Node *head;
  unsigned count;

public:
  List();
  //~List();
  T front() const;
  void push_front(T item);
  //unsigned size() const;
  //bool empty() const;
  void clear();
  //void display() const;
  //void pop_front();
};
#include "slist.cpp"
#endif //_slist_hpp_
