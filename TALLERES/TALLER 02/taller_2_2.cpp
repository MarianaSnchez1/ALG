//Punto 2
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {

  map <string,string> def;
  def ["1. Quien es?"] ="Soy yo";
  def ["2. Que vienes a buscar?"] = "A ti";
  def ["3. Ya es tarde"] = "Por que?";
  def ["4. Porque ahora soy yo"] = "La que quiere estar sin ti";
  def ["5. o.o"] = "Por eso vete, olvida mi nombre mi cara mi casa y pega la vuelta";
  def ["6. Jamas te pude comprender"] = "...";

  //Elimina el elemento de la llave
  def.erase ("6. Jamas te pude comprender");


  //Imprime el mapa desde un ciclo for
  for (map<string,string>::iterator it=def.begin(); it!=def.end(); ++it){
    cout << it->first << " ... " << it->second << '\n';
  }

  //Imprime el mapa desde un ciclo while
  while (!def.empty()){
    cout << def.begin()-> first << "=> " << def.begin()-> second << endl;
    def.erase (def.begin());
  }


  return 0;

}
