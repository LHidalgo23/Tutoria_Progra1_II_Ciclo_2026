#pragma once
#include <iostream>
#include <string>
#include "Cliente.h"

using namespace std;

//Clase de servicio para que el cliente pueda interactuar con el sistema, llamando metodos de la controladora.


class Interfaz{

public:

	//Menus

	static int menuPrincipal();

	static int menuTransaccion();

	//Entrada de datos para validar los datos

	static int leerEntero(string mensaje);

	static int leerEntero(string mensaje, int min, int max);

	static double leerDouble(string mensaje);

	static string leerString(string mensaje);

	//Creacion de objetos

	static Cliente* crearCliente();

	//Salida de mensajes

	static void mostrarMensaje(string mensaje);

	static void mostrarError(string mensaje);

	








};

