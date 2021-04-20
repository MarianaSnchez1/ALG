//Punto 3
#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

bool Palindrome (string str){
  int len= str.length();
  if (len<=1){
    return true;
  }else{
    return str[0]== str [len-1] && Palindrome(str.substr(1, len-2));
  }
}

bool isPalindrome (string str){
  string pasa= "";
  for (unsigned i=0; i<str.size(); i++){
    if (str[i]!=32){
      pasa.push_back (tolower(str[i]));
    }
  }
  return Palindrome (pasa);
}


int main() {

  cout << boolalpha;
  cout << isPalindrome ("Reconocer") << endl;
  cout << isPalindrome ("anita lava la tina") << endl;
  cout << isPalindrome ("Hola") << endl;


  return 0;
}
