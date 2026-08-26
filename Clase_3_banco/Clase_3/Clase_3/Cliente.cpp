#include "Cliente.h"

Cliente::Cliente() {
	cedula = "";
	nombre = "";
	email = "";
}

Cliente::Cliente(string ced, string nom, string mail) {
	cedula = ced;
	nombre = nom;
	email = mail;
}

string Cliente::getCedula() { return cedula; }
string Cliente::getNombre() { return nombre; }
string Cliente::getEmail() { return email; }

void Cliente::setCedula(string ced) { cedula = ced; }
void Cliente::setNombre(string nom) { nombre = nom; }
void Cliente::setEmail(string mail) { email = mail; }

string Cliente::toString() {
	stringstream s;
	s<< "Cliente: " << nombre << " | Cedula: " << cedula
		<< " | Email: " << email << endl;
	return s.str();
	
}