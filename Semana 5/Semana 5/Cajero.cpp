#include "Cajero.h"
#include <iostream>
using namespace std;

void Cajero::retirar(Cuenta& c, double monto) {
	cout << "El cajero procesa un retiro..." << endl;
	c.retirar(monto);
}

void Cajero::depositar(Cuenta& c, double monto) {
	cout << "El cajero procesa un deposito..." << endl;
	c.depositar(monto);
}