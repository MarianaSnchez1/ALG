//Punto 9
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack <char> letr ;
  string pal;
  cout << "Ingrese la palabra que quiere invertir: " << endl;
  cin >> pal;

  for (char cara: pal){
    letr.push(cara);
  }
  cout << "\n";

  for (unsigned i=0; i<pal.size(); i++){
    letr.push(pal[i]);
  }

  while (!letr.empty()){
      cout << letr.top() ;
      letr.pop();
  }

  return 0;
}
