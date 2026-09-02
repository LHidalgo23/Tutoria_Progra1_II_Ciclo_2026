#include "Transaccion.h"

//--------------------------------------------------------------------------------------------------
// constructor y destructor
Transaccion::Transaccion(ContenedorForma4Cuenta* cuentas) {
	this->cuentas = cuentas;
	this->dinero = 0;
}

Transaccion::~Transaccion() {
	// No se borra "cuentas": el contenedor de cuentas no fue creado por esta clase,
	// solo se esta usando para buscar la cuenta indicada.
}

//--------------------------------------------------------------------------------------------------
// accesores (getters)
double Transaccion::getDinero() {
	return dinero;
}

//--------------------------------------------------------------------------------------------------
// mutadores (setters)
void Transaccion::setDinero(double dinero) {
	this->dinero = dinero;
}

//--------------------------------------------------------------------------------------------------
// metodos de la transaccion
bool Transaccion::depositar(int idCuenta, double monto) {
	Cuenta* c = cuentas->buscarPorId(idCuenta);
	if (c == NULL)
		return false;  // No existe una cuenta con ese id.

	c->setSaldo(c->getSaldo() + monto);
	this->setDinero(monto);
	return true;
}

bool Transaccion::retirar(int idCuenta, double monto) {
	Cuenta* c = cuentas->buscarPorId(idCuenta);
	if (c == NULL)
		return false;  // No existe una cuenta con ese id.

	if (c->getSaldo() < monto)
		return false;  // No hay saldo suficiente para retirar ese monto.

	c->setSaldo(c->getSaldo() - monto);
	this->setDinero(monto);
	return true;
}