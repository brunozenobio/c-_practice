#include <iostream>
using namespace std;

class Rectangle {
    private:
    double largo,ancho;

    public:
    Rectangle(double l, double a) : largo(l), ancho(a) {}

    void set_largo(double l) { largo = l; }
    void set_ancho(double a) { ancho = a; }
    double get_largo() { return largo; }
    double get_ancho() { return ancho; }
    double get_area() { return largo * ancho; }
    double get_perimetro() { return 2 * (largo + ancho); }

};

int main(){



    
}
