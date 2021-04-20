#include<iostream>
using namespace std;


int main() {
  /*
  int tmp;
  int x=5;
  int y=x;
  //Son variables locales que SIEMPRE viven en el stack

  int *ptr=null, *p;

  p=new int;
  //Cuaquier variable creada con new vive en el heap

  //Los punteros son el puente de comunicacion entre heap y stack
  delete p; //No borra a p, sino a lo que apunta p
  */
  int ival = 1024;
  cout << ival << " ";

  //int &ref ;
  //cout << ref << " ";

  int &rval = ival ;
  cout << &rval<< " ";

  //int * pval1 = rval ;
  //cout <<pval1<< " ";

  int * pval2 = & rval ;
  cout << *pval2<< " ";

  //int * pval3 = ival ;
  //cout << pval3<< " ";

  int * pval4 = & ival ;
  cout << *pval4 << " ";

  //int * p1 , p2 ;

  return 0;
}
