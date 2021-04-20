//daqueue.hpp
 #ifndef _daqueue_hpp_
 #define _daqueue_hpp_

template <typename T>
class DaQueue {
private:
  T *array;
  int capacity, head, tail;
  static const int INITIAL_CAPACITY = 10;
  void expandCapacity();
public:
  DaQueue();
  ~DaQueue();
  int size();
  bool empty();
  void clear();
  void enqueue (T val);
  T dequeue();
  T front();
  T back();
};

#include "daqueue.cpp"
#endif
