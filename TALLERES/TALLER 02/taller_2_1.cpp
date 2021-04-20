//Punto 1
#include <iostream>
#include <map>
using namespace std;

int main () {
  cout << boolalpha;

  map <int,bool> mymap;

  //Agrega los elementos con sy llave y valor
  mymap [0] = 0;
  mymap [1] = 0;
  mymap [2] = 1;
  mymap [3] = 1;
  mymap [4] = 0;

  //Le da el valor de la otra llave
  mymap [5] = mymap [4];

  //Imprime el mapa
  for (map<int,bool>::iterator it=mymap.begin(); it!=mymap.end(); ++it){
    cout << it->first << " => " << it->second << '\n';
  }

  //Elimina el elemento de la llave
  mymap.erase (1);
  cout << "Nuevo mapa: " << endl;

  //Imprime el mapa
  for (map<int,bool>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  //Accede al valor con la llave
  cout << "Valor: " << mymap [4] << endl;

  //Retorna el numero de elementos
  cout << "Numero de elementos: " << mymap.size() << endl;

  return 0;
}
