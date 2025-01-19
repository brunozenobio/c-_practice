#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    string s;
    int totalwords=0,num_el=0;
    ifstream in("./src/file.txt");

    while(getline(in,s)){
        stringstream ss(s);
        string word;
        while(ss >> word){
            if (word == "el"){
                num_el++;
            } 
            totalwords++;
            
        }
    }
    cout << "El total de palabras en el fichero es> " << totalwords << endl;
    cout << "El total de veces que aparece la palabra 'el' es> " << num_el << endl;
    return 0;
}