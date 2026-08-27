#include "Cuenta.h"

Cuenta::Cuenta() {
	numeroCuenta = "";
	saldo = 0.0;
	tipoCuenta = "";
}

Cuenta::Cuenta(string numero, double sal, string tipo) {
	numeroCuenta = numero;
	saldo = sal;
	tipoCuenta = tipo;
}

Cuenta::~Cuenta() {
	cout << "Destruyendo cuenta " << numeroCuenta << ", liberando sus movimientos..." << endl;
	for (Movimiento* m : movimientos) {
		delete m; // la Cuenta libera lo que ella misma reservo con new
	}
	movimientos.clear();
}

string Cuenta::getNumeroCuenta() { return numeroCuenta; }
double Cuenta::getSaldo() { return saldo; }
string Cuenta::getTipoCuenta() { return tipoCuenta; }

void Cuenta::setNumeroCuenta(string numero) { numeroCuenta = numero; }
void Cuenta::setSaldo(double sal) { saldo = sal; }
void Cuenta::setTipoCuenta(string tipo) { tipoCuenta = tipo; }

void Cuenta::depositar(double monto) {
	saldo += monto;
	movimientos.push_back(new Movimiento("deposito", monto)); // la Cuenta crea el Movimiento
}

void Cuenta::retirar(double monto) {
	saldo -= monto;
	movimientos.push_back(new Movimiento("retiro", monto));
}

string Cuenta::toString() {
	stringstream s;
	s << fixed << setprecision(2) << "Cuenta " << numeroCuenta << " (" << tipoCuenta
		<< ") - Saldo: " << saldo << endl;
	s << "Movimientos:" << endl;
	for (Movimiento* m : movimientos) {
		s << m->toString() << endl;
	}
	return s.str();
}