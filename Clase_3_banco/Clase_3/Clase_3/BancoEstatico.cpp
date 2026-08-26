#include "BancoEstatico.h"

BancoEstatico::BancoEstatico() {
	nombreBanco = "";
}

BancoEstatico::BancoEstatico(string nombre, Cliente cli, Cuenta cta) {
	nombreBanco = nombre;
	cliente = cli;   // se COPIA el cliente que llega
	cuenta = cta;    // se COPIA la cuenta que llega
}

string BancoEstatico::getNombreBanco() { return nombreBanco; }
Cliente BancoEstatico::getCliente() { return cliente; }
Cuenta BancoEstatico::getCuenta() { return cuenta; }

void BancoEstatico::setNombreBanco(string nombre) { nombreBanco = nombre; }
void BancoEstatico::setCliente(Cliente cli) { cliente = cli; }
void BancoEstatico::setCuenta(Cuenta cta) { cuenta = cta; }

string BancoEstatico::toString() {
	stringstream s;
	s << "[" << nombreBanco << " - ESTATICA]" << endl;
	s << cliente.toString() << endl;
	s << cuenta.toString() << endl;
	return s.str();
	
}