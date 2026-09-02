#pragma once
#include "ContenedorForma4Cuenta.h"

class Transaccion {
private:
	double dinero;                    // monto de la ultima transaccion realizada
	ContenedorForma4Cuenta* cuentas;  // NO es dueno de este contenedor, solo lo consulta

public:
	//--------------------------------------------------------------------------------------------------
	// constructor y destructor
	Transaccion(ContenedorForma4Cuenta* cuentas);

	virtual ~Transaccion();  // OJO: no hace delete de "cuentas", ese contenedor le pertenece a otra parte del programa

	//--------------------------------------------------------------------------------------------------
	// accesores (getters)
	double getDinero();

	//--------------------------------------------------------------------------------------------------
	// mutadores (setters)
	void setDinero(double dinero);

	//--------------------------------------------------------------------------------------------------
	// metodos de la transaccion
	bool depositar(int idCuenta, double monto);

	bool retirar(int idCuenta, double monto);
};