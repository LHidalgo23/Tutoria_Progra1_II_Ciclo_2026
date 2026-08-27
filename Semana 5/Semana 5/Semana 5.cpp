#include <iostream>
#include "Persona.h"
#include "Carro.h"
#include "Cliente.h"
#include "Cuenta.h"
#include "Cajero.h"
using namespace std;

int main() {

	cout << "========================================" << endl;
	cout << " ASOCIACION: Persona -- Carro" << endl;
	cout << "========================================" << endl;
	Carro* miCarro = new Carro(2020, 8000000, "Toyota", 456);
	Persona* persona1 = new Persona("Luis", 23, "Cartago");
	persona1->asignarCarro(miCarro); // solo se apunta, no se copia ni se crea de nuevo
	cout << persona1->toString() << endl;

	delete persona1; // se destruye la persona...
	cout << "El carro sigue vivo: " << miCarro->toString() << endl; // ...pero el carro sigue aqui
	delete miCarro;  // el carro se libera aparte, por su cuenta
	cout << endl;


	cout << "========================================" << endl;
	cout << " AGREGACION: Cliente o-- Cuenta" << endl;
	cout << "========================================" << endl;
	Cuenta* cuentaAhorros = new Cuenta("1001-2345-6789", 5000.0, "ahorro");
	Cuenta* cuentaCorriente = new Cuenta("1001-9999-0001", 12000.0, "corriente");

	Cliente* cliente1 = new Cliente("123456789", "Juan Perez", "juan@email.com");
	cliente1->agregarCuenta(cuentaAhorros);
	cliente1->agregarCuenta(cuentaCorriente);
	cout << cliente1->toString() << endl;

	delete cliente1; // se destruye el cliente...
	cout << "Las cuentas siguen vivas:" << endl;
	cout << cuentaAhorros->toString() << endl; // ...pero las cuentas siguen aqui
	cout << endl;


	cout << "========================================" << endl;
	cout << " COMPOSICION: Cuenta *-- Movimiento" << endl;
	cout << "========================================" << endl;
	cuentaCorriente->depositar(1000.0); // Cuenta crea el Movimiento con new
	cuentaCorriente->retirar(200.0);
	cout << cuentaCorriente->toString() << endl;


	cout << "========================================" << endl;
	cout << " DEPENDENCIA: Cajero ..> Cuenta" << endl;
	cout << "========================================" << endl;
	Cajero* cajero1 = new Cajero(); // no guarda ninguna Cuenta como atributo
	cajero1->retirar(*cuentaAhorros, 500.0);
	cajero1->depositar(*cuentaAhorros, 300.0);
	cout << cuentaAhorros->toString() << endl;
	delete cajero1;

	cout << "========================================" << endl;
	cout << " Limpieza final" << endl;
	cout << "========================================" << endl;
	// cuentaAhorros y cuentaCorriente las creamos con new en el main,
	// asi que a nosotros nos toca borrarlas. Al hacerlo, cada Cuenta
	// borra en cadena sus propios Movimientos (composicion).
	delete cuentaAhorros;
	delete cuentaCorriente;

	return 0;
}