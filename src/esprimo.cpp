#include <iostream>
using namespace std;

bool esPrimo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return false;

}

int main(){
    int n;
    cout << "Ingrese un numero para verificar si es primo:";
    cin >> n;
    cout << "El numero " << n << (esPrimo(n) ? ": No es primo" : ": Es primo") <<endl;



    return 0;
}