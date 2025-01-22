#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nombre,edad;

    cout <<"Ingrese su nombre: ";
    getline(cin,nombre);
    cout <<"Ingrese su edad: ";
    getline(cin,edad);

    ofstream out("./src/out.txt");
    out << "Nombre: " << nombre << endl;
    out << "Edad: " << edad << endl;






    return 0;
}


