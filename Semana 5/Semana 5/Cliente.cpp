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

Cliente::~Cliente() {
	cout << "Destruyendo cliente " << nombre << " (las cuentas NO se destruyen aqui)" << endl;
	// Ojo: no hay delete para cada Cuenta*. Esa memoria la maneja
	// quien la creo (el main, en este ejemplo). Es agregacion.
}

string Cliente::getCedula() { return cedula; }
string Cliente::getNombre() { return nombre; }
string Cliente::getEmail() { return email; }

void Cliente::setCedula(string ced) { cedula = ced; }
void Cliente::setNombre(string nom) { nombre = nom; }
void Cliente::setEmail(string mail) { email = mail; }

void Cliente::agregarCuenta(Cuenta* c) {
	cuentas.push_back(c); // solo guarda el puntero, no crea la Cuenta
}

string Cliente::toString() {
	stringstream s;
	s << "Cliente: " << nombre << " | Cedula: " << cedula
		<< " | Email: " << email << endl;
	s << "Cantidad de cuentas: " << cuentas.size() << endl;
	return s.str();
}