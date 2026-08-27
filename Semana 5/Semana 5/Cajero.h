#pragma once

#include "Cuenta.h"

// ============================================================
// DEPENDENCIA: Cajero usa una Cuenta solo como parametro.
// No tiene ningun atributo Cuenta, no la guarda para despues.
// ============================================================

class Cajero
{
public:
	// La Cuenta llega, se usa, y se olvida al salir del metodo
	void retirar(Cuenta& c, double monto);
	void depositar(Cuenta& c, double monto);
};