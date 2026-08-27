#include "Movimiento.h"
#include <sstream>

Movimiento::Movimiento() {
	tipo = "sin tipo";
	transaccion = 0.0;
}

Movimiento::Movimiento(string tipo, double transaccion) {
	this->tipo = tipo;
	this->transaccion = transaccion;
}

Movimiento::~Movimiento() {
	// se imprime para que en clase vean CUANDO muere cada movimiento
	cout << "  (destruyendo movimiento: " << tipo << " " << transaccion << ")" << endl;
}

string Movimiento::getTipo() { return tipo; }
double Movimiento::getTransaccion() { return transaccion; }

string Movimiento::toString() {
	stringstream ss;
	ss << "  [" << tipo << "] monto: " << transaccion;
	return ss.str();
}