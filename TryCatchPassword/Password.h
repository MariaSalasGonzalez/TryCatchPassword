#pragma once
#include <iostream>
#include <string>
using namespace std;

class Password{
private:
	string clave;
public:
	Password(const string &clave = "");
	const string &getClave()const;
	void setClave(const string &clave);
	void verifica();
};

