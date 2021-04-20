//Punto 5
#include <iostream>
#include <string>
#include <set>
using namespace std;

set<string> generatePermutations(const string & str)
{
  set<string> final;
  if (str.size() == 0) {
    final.insert("");
    return final;
  } else {
    char first = str[str.size() - 1];
    string tmp = str.substr(0, str.size() - 1);
    set<string> s_tmp = generatePermutations(tmp);
    final = putCharInGrooves(s_tmp, first);
    return final;
  }
}


set<string> Posibilidad (string k, int a){
  int len=k.size();
  set<string> posi;
  posi.insert(k);

  if (k.size()<= 1 || a>= len){
    return posi;

  }else{
    for (unsigned i=0; i< k.size(); i++){
      swap (k[i],k[a]);
      posi.insert (k);
      cout << k << "____"; //
    }
    a++;
    while (k != inicio){
      Posibilidad (k,a);
    }
    return posi;
  }
}


int main() {
  set<string> paso= generatePermutations ("bus");
  for (set<string>::iterator it=paso.begin(); it!= paso.end(); it ++){
    cout << *it << endl;
  }
  return 0;
}
