//Recursiom em ejemplos no matematicoa
#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isPalindrome (string str){
  int len= str.length();
  if (len<=1){
    return true;
  }else{
    return str[0]== str [len-1] && isPalindrome(str.substr(1, len-2));
  }
}

bool subsetSumExists (set<int> sett, int target){
  if (sett.empty()){
    return false;
  }else{

    int element= *sett.begin();
    set<int> rest= sett;
    rest.erase (element);

    bool a= subsetSumExists(rest,target);
    bool b= subsetSumExists (rest, target-element);
    return a || b;
  }
}

set<int> generatePermutation (){
  set<int> a;
  return a;
}

int main() {

  cout << boolalpha;
  cout << isPalindrome ("reconocer") << endl;
  cout << isPalindrome ("anitalavalatina") << endl;
  cout << isPalindrome ("Hola") << endl;

  cout << "\n";

  set<int> prueba ={-2,1,3,8};
  cout << subsetSumExists (prueba,7) << endl;
  cout << subsetSumExists (prueba,5) << endl;


  return 0;
}
