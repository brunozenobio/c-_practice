#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int c = *a;   
    *a = *b;
    *b = c;
}

int main(){
    int a = 5,b=9;
    cout << "Valor de a: " << a << endl;
    cout << "Direccion a: " << &a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Direccion b: " << &b << endl;
    intercambiar(&a, &b);
    cout << "Valor de a despues de intercambiar: "<<endl;
    cout << "Valor de a: " << a << endl;
    cout << "Direccion a: " << &a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Direccion b: " << &b << endl;
    return 0;
}