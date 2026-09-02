#include "Cuenta.h"

//--------------------------------------------------------------------------------------------------
// constructor y destructor
Cuenta::Cuenta(int id, string tipo, double saldo) {
	this->id = id;
	this->tipo = tipo;
	this->saldo = saldo;
}

Cuenta::~Cuenta() {}

//--------------------------------------------------------------------------------------------------
// accesores (getters)
int Cuenta::getId() {
	return id;
}

string Cuenta::getTipo() {
	return tipo;
}

double Cuenta::getSaldo() {
	return saldo;
}

//--------------------------------------------------------------------------------------------------
// mutadores (setters)
void Cuenta::setId(int id) {
	this->id = id;
}

void Cuenta::setTipo(string tipo) {
	this->tipo = tipo;
}

void Cuenta::setSaldo(double saldo) {
	this->saldo = saldo;
}

//--------------------------------------------------------------------------------------------------
// otros metodos
string Cuenta::toString() {
	stringstream ss;
	ss << "Cuenta [id: " << id << ", tipo: " << tipo << ", saldo: " << saldo << "]";
	return ss.str();
}