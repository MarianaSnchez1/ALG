//Punto 3
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int find_num (map <string,int> directorio, string nombre){
  int i=directorio[nombre];
  return i;
}

string find_name (map <int,string> directorio, int numero){
  string i= directorio[numero];
  return i;
}

int main () {
  map <int, string> directory;
  map <string, int> directory2;

  ifstream nums("num.txt");

  int key;
  string value;

  getline(nums,value);
  getline(nums,value);

  if (nums.good()){
    while (!nums.eof()){
      nums >> key;
      nums >> value;
      directory.insert (pair<int,string> (key,value));
      directory2.insert (pair<string,int> (value,key));
    }
  }
  nums.close();

  for (map<int,string>::iterator it=directory.begin(); it!=directory.end(); ++it){
    cout << it->first << " ... " << it->second << '\n';
  }
  cout << "El numero que esta buscando es: " <<find_num (directory2, "ACD") << endl;
  cout << "El nombre que esta buscando es: " <<find_name (directory, 4052) << endl;
  return 0;
}
