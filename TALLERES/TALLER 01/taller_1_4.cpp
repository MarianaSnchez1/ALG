//Punto 4
#include <iostream>
#include <list>
using namespace std;

int main() {

  cout <<  boolalpha;

  list <int> lst {0,11,12,13,14,20};

  //Tamanio
  cout << "Tamanio de la lista: " << lst.size()<< endl;

  //lista vacia
  cout << "La lista esta vacia? " << lst.empty () << endl;

  //Acceso al primer/ultimo elemento
  cout << "Primer elemento de la lista es: " << lst.front () << endl;
  cout << "Ultimo elemento de la lista es: " << lst.back() << endl;

  //Inserta los elementos
  lst.push_back (42);
  cout << "Nuevo tamanio de la lista: " << lst.size()<< endl;
  lst.push_front(-42);
  cout << "Nuevo tamanio de la lista: " << lst.size()<< endl;

  //Elimina los elementos del inicio o final
  lst.pop_front ();
  lst.pop_back ();

  //Imprime todos los elementos de la lista
  while (lst.size() != 0) {
    cout << lst.front();
    cout << "\n";
    lst.pop_front();
  }





  return 0;
}
