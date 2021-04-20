//Punto 4

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<list>
#include<map>

using namespace std;


bool is_let(list<char> & cl, char & c);
bool is_mor(char & s);

int main () {

    map<char,string> lAm;
    map<string,char> mAl;

    list<char> cl;
    list<string> sl;


    ifstream textA("02_04-morseMap.txt");
    char key;
    string value;

    getline(textA,value);
    getline(textA,value);

    if (textA.good()) {
        while (!textA.eof()) {
            textA >> key;
            textA >> value;

            lAm.insert(pair<char,string> (key,value));
            mAl.insert(pair<string,char> (value,key));

            cl.push_back(key);
            sl.push_back(value);
        }
    }
    textA.close();


    string sen = " ";
    while (!sen.empty()) {
        cout << "> " ;
        getline(cin,sen,'\n');


        string palabra;
        list<string> lp;


        stringstream ss(sen);

        while (ss >> palabra) {
            lp.push_back(palabra);
        }

        for (string palabra : lp) {

            bool iL = is_let(cl,palabra[0]);
            bool iM = is_mor(palabra[0]);

            if (iL) {
                for (int letra : palabra) {
                    cout << lAm[letra] << " ";
                }
            } else if (iM) {
                cout << mAl[palabra] << " ";
            } else {
                cout << "" ;
            }

        }
        cout << endl;
    }

    return 0;
}


bool is_let(list<char> & cl, char & c) {
    bool iL;

    for (char elem : cl) {
        if (elem == c) {
            iL = true;
            break;
        } else {
            iL = false;
        }
    }
    return iL;
}


bool is_mor(char & c) {
    bool iL;

    if (c == '.' || c == '-') {
        iL = true;
    } else {
        iL = false;
    }
    return iL;
}
