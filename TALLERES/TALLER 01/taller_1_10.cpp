//Punto 10
#include <iostream>
#include <queue>
using namespace std;

int main() {
  cout << boolalpha;
  queue <int> qu;

  for (int i = 0; i < 10; i++) {
    qu.push(i);

  }
  cout << "Tamanio de la cola: " << qu.size() << endl;
  cout << "La cola esta vacia?: " << qu.empty() << endl;

  cout << "Primer elemento: " << qu.front() << endl;

  qu.pop();
  cout << "Nuevo primer elemento: " << qu.front() << endl;

  qu.push (10);
  while (!qu.empty()){
      cout << qu.front() << endl;
      qu.pop();
  }

  return 0;
}
