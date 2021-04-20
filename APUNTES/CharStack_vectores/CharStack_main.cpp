//CharStack_main
#include "CharStack.hpp"

int main() {
  cout<< boolalpha;

  CharStack paolo;

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

  cout << endl;
  paolo.X();
  cout << paolo.peek() << endl;

  return 0;
}
