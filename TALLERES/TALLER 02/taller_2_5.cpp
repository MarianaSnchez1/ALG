//Punto 5
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    cout << boolalpha;
    
    set<int> myset  = {0,1,2,3,4,5,6,7,8,9,10};

    //Imprime todos los cositos del set
    for (set<int>::iterator it=myset.begin(); it!= myset.end(); it++){
      cout << *it << " ";
    }

    //Elimina el valor
    myset.erase(5);
    myset.erase(myset.find(10));

    cout<< endl;

    for (set<int>::iterator it=myset.begin(); it!= myset.end(); it++){
      cout << *it << " ";
    }

    cout << endl;

    cout << "El cosito esta vacio? " << myset.empty() << endl;


  return 0;
}
