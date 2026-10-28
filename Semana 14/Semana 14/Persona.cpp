// ============================================================================
// Archivo  : Persona.cpp
// Tipo     : Archivo de implementación
// Propósito: Métodos de la clase base Persona.
//
// Nota: la palabra 'virtual' solo se escribe en el .h, NO se repite aquí.
// ============================================================================

#include "Persona.h"

Persona::Persona() : nombre("") {}

Persona::Persona(string n) : nombre(n) {}

// El mensaje permite ver en consola el ORDEN de destrucción:
// primero el destructor de la hija, después el de la base.
Persona::~Persona() {
	
}

string Persona::getNombre() {
	return nombre;
}

string Persona::toString() {
	stringstream ss;
	ss << nombre << " ";
	return ss.str();
}

string Persona::getTipo() {
	return "Persona";
}
