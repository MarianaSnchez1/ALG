//daqueue_main
#include "daqueue.hpp"
#include <iostream>
using namespace std;

int main() {
  cout<< boolalpha;

  DaQueue<int> paolo;

  for (int i=0; i<30; i+=2){
  paolo.enqueue(i);
  cout << "Front: " << paolo.front() << " __ Back: " << paolo.back() << endl;
  }

  cout << "Size: " << paolo.size() << endl;
  cout << "Is it empty?: " << paolo.empty() << endl;
  cout << "We are going to clear Paolo" << endl;
  paolo.clear();
  cout << "Paolo´s size now: " << paolo.size() << endl;

  return 0;
}
