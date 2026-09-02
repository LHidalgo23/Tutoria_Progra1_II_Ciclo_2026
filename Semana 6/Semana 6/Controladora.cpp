#include "Controladora.h"

Controladora::Controladora(){
	this->generador = new Generador();
}

Controladora::~Controladora(){
	delete this->generador;
}

//Control de menu principal

void Controladora::menuPrincipal(){
	int opcion;

	do {

		opcion = Interfaz::menuPrincipal();

		switch (opcion) {
		case 1: opcionVerClientes();break;
		case 2: opcionVerCuentas();break;
		case 3: opcionCrearCliente();break;
		case 4: opcionGenerarTransaccion();break;
		case 5: Interfaz::mostrarMensaje("Nos vemos la proxima semana"); break;

		}

	} while (opcion != 5);


}

//Opciones del menu

void Controladora::opcionVerClientes(){
	Interfaz::mostrarMensaje(generador->listarClientes());
}

void Controladora::opcionVerCuentas(){
	Interfaz::mostrarMensaje(generador->listarCuentas());
}

void Controladora::opcionCrearCliente(){

	Cliente* c = Interfaz::crearCliente();

	if (generador->agregarCliente(c))
		Interfaz::mostrarMensaje("El cliente se agrego con exito");
	else {
		Interfaz::mostrarError("No se pudo crear el cliente");
		delete c;
	}
}

void Controladora::opcionGenerarTransaccion() {
	Interfaz::mostrarMensaje(generador->listarCuentas());  // se muestran las cuentas antes de pedir datos

	int tipo = Interfaz::menuTransaccion();
	int idCuenta = Interfaz::leerEntero("Ingrese el id de la cuenta: ");
	double monto = Interfaz::leerDouble("Ingrese el monto: ");

	bool exito;
	if (tipo == 1)
		exito = generador->depositar(idCuenta, monto);
	else
		exito = generador->retirar(idCuenta, monto);

	if (exito)
		Interfaz::mostrarMensaje("Transaccion realizada con exito.");
	else
		Interfaz::mostrarError("No se pudo realizar la transaccion (cuenta inexistente o saldo insuficiente).");
}

