//Punto 1
#include <iostream>
#include <string>
#include <set>
#include <cmath>
using namespace std;

int Potencia (int n, int k){
  if (k==0 || n==1){
    return 1;
  }
  if (k==1){
    return n;
  }
  else {
    return n * Potencia (n, k-1);
  }
}

int main() {
  cout << Potencia (2,2) << endl;
  cout << endl;
  cout << Potencia (1,42) << endl;
  cout << endl;
  cout << Potencia (2,5) << endl;

  return 0;
}
