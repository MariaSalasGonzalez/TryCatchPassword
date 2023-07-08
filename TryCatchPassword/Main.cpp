#include "Password.h"
using namespace std;

int main() {
	//-------------------------------------------------------
	//EJERCICIO #1
	/*int *x;
	try {
		x = new int[10000000];
		x[0] = 10;
	}
	catch (bad_alloc&){
		cout << "Memoria insuficiente" << endl;
	}*/

	//-------------------------------------------------------
	//EJERCICIO #2
	/*int operando2 = 0;
	try {
		if (operando2 == 0)throw 'x';
	}
	catch(char c){ 
		cout << "Estamos en el primer catch" << endl;
		cout << "El valor de c es:" << c << endl;
    }
	catch (...) {
		cout << "Exepcion imprevista" << endl;
	}*/

	//-------------------------------------------------------
	//EJERCICIO #3
	//int operando2 = 0;
	//try {
	//	if (operando2 == 0)throw 14;
	//}
	//catch (char c) {
	//	cout << "Estamos en el primer catch" << endl;
	//	cout << "El valor de c es:" << c << endl;
	//}
	//catch (...) { //la opcion default
	//	cout << "Excepcion inesperada" << endl;
	//	cout << "El sistema se va a cerrar" << endl;
	//	//reboot de toda la aplicacion
	//}

	//-------------------------------------------------------
	//EJERCICIO #4
	/*int y = 100;
	try {
		if (y < 0) throw 1;
		if (y >= 100) throw 2;
	}
	catch (int error) {
		cout << "Error!!" << endl;
		if (error == 1) {
			cout << "captura ID erronea" << endl;
			limpiezaCapturaId();
			limpiezaPantalla();
			capturaId();
		}
		if (error == 2) cout << "Y es mayor o igual a 100" << endl;
	}*/

	//-------------------------------------------------------
	//EJERCICIO #5
	//EVITAR QUE BOTEN LA APLICACION
	//int valor = 0;
	//bool exito = true;
	//cout << "dele el valor" << endl;
	//cin >> valor;
	//while (cin.fail()) { //false sila captura fue exitosa
	//	//me devuelve verdadero si hubo algun error
	//	cin.clear();
	//	cin.ignore(1000,'\n');
	//	cout << "dele el valor" << endl;
	//	cin >> valor;
	//}
	//cout << "valor: " << valor << endl;
		
	
	//-------------------------------------------------------
	//EJERCICIO #6
	string capturar;
	cout << "Debe seleccionar su password entre 5 y 10 caracteres" << endl;
	cout << "Debe contener una combinacion de letras, numeros y un caracter" << endl;
	cin >> capturar;
	Password miPassword(capturar);
	try {
		miPassword.verifica();
	} catch (int excepcion) {
		switch (excepcion) {
		case 1:
		    cout << "El password no tiene letras" << endl;
			break;
		case 2:
			cout << "El password no tiene numeros" << endl;
			break;
		case 3:
			 cout << "El password no tiene caracteres especiales" << endl;
			break;
		case 4:
			 cout << "El password debe tener una longitud entre 5 y 10 caracteres" << endl;
			break;
		case 5:
			 cout << "El password no tiene mayusculas" << endl;
			break;
		default:
			cout << "Unhanded Exception!" << endl;
		}
		/*if (excepcion == 1) cout << "El password no tiene letras" << endl;
		if (excepcion == 2) cout << "El password no tiene numeros" << endl;
		if (excepcion == 3) cout << "El password no tiene caracteres especiales" << endl;
		if (excepcion == 4) cout << "El password debe tener una longitud entre 5 y 10 caracteres" << endl;
		if (excepcion == 5) cout << "El password no tiene mayusculas" << endl;*/	
	}
}
	