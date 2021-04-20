//Punto 7
#include <iostream>
#include <stack>
using namespace std;

int main() {
  cout << boolalpha;

  stack<int> sk;

  //Agrega los elementos a la lista
  for (int i=0; i <=10 ; i++) {
    sk.push (i);
  }
  cout << "La pita esta vacia?: " << sk.empty() << endl;
  cout << "Tamanio de la pila: " << sk.size() << endl;

  cout << "Primer elemento de la lista: " << sk.top () << endl;

  //Elimina el primer elemento
  sk.pop();
  cout << "Nuevo elemento de la lista: " << sk.top() << endl;

  return 0;
}
