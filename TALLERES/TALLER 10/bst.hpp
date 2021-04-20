//bst.hpp
//binary search tree
#ifndef _bst_hpp_
#define _bst_hpp_

#include <iostream>
#include <cstddef>
using namespace std;

template <typename keyType>
class bst{
private:
  struct bstNode{
    keyType key;
    bstNode *left;
    bstNode *right;
    //bstNode *parent;
  };

  size_t count;
  bstNode *tree;

  bstNode *min (bstNode *root) const;
  bstNode *max (bstNode *root) const;
  //bstNode *successor (bstNode *root) const;
  //bstNode *predecessor (bstNode *root) const;

  void remove (bstNode * &root , keyType key);
  //bstNode *copy (bstNode *root) const;
  void clear (bstNode * &root);
  void display (bstNode *root , std::ostream &out) const;
  void insert (bstNode * &root , keyType key);
  bstNode *find (bstNode *root , keyType key) const;

public:
  bst();
  bst(const bst &rhs);
  ~bst();

  void remove (keyType key);
  bool empty (void) const;
  void clear (void);
  bool find (keyType key) const;
  void insert (keyType key);
  void display (std::ostream &out = std::cout) const;
};

# include "bst.cpp"
#endif
