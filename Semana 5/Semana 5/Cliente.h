#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Cuenta.h"
using namespace std;

// ============================================================
// AGREGACION: Cliente tiene Cuentas, pero no las crea el mismo:
// las recibe ya creadas y solo guarda punteros a ellas.
// Si el Cliente se destruye, las Cuentas siguen existiendo.
// ============================================================

class Cliente {

private:
	string cedula;
	string nombre;
	string email;

	vector<Cuenta*> cuentas; // <-- agregacion: punteros, el Cliente no es dueño

public:
	Cliente();
	Cliente(string ced, string nom, string mail);

	// Destructor: a proposito NO hace delete de las cuentas.
	// El Cliente nunca las creo con new, asi que no le corresponde borrarlas.
	~Cliente();

	string getCedula();
	string getNombre();
	string getEmail();

	void setCedula(string ced);
	void setNombre(string nom);
	void setEmail(string mail);

	// Agregar una cuenta que ya existe fuera del Cliente
	void agregarCuenta(Cuenta* c);

	string toString();
};

