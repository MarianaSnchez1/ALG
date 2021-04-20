////arrdim_main.cpp
#include "arrdim.hpp"

int main(){
  cout << boolalpha;
  Array<int> joepino;

  for (int i=0; i<20; i+=2){
    joepino.insert(i);
    cout << joepino.back() << endl;
    //cout << "S" << joepino.size();

  }
  return 0;
}
