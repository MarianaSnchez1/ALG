//Problema de ordenamiento

#include <iostream>
#include <vector>

using namespace std;

void insertion_sort (vector<int> &v){
  for (unsigned i=1; i<v.size(); i++){
    int j=i-1, x= v[i];

    while (j>= 0 && v[j]>x){
      v[j+1] = v[j];
      j--;
    }
    v[j+1]=x;
  }
}

void selection_sort (vector <int> &v){
  for (unsigned i=0; i<v.size()-1; i++){
    unsigned min_idx= i;
    for (unsigned j=i+1; j<v.size(); j++){
      if (v[j] < v[min_idx]){
        min_idx =j;
      }
    }
    swap (v[i], v[min_idx]);
  }
}

void bubble_sort (vector <int> &v){
  for (unsigned i=0; i<v.size()-1; i++){
    for (unsigned j=0; j<v.size()-1; j++){
      if (v[j]> v[j+1]){
        swap (v[j], v[j+1]);
      }
    }
  }
}

void bubble_sort2 (vector<int> &v){
  bool swapped = true;
  while (swapped){
    swapped = false;
    for (unsigned j=0; j<v.size()-1;j++){
      if (v[j]> v[j+1]){
        swap (v[j],v[j+1]);
        swapped=true;
      }
    }
  }
}

//AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH (predestnacion voice)

void cocktailshaker_sort (vector<int> &v){
  bool swapped=true;
  while (swapped){
    swapped= false;
    for (unsigned i=0; i<v.size(); i++){
      if (v[i]>v[i+1]){
        swap (v[i], v[i+1]);
        swapped =true;
        print_vecint (v); //
      }
    }
    if (swapped == false){
        break;
    }
    swapped= false;
    for (unsigned i=v.size()-2; i>0; i--){
      if (v[i]>v[i+1]){
        swap (v[i], v[i+1]);
        swapped = true;
        print_vecint(v); //
      }
    }
  }
}

int slow_select (vector<int> v, unsigned kord){
  if (kord > v.size()-1){
    cout << "Order statistics NOT admissible" << endl;
  }

  for (unsigned i=0; i<= kord; i++){
    unsigned min_idx=i;

    for (unsigned j=i+1; j<v.size(); j++ ){
      if (v[j]< v[min_idx]){
        min_idx =j;
      }
    }
    swap (v[i], v[min_idx]);
  }
  return v[kord];
}


void print_vecint (const vector<int> &v){
  for (unsigned i=0; i< v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main (){
  vector<int> ivec= {7,8,5,6,4,3,2,8,9,0,7,6,5};
  //vector<int> ivec= {0,1,2,3,4,5,6,7,8,9};
  //vector<int> ivec= {9,8,7,6,5,4,3,2,1,0};
  //vector<int> ivec= {1,1,1,1,1,-1,-1,-1,-1-,1};

  cout << "Before insertion sort: " << endl;
  print_vecint (ivec);
  insertion_sort (ivec);

  cout << "After insertion sort: " << endl;
  print_vecint (ivec);

/*
  cout << "Slow select" << endl;
  print_vecint(ivec);

  for (unsigned k=0; k< ivec.size(); k+=3)
    cout << k << "-th order stats: " << slow_select (ivec,k) << endl;
*/
  return 0;
}
