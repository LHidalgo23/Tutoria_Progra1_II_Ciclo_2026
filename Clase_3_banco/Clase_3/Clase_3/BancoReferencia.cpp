#include "BancoReferencia.h"

// Las referencias se inicializan en la lista de inicializacion,
// ANTES de que empiece el cuerpo del constructor.
BancoReferencia::BancoReferencia(string nombre, Cliente& cli, Cuenta& cta): cliente(cli), cuenta(cta) {
	nombreBanco = nombre;
}

string BancoReferencia::getNombreBanco() { return nombreBanco; }
Cliente BancoReferencia::getCliente() { return cliente; }
Cuenta BancoReferencia::getCuenta() { return cuenta; }

void BancoReferencia::setNombreBanco(string nombre) { nombreBanco = nombre; }

string BancoReferencia::toString() {
	stringstream s;
	s << "[" << nombreBanco << " - REFERENCIA]" << "  "<<endl;
	s << cliente.toString() << "  " << endl;
	s <<  cuenta.toString();
	return s.str();
		
}
