//bst.cpp
//binary search tree
#ifdef _bst_hpp_

/*__private__*/
template <typename K>
typename bst<K>::bstNode * bst<K>::min (bstNode *root) const{
  if (root==nullptr){
    return nullptr;
  } else{
    if (root->left == nullptr){
      return root;
    } else{
      return min (root->left);
    }
  }
}

template <typename K>
typename bst<K>::bstNode * bst<K>::max (bstNode *root) const{
  if (root == nullptr){
    return nullptr;
  } else{
    if (root->right == nullptr){
      return root;
    } else{
      return max (root->right);
    }
  }
}

//bstNode *successor (bstNode *root) const;
//bstNode *predecessor (bstNode *root) const;

template <typename K>
void bst<K>::remove (bstNode * &root , K key){ 
  if (root == nullptr){
    return;
  }else if (key > root->key){
    remove (root->right, key);
  }else if(root->left == nullptr){
    bstNode *tmp = root;
    root = root->right;
    delete tmp;
    count --;
  }else if (root->left != nullptr && root->right != nullptr){
    root->key = min(root->right)->key;
    remove(root->right, root->key);
  }
}

//bstNode *copy (bstNode *root) const;

template <typename K>
void bst<K>::clear (bstNode * &root){
  while (count > 0){
    remove (root->key);
  }
}

template <typename K>
void bst<K>::display (bstNode *root , std::ostream &out) const{
  if (root != nullptr){
    display(root->left, out);
    out << root->key << endl;
    display(root->right, out);
  }
}

template <typename K>
void bst<K>::insert (bstNode * &root , K key){
  count++;
  if (root == nullptr){
    root = new bstNode;
    root->key = key;
    root->left = nullptr;
    root->right = nullptr;
  } else{
    if (key != root->key){
      if (key < root->key){
        insert (root->left, key);
      } else{
        insert (root->right, key);
      }
    }
  }
}

template <typename K>
typename bst<K>::bstNode * bst<K>::find (bstNode *root , K keyk) const{
  if (root == nullptr){
    return nullptr;
  } if (keyk == root->key){
    return root;
  } if (keyk < root->key){
    return find(root->left, keyk);
  } else{
    return find(root->right, keyk);
  }
}



/*__public__*/
template <typename K>
bst<K>::bst(){
  tree = nullptr;
  count = 0;
}

template <typename K>
bst<K>::bst(const bst &rhs){
  count = rhs.count();
}

template <typename K>
bst<K>::~bst(){
  clear();
  tree = nullptr;
}

template <typename K>
void bst<K>::remove (K key){
  remove(tree, key);
}

template <typename K>
bool bst<K>::empty (void) const{
  return (count == 0);
}
template <typename K>
void bst<K>::clear (void){
  clear (tree);
}

template <typename K>
bool bst<K>::find (K key) const{
  if (find(tree, key)!=nullptr){
    return true;
  } else{
    return false;
  }
}

template <typename K>
void bst<K>::insert (K key){
  insert(tree, key);
}

template <typename K>
void bst<K>::display (std::ostream &out) const{
  display (tree, out);
}



#endif
