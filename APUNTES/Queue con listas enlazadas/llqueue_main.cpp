//llqueue_main.cpp
#include "llqueue.hpp"
#include <string>
#include <iostream>
using namespace std;

int main(){
  llQueue<int> julian;
  for (int i=0; i<10; i+=2){
    julian.enqueue(i);
    cout << "Front: " << julian.front() << " Back: " << julian.back() << endl;
  }

  cout << "Pop: " << julian.dequeue() << endl;
  cout << "Front: " << julian.front() << " Back: " << julian.back() << endl;
  cout << "Size: " << julian.size() << endl;

}
