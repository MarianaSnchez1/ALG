//Preparacion Para Parcial 1#include <iostream>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>

using namespace std;

set<int> intsect (const set<int> &a, const set<int> &b);
string max_reps (const vector<string> &vec);
void sort_even (vector<int> &arr);
void print_vecint(const vector<int> &v);

int main() {
  set<int> a= {5,4,3,2,1};
  set<int> b= {1,3,9,7};
  set<int> c= intsect (a,b);
  cout << "Numeros en comun: ";
  for (set<int>::iterator ct= c.begin(); ct!= c.end(); ct++){
    cout << " " << *ct << " ";
  }

  cout << "\n";

  vector <string> d={"Z","K","g","e","K","e","a","K"};
  cout << "Letra que mas se repite es: " << max_reps(d) << endl;

  cout << "\n";

  vector<int> pares ={0,11,16,7,1,2,18,14,24,23};
  print_vecint(pares);
  sort_even (pares);
  print_vecint(pares);

  return 0;
}

void print_vecint(const vector<int> &v){
  for (unsigned i = 0;i<v.size();i++)
    cout << v[i]<<" ";
  cout << endl;
}

set<int> intsect (const set<int> &a, const set<int> &b){
  set<int> c;
  for (set<int>::iterator at=a.begin(); at!= a.end(); at++){
    for (set<int>::iterator bt=b.begin(); bt!=b.end(); bt++){
      if (*at==*bt){
        c.insert(*at);
      }
    }
  }
  return c;
}


string max_reps (const vector<string> &vec){
  map <string, int> repe;
  for (unsigned i=0; i<vec.size(); i++){
    string key= vec[i];
    int value=0;
    for (unsigned j=0; j<vec.size();j++){
      if (key==vec[j]){
        value ++;
      }
    }
    repe.insert (pair<string,int>(key,value));
  }
  string mayor= repe.begin()->first;

  for (map<string,int>::iterator ti=repe.begin(); ti!=repe.end(); ++ti){
    if ((repe[mayor])< (ti->second)){
      mayor= ti->first;
    }
  }

  return mayor;
}


void sort_even (vector<int> &arr){
  for (unsigned i=0; i<arr.size(); i++){
    unsigned min_idx=i;
    if ((arr[i]%2)==0){
      for (unsigned j=i+1; j<arr.size(); j++){
        if (arr[j] < arr[min_idx] && (arr[j]%2)==0 ){
          min_idx= j;
        }
      }
      swap (arr[i], arr[min_idx]);
    }
  }
}
