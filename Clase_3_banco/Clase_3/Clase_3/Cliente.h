#pragma once

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Cliente {

private:
	string cedula;
	string nombre;
	string email;

public:
	Cliente();
	Cliente(string ced, string nom, string mail);

	string getCedula();
	string getNombre();
	string getEmail();

	void setCedula(string ced);
	void setNombre(string nom);
	void setEmail(string mail);

	string toString();
};