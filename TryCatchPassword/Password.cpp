#include "Password.h"

void Password::verifica() {
	string password = getClave();
	bool letra = false, numero = false, caracter = false, mayuscula = false;
	long longitud = password.size();
	string a = "";

	for (int i = 0; i < longitud; i++) {
		a = password.substr(i, 1);
		if (a == "a" || a == "b" || a == "c" || a == "d" || a == "e" || a == "f"||
			a == "g" || a == "h" || a == "i" || a == "j" || a == "k" || a == "l"||
			a == "m" || a == "n" || a == "o" || a == "p" || a == "q" || a == "r"|| 
			a == "s" || a == "t" || a == "u" || a == "v" || a == "w" || a == "x"||
			a == "y" || a == "z") {
			letra = true;
		}
		if (a == "A" || a == "B" || a == "C" || a == "D" || a == "E" || a == "F" || a == "G" || a == "H" || a == "I" ||
			a == "J" || a == "K" || a == "L" || a == "M" || a == "N" || a == "O" || a == "P" || a == "Q" || a == "R" ||
			a == "S" || a == "T" || a == "U" || a == "V" || a == "W" || a == "X" || a == "X" ||
			a == "Y" || a == "Z") {
			mayuscula = true;
		}
		if (a == "1" || a == "2" || a == "3" || a == "4" || a == "5" ||
			a == "6" || a == "7" || a == "8" || a == "9" || a == "0") {
			numero = true;
		}
		if (a == "!" || a == "@" || a == "#" || a == "$" || a == "%" ||
			a == "&" || a == "*" || a == "~") {
			caracter = true;
		}
	}
	if (letra == false) throw 1;
	if (numero == false) throw 2;
	if (caracter == false) throw 3;
	if (longitud < 5 || longitud > 10) throw 4;
	if (mayuscula == false) throw 5;
}

Password::Password(const string &clave) : clave(clave) {}

void Password::setClave(const string &clave) {
	Password::clave = clave;
}

const string &Password::getClave() const{
	return clave;
}