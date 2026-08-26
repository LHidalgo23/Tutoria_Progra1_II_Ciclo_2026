#include <iostream>
#include "Cliente.h"
#include "Cuenta.h"
#include "BancoEstatico.h"
#include "BancoReferencia.h"
#include "BancoDinamica.h"
using namespace std;

int main() {

	// Referencia es un alias.

	int* num = new int(100);
	

	cout << num << endl;
	cout << &num << endl;
	cout << *num << endl;
	delete num;

	cout << "========================================" << endl;
	cout << " 1) BANCOESTATICA (Cliente y Cuenta por VALOR)" << endl;
	//Los objetos son llenados en tiempo de compilacion cuando los asignamos antes.
	//Los objetos son llenados de tiempo de ejecucion cuando los pedimos en el programa
	cout << "========================================" << endl << endl;

	Cliente cli1("101110111", "Ana", "ana@correo.com");
	Cuenta cta1("1001-1111", 1000.0, "ahorro");

	BancoEstatico bancoA("Banco Nacional", cli1, cta1);

	cout << "--- Justo despues de crear el banco ---" << endl;
	bancoA.toString();
	cout << endl;

	cout << "--- Ahora cambio cli1 y cta1 (los originales) ---" << endl;
	cli1.setNombre("Ana Cambiada");
	cta1.setSaldo(9999.0);

	cout << "--- Vuelvo a mostrar el banco ---" << endl;
	bancoA.toString();
	cout << "NOTA: el banco NO cambio, porque guardo una COPIA." << endl << endl;


	cout << "========================================" << endl;
	cout << " 2) BANCOREFERENCIA (Cliente y Cuenta por REFERENCIA)" << endl;
	cout << "========================================" << endl << endl;

	Cliente cli2("202220222", "Luis", "luis@correo.com");
	Cuenta cta2("2002-2222", 2000.0, "corriente");

	BancoReferencia bancoB("Banco Popular", cli2, cta2);

	cout << "--- Justo despues de crear el banco ---" << endl;
	bancoB.toString();
	cout << endl;

	cout << "--- Ahora cambio cli2 y cta2 (los originales) ---" << endl;
	cli2.setNombre("Luis Cambiado");
	cta2.setSaldo(8888.0);

	cout << "--- Vuelvo a mostrar el banco ---" << endl;
	bancoB.toString();
	cout << "NOTA: el banco SI cambio, porque es el MISMO objeto (referencia)." << endl << endl;


	cout << "========================================" << endl;
	cout << " 3) BANCODINAMICA (Cliente y Cuenta por PUNTERO)" << endl;
	cout << "========================================" << endl << endl;

	Cliente* cli3 = new Cliente("303330333", "Marta", "marta@correo.com");
	Cuenta* cta3 = new Cuenta("3003-3333", 3000.0, "ahorro");

	BancoDinamica* bancoC = new BancoDinamica("Banco Dinamico", cli3, cta3);

	cout << "--- Justo despues de crear el banco ---" << endl;
	bancoC->toString();
	cout << endl;

	cout << "--- Ahora cambio cli3 y cta3 (los originales) ---" << endl;
	cli3->setNombre("Marta Cambiada");
	cta3->setSaldo(7777.0);

	cout << "--- Vuelvo a mostrar el banco ---" << endl;
	bancoC->toString();
	cout << "NOTA: el banco SI cambio, porque guarda la DIRECCION (puntero)." << endl << endl;

	// Todo lo que se creo con new se debe liberar con delete.
	delete bancoC;
	delete cta3;
	delete cli3;
	cout << "Memoria de bancoC, cta3 y cli3 liberada con delete." << endl;

	return 0;
}