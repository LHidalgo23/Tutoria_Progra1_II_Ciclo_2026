#include "Interfaz.h"

//--------------------------------------------------
//Menus

int Interfaz::menuPrincipal() {
	cout << "\n===== MENU PRINCIPAL =====" << endl;
	cout << "1. Ver clientes" << endl;
	cout << "2. Ver cuentas" << endl;
	cout << "3. Crear cliente" << endl;
	cout << "4. Generar transaccion" << endl;
	cout << "5. Salir" << endl;
	return leerEntero("Seleccione una opcion: ", 1, 5);
}

int Interfaz::menuTransaccion() {
	cout << "\n----- Tipo de transaccion -----" << endl;
	cout << "1. Depositar" << endl;
	cout << "2. Retirar" << endl;
	return leerEntero("Seleccione una opcion: ", 1, 2);
}

//Creacion de objetos

Cliente* Interfaz::crearCliente() {
	cout << "\n----- Crear cliente -----" << endl;
	string nombre = leerString("Digite el nombre: ");
	string cedula = leerString("Digite la Cedula: ");
	int edad = leerEntero("Digite su Edad: ");
	return new Cliente(nombre, cedula, edad);
}


//--------------------------------------------------------------------------------------------------
// entrada de datos para validar que la informacion este correcta

int Interfaz::leerEntero(string mensaje) {
	int valor;
	cout << mensaje;
	cin >> valor;
	cin.ignore(1000, '\n');  // limpia el salto de linea que queda pendiente en el buffer
	return valor;
}


int Interfaz::leerEntero(string mensaje, int min, int max) {
	int valor;
	do {
		valor = leerEntero(mensaje);
		if (valor < min || valor > max)
			mostrarError("Debe ingresar un valor entre " + to_string(min) + " y " + to_string(max));
	} while (valor < min || valor > max);
	return valor;
}

double Interfaz::leerDouble(string mensaje) {
	double valor;
	cout << mensaje;
	cin >> valor;
	cin.ignore(1000, '\n');  // limpia el salto de linea que queda pendiente en el buffer
	return valor;
}

string Interfaz::leerString(string mensaje) {
	string valor;
	cout << mensaje;
	getline(cin, valor);
	return valor;
}


//Salida de mensajes

void Interfaz::mostrarMensaje(string mensaje) {
	cout << "\n[INFO]\n" << mensaje << endl;
	system("pause");
}

void Interfaz::mostrarError(string mensaje) {
	cout << "\n[ERROR] " << mensaje << endl;
}