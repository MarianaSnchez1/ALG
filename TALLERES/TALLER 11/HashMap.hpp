//Hash table
#ifndef _HashMap_hpp_
#define _HashMap_hpp_
#include <string>
#include <iostream>
using namespace std;

template <typename VT>
struct KVNode {
  string key;
  VT value;
  KVNode<VT> *next;
};

template <typename VT>
class HashMap {
private:
  KVNode<VT> **table;
  int tableSize;
  int count;
  VT notfound;

  KVNode<VT> *search_bucket (int index, string key){
    KVNode<VT> *cp = table [index];
    while (cp != nullptr && key != cp->key){
      cp = cp->next;
    }
    return cp;
  }

  int hashCode(string key){
    unsigned int hashVal = 0;
    for (char ch : key){
      hashVal += ch;
    }
    return hashVal % tableSize;
  }

public:
  HashMap(VT def);
  ~HashMap();
  int size();
  bool empty();
  void clear();
  VT get(string key);
  bool search (string key);
  bool push(string key, VT val);
  void pop (string key);
  void distribution (const string &filename);
  void display() const;


};
#include "HashMap.cpp"
#endif
