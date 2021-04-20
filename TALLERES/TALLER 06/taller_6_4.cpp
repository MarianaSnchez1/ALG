//Punto 4
#include <iostream>
#include <cmath>
using namespace std;
int C (int n, int k){
  if (k==0 || n==k){
    return n;
  }else{
    return (C(n-1,k-1)+ C(n-1,k));
  }
}

int main() {
  cout << C(10,3) << endl;
  cout << C(20,6) << endl;
  return 0;
}
