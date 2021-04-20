//Punto 2
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {

  vector <int> vec(10, 0);
  //crea el bassic vector
  for (unsigned i=0; i<vec.size(); i++){
    vec [i]= pow(3,i);
  }

  //lo imprime
  for (unsigned int i=0; i<vec.size(); i++){
    cout << i <<" " << vec[i] << endl;
  }

  //borra los menores a 100
  while (vec[0]<100){
    vec.erase (vec.begin());
  }

  cout << "\n";
  cout << "New vector: " << endl;
  for (unsigned int i=0; i<vec.size(); i++){
    cout << i <<" " << vec[i] << endl;
  }

return 0;
}
