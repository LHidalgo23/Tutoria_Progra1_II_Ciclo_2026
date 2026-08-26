#pragma once
#include "Persona.h"

// Vector que vieron en Funda
// Vector de personas automaticas, con tamano de 10 posiciones en tiempo de compilacion

class ContenedorForma1{
private:
	Persona vec[10];
	int cant;
	int tam;
public:
	ContenedorForma1();
	virtual ~ContenedorForma1();
	bool ingresarPersona();
	bool eliminaPersona(int pos);
	Persona mayorEdad();
	string toString();
};

