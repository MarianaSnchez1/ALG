//daqueue.cpp
#ifdef _daqueue_hpp_
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
void DaQueue<T>::expandCapacity(){
  T *oldArray = array;
  capacity *= 2;
  array= new T [capacity];
  for (int i=0; i<capacity; i++){
    array[i] = oldArray [i];
  }
  delete[] oldArray;
}

template <typename T>
DaQueue<T>::DaQueue(){
    array = new T [INITIAL_CAPACITY];
    capacity = INITIAL_CAPACITY;
    head = tail = 0;
}

template <typename T>
DaQueue<T>::~DaQueue(){
  delete [] array;
}

template <typename T>
int DaQueue<T>::size(){
    return (tail + capacity - head)%capacity;
}

template <typename T>
bool DaQueue<T>::empty(){
  return head==tail;
}

template <typename T>
void DaQueue<T>::clear(){
  head = tail = 0;
}

template <typename T>
void DaQueue<T>::enqueue (T val){
  if (size() == capacity-1){
    expandCapacity();
  }
  array[tail] = val;
  tail = (tail+1)%capacity;
}

template <typename T>
T DaQueue<T>::dequeue(){
  if (empty()){
    cout << "F, cant de queue on empty queue" << endl;
    exit(1);
  }
  T result = array[head];
  head = (head+1)%capacity;
  return result;
}

template <typename T>
T DaQueue<T>::front(){
  if (empty()){
    cout << "F, theres no front on empty queue" << endl;
    exit(1);
  }
  return array[head];
}

template <typename T>
T DaQueue<T>::back(){
  if (empty()){
    cout << "F, theres no back on empty queue" << endl;
    exit(1);
  }
  return array[tail-1];
}

#endif
