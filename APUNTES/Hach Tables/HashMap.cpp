//Hash table
#ifdef _HashMap_hpp_
#include <iostream>
#include <cstdlib>

const int INITIAL_BUCKET_COUNT = 101;
template <typename K, typename V>
HashMap<K,V>::HashMap(){
  nBuckets = INITIAL_BUCKET_COUNT;
  bucket = new Cell *[nBuckets];
  for (int i=0; i<nBuckets; i++){
    bucket [i] = nullptr;
  }
  count = 0;
}

template <typename K, typename V>
HashMap<K,V>::~HashMap(){
  clear();
}

template <typename K, typename V>
void HashMap<K,V>::clear(){
  for (int i=0; i< nBuckets; i++){
    Cell *cp = buckets[i];
    while (cp != nullptr){
      Cell *tmp = cp;
      cp = cp->link;
      delete tmp;
    }
  }
  count = 0;
}

template <typename K, typename V>
void HashMap<K,V>::push(K key, V val){
  int bucket = hashCode(key) % nBuckets;
  Cell *cp = findCell(bucket, key);
  if (cp == nullptr){
    cp = new Cell;
    cp->key = key;
    cp->link = buckets [bucket];
    buckets[bucket] = cp;
    count++;
  }
  cp->value = val;
}

template <typename K, typename V>
V HashMap<K,V>::get(K key){
  int bucket = hashCode(key) % nBuckets;
  Cell *cp = findCell (bucket,key);
  if (cp == nullptr){
    std::cout << "get, no hay value del coso" << std::cout;
    exit(1);
  }
  return cp->value;
}

template <typename K, typename V>
bool HashMap<K,V>::containsKey(k key){
  int bucket = hashCode(key) % nBuckets;
  return findCell(bucket, key) != nullptr;
}

#endif
