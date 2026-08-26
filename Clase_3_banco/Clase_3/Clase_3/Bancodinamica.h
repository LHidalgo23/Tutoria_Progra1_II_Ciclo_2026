#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

// ============================================================================
// BANCODINAMICA
//
// Guarda el Cliente y la Cuenta POR PUNTERO. No se hace ninguna copia:
// cliente y cuenta guardan la DIRECCION del Cliente/Cuenta que le pasaron.
// Si despues cambian el original (o lo que apunta el puntero), el banco
// SI se entera.
//
// NOTA: este BancoDinamica NO es el dueno de esa memoria. Quien la creo
// con new (el main) es quien debe liberarla con delete. Por eso este
// destructor NO hace delete de cliente ni de cuenta.
// ============================================================================

class BancoDinamica {

private:
	string nombreBanco;
	Cliente* cliente;
	Cuenta* cuenta;

public:
	BancoDinamica();
	BancoDinamica(string nombre, Cliente* cli, Cuenta* cta);

	string getNombreBanco();
	Cliente* getCliente();
	Cuenta* getCuenta();

	void setNombreBanco(string nombre);
	void setCliente(Cliente* cli);
	void setCuenta(Cuenta* cta);

	string toString();
};