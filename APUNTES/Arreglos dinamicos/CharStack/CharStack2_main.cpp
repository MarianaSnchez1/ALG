//CharStack2_main
#include "CharStack2.hpp"
#include <iostream>
using namespace std;

int main() {
  cout<< boolalpha;

  CharStack2 paolo;

  cout << "Size: " << paolo.size() << endl;
  cout << "Is it empty?: " << paolo.isEmpty() << endl;
  cout << "We are going to clear Paolo" << endl;
  paolo.clear();
  cout << "Paolo´s size now: " << paolo.size() << endl;
  paolo.push('p');
  cout << paolo.peek() << endl;
  paolo.push('a');
  cout << paolo.peek() << endl;
  paolo.push('o');
  cout << paolo.peek() << endl;
  paolo.push('l');
  cout << paolo.peek() << endl;
  paolo.push('o');
  cout << paolo.peek() << endl;
  cout << paolo.pop();
  return 0;
}
