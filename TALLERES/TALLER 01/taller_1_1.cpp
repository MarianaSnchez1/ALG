//Punto 1
#include <iostream>
#include <vector>
using namespace std;

int main () {
  cout << boolalpha;

  vector <int> vec(9, -11); //crea un vector de enteros
  cout << "size vec: " << vec.size() << endl;
  cout << "empty vec: " << vec.empty()<< endl;
  vec [0]= -33;  //primer elemento
  vec[vec.size()-1]=99; //ultimo elemento

  for (unsigned int i=0; i<vec.size(); i++){
    cout << i <<" " << vec[i] << endl;
  }

  vec.erase(vec.begin()); //elimina el elemento
  cout << "new size vec: " << vec.size() << endl;

  vec.insert (vec.begin()+2,300); //inserta el elemento

  vec.push_back (7); //pone el elemento al final
  vec.pop_back (); //elimina el ultimo elemento

  for (unsigned int i=0; i<vec.size(); i++){
    cout << i <<" " << vec[i] << endl;
  }
  return 0;
}
