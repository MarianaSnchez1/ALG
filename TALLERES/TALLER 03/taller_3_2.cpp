//Punto 2
#include <iostream>
#include <vector>
using namespace std;

void two_smallest ( vector <string >& arr ){
  string smol, smolist;

  if (arr[0]< arr [1]){
    smolist = arr [0];
    smol= arr [1];
  }
  else {
    smolist = arr [1];
    smol= arr [0];
  }

  for (unsigned i=2; i<arr.size(); i++){
    if (arr [i] < smolist){
      smol= smolist;
      smolist= arr [i];
    }
    else if (arr [i]<smol){
      smol= arr [i];
    }
  }
cout << "La menor palabra es: " << smolist << endl;
cout << "Y le sigue: " << smol << endl;
}
int main () {
  vector <string> words {"delfin","ornitorrinco", "baca", "caballo", "burro","abeja"};
  cout << "La palabras mas pequenias son: "<< endl;;
  two_smallest (words);
  return 0;
}
