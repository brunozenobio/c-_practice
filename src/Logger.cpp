#include "./logs/Logger.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
	Logger log;
	int i;
	cout << "Ingrese un numero entero positivo: ";
	cin >> i;
	if (i > 0){
		log.info("Excelente el numero ingresado fue positivo");
		}
	else{
		log.error("Error el numero ingresado no es positivo");
		}
	
	
	};
