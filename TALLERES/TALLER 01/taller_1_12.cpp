//Punto 12
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

void delete_mid (queue<double> &q){
  int cant= q.size();
  double inicio=q.front();

  if ((cant%2)==0){
    for (int i=0; i<((cant/2)-1); i++){
      q.push(q.front());
      q.pop();
    }
    q.pop();
    q.pop();

  }
  else {
    for (int i=0; i<((cant/2)); i++){
      q.push(q.front());
      q.pop();
    }
    q.pop();
  }

  //Vuelve al inicial
  while (q.front() != inicio){
    q.push(q.front());
    q.pop();
  }


}

int main() {

  queue <double> miq;
  int cant;
  cout << "Ingrese la cantidad de numeros: ";
  cin>> cant;

  double inicio;
  if (cant !=0){
    cout << "Ingrese el numero No.1" <<endl;
    cin >>inicio;
    miq.push(inicio);
  }

  for (int i=0; i<cant-1; i++){
    double n;
    cout << "Ingrese el numero No." << i+2 << endl;
    cin>>n;
    miq.push(n);
  }

  delete_mid (miq);

  cout << endl;

  while (!miq.empty()) {
    cout << miq.front() << endl;
    miq.pop();
  }
  return 0;
  }
