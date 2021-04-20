//Punto 4
#include <iostream>
#include <vector>
using namespace std;


int binary_find (vector <int> vec){
  int iv=0, fv=vec.size()-1;
  while (iv <= fv){
    int mv = (iv+fv)/2;
    if (vec[mv]== mv){
      return mv;
    }
    else if (vec[mv]<mv){
      iv= mv+1;
    }
    else if (vec[mv]>mv){
      fv= mv-1;
    }
    if (vec[iv]== iv){
      return iv;
    }
    if (vec[fv]== fv){
      return fv;
    }
  }
  return -1;
}

int linear_find (vector <int> vec){
  int size = vec.size();
  for (int i=0; i< size; i++){
    if (vec[i]== i){
      return i;
    }
  }
  return -1;
}

int linear_findmax (vector <int> vec){
  int size = vec.size();
  for (int i=size-1; i>=0; i--){
    if (vec[i]== i){
      return i;
    }
  }
  return -1;
}

int linear_findsec (vector <int> vec){
  int count =0;
  int size = vec.size();
  for (int i=0; i< size; i++){
    if (vec[i]== i){
      count ++;
      if (count == 2){
        return i;
      }
    }
  }
  return -1;
}

int main (){
  vector <int> a{0,1,2,4,5,6,6,8,9};
  cout <<"linear find: " << linear_find (a) << endl;
  cout <<"binary find: " << binary_find (a) << endl;
  return 0;
}
