// Practica mapas
#include <iostream>
#include <map>
using namespace std;

map<int,int> collatz (int n){
  map<int,int> coso;
  int key= 1;
  int value=n;
  coso.insert(pair<int,int>(key, value));

  while (value!=1){
    key ++;
    if ((value%2)==0){
      value= value/2;
    }else{
      value= (3*value)+1;
    }
    coso.insert(pair<int,int>(key, value));
  }
  return coso;
}

int main() {
  map<int,int> bicho= collatz (41);
  for (map<int,int>::iterator it=bicho.begin(); it!=bicho.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}
