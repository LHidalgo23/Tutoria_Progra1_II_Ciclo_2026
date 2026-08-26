#pragma once

#include <iostream>
#include <string>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

// ============================================================================
// BANCOREFERENCIA
//
// Guarda el Cliente y la Cuenta POR REFERENCIA. No se hace ninguna copia:
// cliente y cuenta son "otros nombres" para los mismos objetos originales.
// Si despues cambian el original, el banco SI se entera (es el mismo objeto).
//
// IMPORTANTE: una referencia se debe inicializar al crear el objeto (por eso
// no existe un constructor vacio) y despues no se puede "reapuntar" a otra
// cosa.
// ============================================================================

class BancoReferencia {

private:
	string nombreBanco;
	Cliente& cliente;
	Cuenta& cuenta;

public:
	BancoReferencia(string nombre, Cliente& cli, Cuenta& cta);

	string getNombreBanco();
	Cliente getCliente();
	Cuenta getCuenta();

	void setNombreBanco(string nombre);

	string toString();
};