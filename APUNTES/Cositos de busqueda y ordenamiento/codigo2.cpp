//Problema de busqueda
#include <iostream>
#include <vector>

using namespace std;

int linear_search (vector<int> &vec, int key){
  for (unsigned i=0; i< vec.size(); i++){
    if (vec[i]== key){
      return i;
    }
  }
  return -1;
}

int binary_search (vector<int> &vec, int key){
  int lh=0;
  int rh= vec.size()-1;
  while (lh <= rh){
    int mid= (lh+rh)/2;
    if (vec[mid]==key){
      return mid;
    }
    else if (vec[mid] > key){
      rh= mid -1;
    }
    else{
      lh= mid +1;
    }
  }
  return -1;
}


void print_vecint (const vector<int> &v){
  for (unsigned i=0; i< v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main (){
  //vector<int> ivec= {7,8,5,6,4,3,2,8,9,0,7,6,5};
  vector<int> ivec= {1,2,3,4,5,6,7,8,9};
  //vector<int> ivec= {9,8,7,6,5,4,3,2,1,0};
  //vector<int> ivec= {1,1,1,1,1,-1,-1,-1,-1-,1};


  print_vecint (ivec);
  cout << linear_search (ivec,6)<< endl;
  cout << binary_search (ivec,6) << endl;

  return 0;
}
