//Punto 6
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set <string> names= {"Yanez", "Santiago", "Ana", "Aleja", "Sillon"};

    //Banea a yañez
    names.erase("Yanez");

    names.find("Ana");
    names.find("Santiago");


    cout << "Primer elemento: " << *names.begin() << endl;

    cout << "Ultimo elemento: " << *--names.end() << endl;

    cout << endl;
    cout << "\n";
    int tot=1;
    cout <<"Nombres: " << endl;
    while (!names.empty()) {
      set<string>::iterator it=names.begin();
      cout << "No." << tot << " " << *it << endl;
      names.erase (names.begin());
      tot ++;
    }

  return 0;
}
