//arrdim.cpp
#ifdef _arrdim_hpp_
#include <cstdlib>

template <typename T>
void Array<T>::expandCapacity(){
  T *oldArray = array;
  capacity *= 2;
  array= new T [capacity];
  for (int i=0; i<capacity; i++){
    array[i] = oldArray [i];
  }
  delete[] oldArray;
}

template <typename T>
Array<T>::Array(){
  capacity =10;
  array = new T [capacity];
  head = tail = 0;
}

template <typename T>
Array<T>::~Array(){
  cout << "Fin :)" << endl;
  delete [] array;
}

template <typename T>
int Array<T>::size(){
  return (tail + capacity - head) % capacity;
}

template <typename T>
bool Array<T>::empty(){
  return head == tail;
}

template <typename T>
void Array<T>::clear(){
  head = tail = 0;
}

template <typename T>
void Array<T>::insert(T val){
  if (size() == capacity-1){
    expandCapacity();
  }
  array [tail] = val;
  tail = (tail+1) % capacity;
}

template <typename T>
T Array<T>::pop_front(){
  if (empty()){
    cout << "Ta solo pop_front" << endl;
    exit(1);
  }
  T pop = array [head];
  head = (head+1) % capacity;
  return pop;
}

template <typename T>
T Array<T>::pop_back(){
  if (empty()){
    cout << "Ta solo pop_back" << endl;
    exit(1);
  }
  T pop = array [tail];
  tail = (tail+1) % tail;
  return pop;
}

template <typename T>
T Array<T>::front(){
  if (empty()){
    cout << "Ta solo front" << endl;
    exit(1);
  }
  return array[head];
}

template <typename T>
T Array<T>::back(){
  if (empty()){
    cout << "Ta solo back" << endl;
    exit(1);
  }
  return array [tail];
}


#endif
