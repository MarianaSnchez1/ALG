//Hash table
#ifdef _HashMap_hpp_

const int INITIAL_BUCKET_COUNT = 10;

template <typename VT>
HashMap<VT>::HashMap(VT def){
  notfound = def;
  count = 0;
  tableSize = INITIAL_BUCKET_COUNT;
  table = new KVNode<VT> *[tableSize];
  for (int i=0; i<tableSize; i++){
    table [i] = nullptr;
  }
}

template <typename VT>
HashMap<VT>::~HashMap(){
  //clear();
}

template <typename VT>
int HashMap<VT>::size(){
  return count;
}

template <typename VT>
bool HashMap<VT>::empty(){
  return count == 0;
}

template <typename VT>
void HashMap<VT>::clear(){
  /*for (int i=0; i< tableSize; i++){
    KVNode<VT> *cp = table[i];
    while (cp != nullptr){
      KVNode<VT> *tmp = cp;
      cp = cp->next;
      delete tmp;
    }
  }
  count = 0;*/
}

template <typename VT>
VT HashMap<VT>::get(string key){
  int bucket = hashCode(key) % tableSize;
  KVNode<VT> *cp = search_bucket (bucket,key);
  if (cp == nullptr){
    cout << "get, no hay value del coso" << endl;
    exit(1);
  }
  return (cp != nullptr) ? cp->value : notfound;
}

template <typename VT>
bool HashMap<VT>::search(string key){
  int bucket = hashCode(key) % tableSize;
  return search_bucket(bucket, key) != nullptr;
}

template <typename VT>
bool HashMap<VT>::push(string key, VT val){
  bool flag = true;
  int bucket = hashCode(key) % tableSize;
  KVNode<VT> *cp = search_bucket(bucket, key);
  if (cp == nullptr){
    cp = new KVNode<VT>;
    cp->key = key;
    cp->next = table[bucket];
    table[bucket] = cp;
    flag = false;
    count++;
  }
  cp->value = val;
  return flag;
}

template <typename VT>
void HashMap<VT>::pop(string key){
  int bucket = hashCode(key) % tableSize;
  KVNode<VT> *cp = search_bucket(bucket, key);
  if (cp == nullptr){
    cout << "f, pop" << endl;
    exit(1);
  }
  KVNode<VT> *tmp = cp;
  cp = cp->next;
  delete tmp;
  count--;
}

template <typename VT>
void HashMap<VT>::distribution(const string &filename){
  //AHH
}

template <typename VT>
void HashMap<VT>::display() const{
  KVNode<VT> *tmp;
  cout << "Hash Table (" << tableSize << "): " << endl;
  for (int i=0; i<tableSize; i++){
    cout << "Bucket (" << i << "): ";
    tmp = table[i];
    while (tmp !=nullptr){
      cout << "(" << tmp->key << "," << tmp->value << "), ";
      tmp = tmp->next;
    }
    cout << "nullptr" << endl;
  }
}

#endif
