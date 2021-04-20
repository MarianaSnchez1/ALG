#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//BUSQUEDA

int busqueda_lineal(vector<int> vec, int x){
    for (unsigned i = 0; i < vec.size(); i++){
        if (vec[i] == x){
            return i;
        }
    }
    return -1;
}

int busqueda_binaria(vector<int> vec, int x){

    int lh = 1;
    int rh = vec.size();
    int mid = 0;

    while (lh <= rh){

        mid = (lh + rh) / 2;
        if (x == vec[mid]){
            return mid;
        }

        else if (x > vec[mid]){
            lh = mid + 1;
        }

        else{
            rh = mid - 1;
        }
    }

    return -1;
}

//SOTRTING

void selection(vector<int> &vec){

    for (unsigned i = 0; i < vec.size(); i++){
        int minIndex = i;
            for (int j = i+1; j < vec.size(); j++){
                if (vec[j] < vec[minIndex]){
                    minIndex = j;
                }
            }
        swap(vec[i], vec[minIndex]);
    }

    for (unsigned i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }

}

void bubble(vector<int> &vec){

    for(int i = 0; i < vec.size()-1; i++){
        for (int j = 0; j < vec.size()-1; j++){
            if (vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
            }
        }
    }
    for (unsigned i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

void bubble_mejorado(vector<int> &vec){

    bool swapped = true;

    while (swapped){
        swapped = false;
        for (int j = 0; j < vec.size()-1; j++){
            if (vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }
    }
    for (unsigned i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

void insertion(vector<int> &vec){

    for(unsigned i = 1; i < vec.size(); i++){
        int b = vec[i];
        int j = i-1;

        while(j > 0 and vec[j] > b){
            vec[i+j] = vec[j];
            j = j-1;
        }
        vec[j+1] = b;
    }

    for (unsigned i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

int main (){

    vector<int> organizado = {1,2,3,4,5,6,7,8,9};

    int key = 4;

    vector<int> desorganizado = {9,3,7,6,1,5,2,4,8};

    //BUSQUEDA

    cout << "Busqueda lineal: " << endl;
    cout << busqueda_lineal(desorganizado, key) << endl;
    cout << endl;

    cout << "Busqueda binaria: " << endl;
    cout << busqueda_binaria(organizado, key) << endl;
    cout << endl;

    //SOTRTING\

    cout << "Selection sort: " << endl;
    selection(desorganizado);
    cout << endl;

    cout << "Bubble sort: " << endl;
    bubble(desorganizado);
    cout << endl;

    cout << "Bubble mejorado sort: " << endl;
    bubble_mejorado(desorganizado);
    cout << endl;

    cout << "Insertion: " << endl;
    insertion(desorganizado);
    cout << endl;

    return 0;
}
