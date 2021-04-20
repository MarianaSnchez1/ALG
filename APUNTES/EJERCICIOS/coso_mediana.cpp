//Practica set
#include <iostream>
#include <set>
using namespace std;

float mediana (set<int> n){
  float tot=0;
  int num= n.size();

  unsigned mid = (n.size()/2)+1;

  while (n.size()>mid){
    n.erase(n.begin());
  }

  if ((num%2)==0){
    float prim = *n.begin();
    n.erase(n.begin());
    float seco= *n.begin();
    tot= (prim+seco)/2;

  }else{
    tot= *n.begin();
  }

  return tot;
}

int main() {
  set<int> impar {-1,1,3,4,5,7,9};
  set<int> par {7,8,9,10,11,12};

  cout << mediana (impar) << endl;
  cout << mediana (par) << endl;

  return 0;
}
