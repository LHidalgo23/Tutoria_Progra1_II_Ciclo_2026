#pragma once
#include "Interfaz.h"
#include "Generador.h"

class Controladora{
private:
	Generador* generador;

public:

	Controladora();

	virtual~Controladora();

	//Control de menu principal

	void menuPrincipal();


	//Opciones del menu

	void opcionVerClientes();

	void opcionVerCuentas();

	void opcionCrearCliente();
	
	void opcionGenerarTransaccion();



};

