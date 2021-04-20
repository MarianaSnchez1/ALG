//Punto 3
#include <iostream>
#include <vector>
using namespace std;

int findMaximun_lineal (vector <int> &arr){
  int arr_size= arr.size();

  for (int i=0; i<arr_size; i++){
    if (arr [i+1] < arr[i]){
      return arr [i];
    }
  }
  return -1;
}

int findMaximun_binaria (vector <int> &arr){
  int vi=0, vf= arr.size()-1;

  while(vi<= vf){
    int vm= (vi+vf)/2;
    if (arr[vm]> arr[vm-1] && arr [vm] > arr [vm+1]){
      return arr[vm];
    }
    else if (arr[vm]>= arr[vm-1] && arr [vm] <= arr [vm+1]){
      vi= vm+1;
    }
    else if (arr[vm]<= arr[vm-1] && arr [vm] >= arr [vm+1]){
      vf= vm-1;
    }
  }

  return -1;
}

int main (){
  vector <int> nums {0,1,2,3,4,4,5,5,6,6,7,7,7,7,8,7,6,5,4,3,2,1,0};
  cout << "El numero maximo del vector es: " << findMaximun_lineal (nums) << endl;
  cout << "El numero maximo del vector es: " << findMaximun_binaria (nums) << endl;
  return 0;
}
