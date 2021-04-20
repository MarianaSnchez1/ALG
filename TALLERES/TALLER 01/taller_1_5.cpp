//punto 5
#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main() {
  list<int> potencias;
  list<int>::iterator it;

  for (int i=0; i<10; i++){
    potencias.push_back (pow(3,i));
  }

  //Imprime todos los elementos de la lista

  while (potencias.size() != 0) {
    cout << potencias.front();
    cout << "\n";
    potencias.pop_front();
  }
  return 0;
}
