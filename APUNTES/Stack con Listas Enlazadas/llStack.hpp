//llStack
#ifndef _llStack_hpp_
#define _llStack_hpp_

#include <iostream>
#include <vector>

template <typename T>
class llStack{
private:
  struct Node{
    T data;
    Node *next;
  };

  Node *stack;
  unsigned count;

public:
  /* Constructor, Destructor*/
  llStack();
  ~llStack();

  /* Pa chismosear*/
  T peek() const;
  unsigned size() const;
  bool empty() const;
  void display() const;

  /* Cambiar*/
  void push(T item);
  T pop();
  void clear();

  /* De mas*/
  void multi_push(T *src);
  //void multi_push (const std::vector<T> &src);
  T pook() const;
};

#include "llStack.cpp"
#endif //_llstack_hpp_
