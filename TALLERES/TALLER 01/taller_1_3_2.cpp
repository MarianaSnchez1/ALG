//Punto 3
//PARTE B
  #include <iostream>
  #include <vector>
  #include <string>
  using namespace std;

  int main () {

    int num;
    cout << "Ingrese el numero de frutas" << endl;
    cin >>num;

    vector <string> frutas ;

    string fruta;
    for (int i=0; i < num; i++){
      cout << "Ingrese la fruta no."<< i << endl;
      cin >> fruta;
      frutas.push_back (fruta);
    }
    cout << "\n";

    //Chequea el vector sin cambios
    for (unsigned int j=0; j<frutas.size(); j++){
      cout << j <<" " << frutas[j] << endl;
    }

    cout << "\n";
  /*
    //Ordena las frutas
    for (unsigned i=0; i<frutas.size(); i++){
      for (unsigned j=0; j<frutas.size(); j++){
        if (frutas [i] < frutas [j]){
            frutas.insert (frutas.begin(), frutas[i]);
        }
        else {
          frutas.push_back (frutas [i]);
        }
      }
    }

    //imprime el vector
    for (unsigned int j=0; j<frutas.size(); j++){
      cout << j <<" " << frutas[j] << endl;
    }
  */
    return 0;
  }
