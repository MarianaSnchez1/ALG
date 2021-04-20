//Punto 1
#include <iostream>
#include <vector>
using namespace std;


int falta_lin (vector <int> num){
  int size =num.size();
  for (int i=0; i< size; i++){
    if (num[i]!= i+1){
      return i+1;
    }
  }
  return -1;
  /*
  int count= 1;
  int co=0;
  int size =num.size();

  while (co < size){
    if (num [co]!= count){
      return count;
    }
      count ++;
      co ++;
  }

  return -1;
*/
}


int main () {
  vector <int> num {1,2,3,4,5,6,7,8,10};
  cout << "Numero flatante: " << falta_lin (num) << endl;
  return 0;
}
