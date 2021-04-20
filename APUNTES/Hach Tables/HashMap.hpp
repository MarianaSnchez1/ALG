//Hash table
#ifndef _HashMap_hpp_
#define _HashMap_hpp_
#include <string>

template <typename K, typename V>
class HashMap {
private:
  struct Cell {
    K key;
    V value;
    Cell *link;
  };
  Cell **bucket;
  int nBuckets;
  int count;
  Cell *findCell (int bucket, V key){
    Cell *cp = buckets [bucket];
    while (cp != nullptr && key != cp->key){
      cp = cp->link;
    }
    return cp;
  }
  int hashCode(string str){
    int hash = 0;
    int n = str.length();
    for (int i=0; i<n; i++){
      hash += str[i];
    }
    return hash
  }

public:
  HashMap();
  ~HashMap();
  void clear();
  void push(K key, V val);
  V get(K key);
  bool containsKey(K key);
};
#include "HashMap.cpp"
#endif
