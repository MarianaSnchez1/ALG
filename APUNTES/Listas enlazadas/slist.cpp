//Listas enlazadas
#ifdef _slist_hpp_


template <typename T>
List<T>::List(){
  head= nullptr;
  count=0;
}


template <typename T>
List<T>::~List(){
  clear();
  head= nullptr;
}


template <typename T>
T List<T>::front() const{
  return head->data;
}

template <typename T>
void List<T>::push_front(T item){
  Node *tmp = new Node;
  tmp->data = item;
  if (head==nullptr){
    tmp->next = nullptr;
  } else{
    tmp->next = head;
  }

  head = tmp;
  count++;
}

unsigned size() const;
//bool empty() const;

template <typename T>
void List<T> clear(){
  while (count > 0){
    pop_front();
  }
}

//void display() const;
//void pop_front();

#endif
