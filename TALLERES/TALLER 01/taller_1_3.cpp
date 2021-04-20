//Punto 3
//PARTE A

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

  vector <char> abc;

  string abecedario = "abcdefghijklmnopqrstuvwxyz";

  //crea el vector con las letras
  for (unsigned int i=0; i<abecedario.size(); i++){
    abc.push_back(abecedario[i]);
  }
  //imprime el vector
  for (unsigned int j=0; j<abc.size(); j++){
    cout << j <<" " << abc[j] << endl;
  }

  //imprime el vector al revés
  for (unsigned int k=25; k<abc.size(); k--){
    cout << k <<" " << abc[k] << endl;
  }

  return 0;
  }
