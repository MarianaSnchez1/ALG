//llStack.cpp
#ifdef _llStack_hpp_

/* Constructor, Destructor*/
template <typename T>
llStack<T>::llStack(){
  stack= nullptr;
  count=0;
}

template <typename T>
llStack<T>::~llStack(){
  clear();
  stack= nullptr;
}


/* Pa chismosear*/
template <typename T>
T llStack<T>::peek() const{
  if (stack== nullptr){
    std::cout << "F, cant peek on empty stack " << std::endl;
    exit(1);
  }
  return stack->data;
}

template <typename T>
unsigned llStack<T>::size() const{
  return count;
}

template <typename T>
bool llStack<T>::empty() const{
  return count==0;
}

template <typename T>
void llStack<T>::display() const{
  Node *tmp= stack;
  while (tmp != nullptr){
    std::cout << tmp->data << " -> ";
    tmp = tmp->next;
  }
  std::cout << "nullptr";
}


/* Cambiar*/
template <typename T>
void llStack<T>::push(T item){
  Node *tmp = new Node;
  tmp->data = item;

  if (stack==nullptr){
    tmp->next = nullptr;
  } else{
    tmp->next = stack;
  }

  stack = tmp;
  count++;
}

template <typename T>
T llStack<T>::pop(){
  if (stack == nullptr){
    std:: cout << "F, cant pop on empty stack" << std::endl;
  }
  T rc= stack->data;
  Node *tmp = stack;
  stack= stack->next;
  count--;
  delete tmp;
  return rc;
}

template <typename T>
void llStack<T>::clear(){
  while (count>0){
    pop();
  }
}


/* De mas*/
template <typename T>
void llStack<T>::multi_push (const std::vector<T> &src){
  for (unsigned i=src.size(); i>0; i--){
    push(src[i-1]);
  }
}

/*template <typename T>
void llStack<T>::multi_push (const std::vector<T> &src){

}*/

template <typename T>
T llStack<T>::pook() const{
  Node *mof = stack;
  while ( mof->next != nullptr){
    mof = mof->next;
  }
  return mof;
}




#endif
