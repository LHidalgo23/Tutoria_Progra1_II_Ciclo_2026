#pragma once
#include "ContenedorForma4Cliente.h"
#include "ContenedorForma4Cuenta.h"
#include "Transaccion.h"
class Generador{
private:

	ContenedorForma4Cuenta* cuentas;
	ContenedorForma4Cliente* clientes;
	Transaccion* transaccion;

public:

	//Metodos principales para arrancar la clase
	Generador();
	virtual ~Generador();

	//Gestion de clientes

	bool agregarCliente(Cliente* c);

	string listarClientes();

	//Gestion de cuentas

	string listarCuentas();

	//Gestion de transacciones

	bool depositar(int idCuenta,double monto);

	bool retirar(int idCuenta, double monto);

};

