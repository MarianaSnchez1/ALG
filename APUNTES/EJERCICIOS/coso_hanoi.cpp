//Coso hanoi
#include <iostream>
#include <stack>

using namespace std;
void hanoi ();

int main(){
  hanoi();
  return 0;
}


void hanoi (){
  stack<int> palo1;
  palo1.push(0);
  palo1.push(3);
  palo1.push(2);
  palo1.push(1);

  stack<int> palo2;
  palo2.push(0);

  stack<int> palo3;
  palo3.push(0);

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo3.push(palo1.top());
  palo1.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo2.push(palo1.top());
  palo1.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo2.push(palo3.top());
  palo3.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo3.push(palo1.top());
  palo1.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo1.push(palo2.top());
  palo2.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo3.push(palo2.top());
  palo2.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  palo3.push(palo1.top());
  palo1.pop();

  //imprimir
  cout<<palo1.top();
  cout<<palo2.top();
  cout<<palo3.top();
  cout<< endl;

  cout <<"Fin :)" << endl;

  cout <<"Verificacion: " << palo3.top() << " ";
  palo3.pop();
  cout <<palo3.top() <<" ";

  palo3.pop();
  cout <<palo3.top() <<" ";

}
