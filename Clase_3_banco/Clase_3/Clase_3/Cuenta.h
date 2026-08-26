#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Cuenta {

private:
	string numeroCuenta;
	double saldo;
	string tipoCuenta;

public:
	Cuenta();
	Cuenta(string numero, double sal, string tipo);

	string getNumeroCuenta();
	double getSaldo();
	string getTipoCuenta();

	void setNumeroCuenta(string numero);
	void setSaldo(double sal);
	void setTipoCuenta(string tipo);

	string toString();
};