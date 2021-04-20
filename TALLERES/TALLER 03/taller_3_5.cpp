//Punto 5
#include <iostream>
#include <vector>
using namespace std;

int interpolation_search ( vector <int> & vec, int key){
  int left=0, right= vec.size()-1;
  while (left != right){
    int pos = left + (((key-vec[left])*(right-left))/vec[right]-vec[left]);
    if (vec[pos]==key){
      return pos;
    }
    else if (vec[pos] > pos){
      left= pos +1;
    }
    else if (vec[pos] < pos){
      right= pos-1;
    }
  }
  return -1;
}

int main (){
  vector <int> a ={0,2,4,6,8,10,12,14,16,18,20};
  cout << interpolation_search (a, 10) << endl;
  return 0;
}
