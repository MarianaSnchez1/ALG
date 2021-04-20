//Repaso
#include <iostream>
#include <list>
using namespace std;

int howMany (list<int> L,int k){

  int cont=0; //Crea un contador

  while (!L.empty()){
    if (L.front()==k){ //Revisa cuantas veces aparece k
      cont+=1; //Las va contando
    }
    L.pop_front();
  }

  return cont;
  }

int main() {
  list<int> pr; //Se crea la lista
  int m, n;
  cout << "Ingrese el numero para agregar a la lista (Si desea parar ingrese 0)" << endl;
  cin >> m;
  while (m!= 0){
    pr.push_back (m);
    cout << "Ingrese el numero para agregar a la lista (Si desea parar ingrese 0)" << endl;
    cin >> m;
  }
  cout << "Cual es el numero que quiere contar?: " << endl;
  cin>> n;
  cout << "El numero " << n << " aparece " <<howMany (pr,n)<< " veces"<< endl;
  return 0;
}
