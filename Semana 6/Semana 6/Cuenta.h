#pragma once
#include <string>
#include <sstream>
using namespace std;

class Cuenta {
private:
	int id;
	string tipo;   // "credito" o "debito"
	double saldo;

public:
	//--------------------------------------------------------------------------------------------------
	// constructor y destructor
	Cuenta(int id, string tipo, double saldo);

	virtual ~Cuenta();

	//--------------------------------------------------------------------------------------------------
	// accesores (getters)
	int getId();

	string getTipo();

	double getSaldo();

	//--------------------------------------------------------------------------------------------------
	// mutadores (setters)
	void setId(int id);

	void setTipo(string tipo);

	void setSaldo(double saldo);

	//--------------------------------------------------------------------------------------------------
	// otros metodos
	string toString();
};