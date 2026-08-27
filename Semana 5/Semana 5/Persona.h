#pragma once

#include <iostream>
#include "Carro.h"
#include <sstream>
using namespace std;



// ============================================================
// ASOCIACION: Persona conoce a Carro (guarda un puntero),
// pero NO es dueña de el. Ambos pueden existir por separado.
// ============================================================

class Persona {
private:
	string nombre;
	int edad;
	string provincia;

	Carro* miCarro; // <-- asociacion: solo una referencia, no crea ni destruye el Carro

public:
	Persona();
	Persona(string nom, int ed, string prov);

	// Destructor: a proposito NO hace delete de miCarro.
	// La Persona nunca creo el Carro con new, no le corresponde borrarlo.
	virtual ~Persona();

	string getNombre();
	int getEdad();
	string getProvincia();

	void setNombre(string nom);
	void setEdad(int ed);
	void setProvincia(string prov);

	// Asociacion: asignar/quitar el carro no crea ni borra el objeto
	void asignarCarro(Carro* c);
	Carro* getCarro();

	string toString();
	bool esMayordeEdad();
};