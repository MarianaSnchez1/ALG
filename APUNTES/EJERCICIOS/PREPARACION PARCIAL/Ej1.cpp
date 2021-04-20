//Ej. 1
#include <iostream>
#include <cmath>
using namespace std;

float alt_har_num (const int n){
  if (n<=0){
    return 0;
  }
  if (n==1){
    return 1;
  } else{
    return pow(-1,n+1)/n + alt_har_num(n-1);
  }
}


int main() {
  cout << alt_har_num (1) << endl;
  cout<< alt_har_num (2) << endl;
  cout << alt_har_num(3) << endl;
  cout << alt_har_num(0) << endl;
  cout << alt_har_num(-3) << endl;
  cout << alt_har_num(50) << endl;
  return 0;
}
