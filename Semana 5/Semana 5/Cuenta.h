#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include "Movimiento.h"
using namespace std;

// ============================================================
// COMPOSICION: Cuenta crea y es dueña de sus Movimientos.
// El vector<Movimiento> vive y muere junto con la Cuenta.
// ============================================================

class Cuenta {

private:
	string numeroCuenta;
	double saldo;
	string tipoCuenta;

	vector<Movimiento*> movimientos; // <-- composicion: la Cuenta crea CADA Movimiento con new

public:
	Cuenta();
	Cuenta(string numero, double sal, string tipo);

	// Destructor: borra con delete todos los movimientos que ella misma creo.
	// Esta es la prueba de composicion: nadie mas puede liberar esta memoria.
	~Cuenta();

	string getNumeroCuenta();
	double getSaldo();
	string getTipoCuenta();

	void setNumeroCuenta(string numero);
	void setSaldo(double sal);
	void setTipoCuenta(string tipo);

	// La Cuenta es la unica que puede crear un Movimiento
	void depositar(double monto);
	void retirar(double monto);

	string toString();
};