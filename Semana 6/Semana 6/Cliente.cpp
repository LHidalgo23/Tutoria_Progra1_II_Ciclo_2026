#include "Cliente.h"

//--------------------------------------------------------------------------------------------------
// constructor y destructor
Cliente::Cliente(string nombre, string cedula, int edad) {
	this->nombre = nombre;
	this->cedula = cedula;
	this->edad = edad;
}

Cliente::~Cliente() {}

//--------------------------------------------------------------------------------------------------
// accesores (getters)
string Cliente::getNombre() {
	return nombre;
}

string Cliente::getCedula() {
	return cedula;
}

int Cliente::getEdad() {
	return edad;
}

//--------------------------------------------------------------------------------------------------
// mutadores (setters)
void Cliente::setNombre(string nombre) {
	this->nombre = nombre;
}

void Cliente::setCedula(string cedula) {
	this->cedula = cedula;
}

void Cliente::setEdad(int edad) {
	this->edad = edad;
}

//--------------------------------------------------------------------------------------------------
// otros metodos
string Cliente::toString() {
	stringstream ss;
	ss << "Cliente [cedula: " << cedula << ", nombre: " << nombre << ", edad: " << edad << "]";
	return ss.str();
}