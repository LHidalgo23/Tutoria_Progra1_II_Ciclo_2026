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

string Cuenta::getNumeroCuenta() { return numeroCuenta; }
double Cuenta::getSaldo() { return saldo; }
string Cuenta::getTipoCuenta() { return tipoCuenta; }

void Cuenta::setNumeroCuenta(string numero) { numeroCuenta = numero; }
void Cuenta::setSaldo(double sal) { saldo = sal; }
void Cuenta::setTipoCuenta(string tipo) { tipoCuenta = tipo; }

string Cuenta::toString() {
	stringstream s;
	s << fixed << setprecision(2)<< "Cuenta " << numeroCuenta << " (" << tipoCuenta
		<< ") - Saldo: " << saldo << endl;
	return s.str();
	
}