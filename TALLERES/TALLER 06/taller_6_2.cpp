//Punto 2
#include <iostream>
#include <string>
using namespace std;

string invertir (string papa){
  if (papa.size()==0){
    return papa;
  }

  else{
    return invertir(papa.substr(1))+papa[0];
  }
}


int main() {
  string a= "hola";
  cout << invertir (a) << endl;

  return 0;
}
