#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


int linear_search(int X, const vector<int>& v){
  .
  .
  .
}

int main(){
  int times = 100;
  int size = 1e6;
  int X = 1;//size-1;
  vector<int> vec;
  
  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);

  double tot_time = 0;
  for(int n = 0; n < times; ++n){
    //Generate the random vector
    .
    .
    
    
    //get initial time
    double tstart = gettime();
    
    //Search for X in vec
    int pos = linear_search(X, vec);
    
    //final time
    double tstop = gettime();
    tot_time += tstop-tstart;
    
    if(pos < 0)
      cout << X << " is not contained in the vector\n";
    else
      cout << X << " was found at position " << pos << "\n";

  }
  cout << "Time taken = " << tot_time / times << endl;
  
  return 0;
}
