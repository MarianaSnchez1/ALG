//llqueue.hpp
#ifndef _llqueue_hpp_
#define _llqueue_hpp_

template <datatype T>
class llQueue{
private:
  struct Node{
    T data;
    Node *link;
  };

  Node *head;
  Node *tail;
  int count;
public:
  llQueue();
  ~llQueue();
  int size();
  bool empty();
  void clear();
  T front();
  T back();
  void enqueue (T elem);
  T dequeue ();
};

#include "llqueue.cpp"
#endif
