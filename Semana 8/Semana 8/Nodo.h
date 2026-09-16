#pragma once
#include "Persona.h"
class Nodo{

private:
	Persona* persona;
	Nodo* siguiente;
public:

	//Constructores
	Nodo(Persona* per);
	Nodo(Nodo* node, Persona* per);

	Nodo(); 

	//Destructor
	virtual~Nodo();

	//Accesores y mutadores
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);

	Persona* getPersona();

};

