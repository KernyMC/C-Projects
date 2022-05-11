#include <iostream>
#include <stdlib.h>
#include "Fraccion.cpp"


using namespace std;


int main(int argc, char** argv) {

	cout << "Calculadora para suma de fracciones" << endl;
	system("PAUSE");

	int opc = 1;
	do {
		Fraccion<int> datos; //ingresamos a las funciones de otra clase
		datos.elegirTipoDeDato();
		system("PAUSE"); 
		system("cls");
		
		cout << "Ingresar otra suma?" << endl;  
			cout << "1. Si" << endl;
			cout << "2. No" << endl; 
		cin >> opc;
	} while (opc == 1);
	return 0;
}