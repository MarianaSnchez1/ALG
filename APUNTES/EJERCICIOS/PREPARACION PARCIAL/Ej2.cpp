// Ej.2

#include <iostream>
#include <string>
using namespace std;

char * concatenate (const string &string1, const string &string2){
  string toto = string1 + string2;
  char *tot = new char [toto.size()];
  for (unsigned i=0; i<toto.size(); i++){
    tot[i] =toto[i];
  }

  return tot;
}

int main() {
  char * conc= concatenate ("marco", "polo");
  cout << conc << endl;
  delete[] conc;
  return 0;
}
