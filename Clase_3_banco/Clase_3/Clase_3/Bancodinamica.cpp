#include "BancoDinamica.h"

BancoDinamica::BancoDinamica() {
	nombreBanco = "";
	cliente = nullptr;
	cuenta = nullptr;
}

BancoDinamica::BancoDinamica(string nombre, Cliente* cli, Cuenta* cta) {
	nombreBanco = nombre;
	cliente = cli;   // se guarda la DIRECCION, no una copia
	cuenta = cta;    // se guarda la DIRECCION, no una copia
}

string BancoDinamica::getNombreBanco() { return nombreBanco; }
Cliente* BancoDinamica::getCliente() { return cliente; }
Cuenta* BancoDinamica::getCuenta() { return cuenta; }

void BancoDinamica::setNombreBanco(string nombre) { nombreBanco = nombre; }
void BancoDinamica::setCliente(Cliente* cli) { cliente = cli; }
void BancoDinamica::setCuenta(Cuenta* cta) { cuenta = cta; }

string BancoDinamica::toString() {
	stringstream s;
	s << "[" << nombreBanco << " - DINAMICA]" << endl;
	s << cliente->toString()<<endl;
	s << cuenta->toString() << endl;
	return s.str();
}