#include "header_cubo.h"
#include <iostream>
using namespace std;

Cubo::Cubo(double largo,double ancho):largo(largo),ancho(ancho) {}
Cubo::~Cubo(){}
double Cubo::get_ancho() const {
		return ancho;
	}	
double Cubo::get_largo() const {
		return largo;
			}
	
void Cubo::set_ancho(double ancho){
	this->ancho=ancho;
	
	}
	
void Cubo::set_largo(double largo){
	this->largo=largo;
	}
	
Cubo micubo(6.1,9.1);

int main(){
	cout << "Largo: " << micubo.get_largo() << endl;
	cout << "Ancho: " << micubo.get_ancho() << endl;

	micubo.set_ancho(10.2);
	micubo.set_largo(9.999);
	cout << "Largo: " << micubo.get_largo() << endl;
	cout << "Ancho: " << micubo.get_ancho() << endl;
	return 0;
}
