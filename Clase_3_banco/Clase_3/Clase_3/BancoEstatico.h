#pragma once

#include <iostream>
#include <string>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

// ============================================================================
// BANCOESTATICA
//
// Guarda el Cliente y la Cuenta POR VALOR (copia completa). Cuando se crea
// un BancoEstatica, se hace una copia independiente del cliente y la cuenta
// que le pasaron. Si despues cambian el original, el banco NO se entera.
// ============================================================================

class BancoEstatico {

private:
	string nombreBanco;
	Cliente cliente;
	Cuenta cuenta;

public:
	BancoEstatico();
	BancoEstatico(string nombre, Cliente cli, Cuenta cta);

	string getNombreBanco();
	Cliente getCliente();
	Cuenta getCuenta();

	void setNombreBanco(string nombre);
	void setCliente(Cliente cli);
	void setCuenta(Cuenta cta);

	string toString();
};