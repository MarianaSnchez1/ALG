#include <iostream>
#include "functions.hpp"
using namespace std;


int slow_selection(int k, vector<int>& v){
  .
  .
  .
}


int main(){
  int times = 100;
  int size = 1e3;
  int k = 8;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);

  double tot_time = 0;
  for(int n = 0; n < times; ++n){
    //Generate the random vector without repetitions
    .
    .

    .
    .
    .
    
  }
  cout << "Time taken = " << tot_time / times << endl;
  
  return 0;
}
