#pragma once

#include <iostream>
using namespace std;

// ============================================================
// Movimiento SOLO existe dentro de una Cuenta.
// No tiene sentido crear un Movimiento suelto en el main.
// Por eso Cuenta lo compone (lo crea y lo destruye ella misma).
// ============================================================

class Movimiento {
private:
	string tipo;      // "deposito" o "retiro"
	double transaccion;

public:
	Movimiento();
	Movimiento(string tipo, double transaccion);
	~Movimiento();

	string getTipo();
	double getTransaccion();

	string toString();
};