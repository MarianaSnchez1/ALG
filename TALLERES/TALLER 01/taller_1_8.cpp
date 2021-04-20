//Punto 8
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
  stack <int> potencias;
  for (int i = 0; i <10; i++) {
    potencias.push(pow(3,i));
    cout << potencias.top () << endl;
  }
  cout << "\n";
  while (!potencias.empty()){
      cout << potencias.top() << endl;
      potencias.pop();
  }

  return 0;
}
