//llqueue.cpp
#ifdef _llqueue_hpp_

#include <cstdlib>

template <typename T>
llqueue<T>::llQueue() {
  head = tail = nullptr;
  count = 0;
}

template <typename T>
llqueue<T>::~llQueue(){
  clear();
}

template <typename T>
int llqueue<T>::size() {
  return count;
}


template <typename T>
bool llqueue<T>::empty() {
  return count==0;
}


template <typename T>
void llqueue<T>::clear() {
  while (count >0){
    dequeue();
  }
}

template <typename T>
T llqueue<T>::front() {
  if (empty()){
    std::cout << "F, not front on empty queue" << std::endl;
    exit (1);
  }
  return head->data;
}


template <typename T>
T llqueue<T>::back() {
  if (empty()){
    std::cout << "F, not back on empty queue" << std::endl;
    exit (1);
  }
  return tail->data;
}

template <typename T>
void llqueue<T>::enqueue(T elem) {
  Node *tmp =new Node;
  tmp->data =elem;
  tmp->link =nullptr;

  if (head==nullptr){
    head= tmp;
  } else{
    tail->link = tmp;
  }

  tail = tmp;
  count++;
}

template <typename T>
T llqueue<T>:: dequeue() {
  if (empty()){
    std::cout << "F, cant dequeue on empty queue" << std::endl;
    exit (1);
  }
  count --;
  T pop = head->data;
  Node *tmp = coso;
  coso = coso->link;
  delete coso;
  return pop;
}
