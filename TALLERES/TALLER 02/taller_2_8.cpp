//Punto 8
#include <iostream>
#include <set>
#include <vector>
using namespace std;

set <int > aunion (vector <int > & a, vector <int > & b);
set <int > intsect (vector <int > & a, vector <int > & b);
set <int > difference (vector <int > & a, vector <int > & b);

int main () {
  vector<int> vec1={0,1,2,3,4,5,6};
  vector<int> vec2={4,5,6,7,8,9,10};
  set<int> set1= aunion(vec1,vec2);
  set<int> set2= intsect (vec1,vec2);
  set<int> set3= difference(vec1,vec2);

  //Imprime todos los cositos del set
  for (set<int>::iterator it=set1.begin(); it!= set1.end(); it++){
    cout << *it << " ";
  }

  for (int j=0; j<=5; j++)
    cout<< endl;

  for (set<int>::iterator kt=set2.begin(); kt!= set2.end(); kt++){
    cout << *kt << " ";
  }

  for (int j=0; j<=5; j++)
    cout<< endl;

  for (set<int>::iterator t=set3.begin(); t!= set3.end(); t++){
    cout << *t << " ";
  }

  return 0;
}

set <int> aunion (vector <int > & a, vector <int > & b){
  set<int> c;
  for (unsigned at=0; at< a.size(); at++){
    c.insert(a[at]);
  }
  for (unsigned bt=0; bt<b.size(); bt++){
    c.insert (b[bt]);
  }
  return c;
}

set <int> intsect (vector <int > & a, vector <int > & b){
  set<int> c;
  for (unsigned i=0; i<a.size(); i++){
    for (unsigned j=0; j<b.size(); j++){
      if (a[i]==b[j]){
        c.insert(a[i]);
      }
    }
  }
  return c;
}

set <int> difference (vector <int > & a, vector <int > & b){
  set<int> c;
  for (unsigned i=0; i<a.size(); i++){
    int cont=0;
    for (unsigned j=0; j<b.size(); j++){
      if (a[i]==b[j]){
        cont ++;
      }
    }
    if (cont==0)
      c.insert(a[i]);
  }
  return c;
}
