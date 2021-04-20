//punto 5
#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main() {
  list<float> num;
  list<float>::iterator it;
  float count= 0.0;
  int cant;
  cout << "Ingrese la cantidad de numeros" << endl;
  cin >> cant;
  for (int i=0; i<cant; i++){
    float numero;
    cout << "Ingrese el numero No." << i << endl;
    cin >> numero;
    num.push_back (numero);
  }

  while (num.size() != 0) {
    it=num.begin();
    count+= *it;
    num.pop_front();
  }

  cout << "La suma de los numeros en la lista es: " << count << endl;

  return 0;
}
