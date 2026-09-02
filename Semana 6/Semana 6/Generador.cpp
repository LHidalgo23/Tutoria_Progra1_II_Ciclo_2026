#include "Generador.h"

//Metodos principales para arrancar la clase
Generador::Generador(){
	clientes = new ContenedorForma4Cliente(20);
	cuentas = new ContenedorForma4Cuenta(20);
	transaccion = new Transaccion(cuentas);

	//Datos quemados
	clientes->ingresarCliente(new Cliente("Ana Rojas", "1-1111-1111", 28));
	clientes->ingresarCliente(new Cliente("Luis Mora", "2-2222-2222", 35));

	cuentas->ingresarCuenta(new Cuenta(1, "debito", 50000));
	cuentas->ingresarCuenta(new Cuenta(2, "credito", 100000));
}

Generador:: ~Generador(){
	delete clientes;
	delete cuentas;
	delete transaccion;
}

//Gestion de clientes

bool Generador::agregarCliente(Cliente* c){
	return clientes->ingresarCliente(c);
}

string Generador::listarClientes(){
	return clientes->toString();
}

//Gestion de cuentas

string Generador::listarCuentas(){
	return cuentas->toString();
}


//Gestion de transacciones

bool Generador::depositar(int idCuenta, double monto){
	return transaccion->depositar(idCuenta, monto);
}

bool Generador::retirar(int idCuenta, double monto){
	return transaccion->retirar(idCuenta, monto);
}
