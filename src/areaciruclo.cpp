#include <iostream>
using namespace std;

float area,radio;
const float PI = 3.14159;

int main(){
    
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    area = PI * (radio * radio);
    cout << "El area del circulo es: " << area << endl;
    
    return 0;
    
    }