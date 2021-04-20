//Punto 7
#include <iostream>
#include <set>
using namespace std;

int linear_search (set<int> &rar, int key){
  for (set<int>::iterator t= rar.begin(); t!= rar.end(); t++){
    if (*t== key){
      return true;
    }
  }
  return false;
}

bool subser (set<int> &a, set<int> &b){
  bool fin;
  for (set<int>::iterator at= a.begin(); at!= a.end(); at++){
    fin= linear_search (b,*at);
    if (fin==false){
      return false;
    }
  }
  return fin;
}

int main () {
  cout<<boolalpha;

  set<int> set1={0,1,2,3,4,5,6};
  set<int> set2={0,1,2,3,4,5,6,7,8,9,10};

  cout << subser(set1,set2) << endl;

  return 0;
}
