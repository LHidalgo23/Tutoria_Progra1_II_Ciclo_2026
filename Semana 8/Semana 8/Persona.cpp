#include "Persona.h"

Persona::Persona() {
	edad = -1;
	nombre = "sin nombre";
}
Persona::Persona(string nom, int ed) {
	edad = ed;
	nombre = nom;
}
Persona::~Persona(){}

int Persona::getEdad() {
	return edad;
}
string Persona::getNombre() {
	return nombre;
}

void Persona::setEdad(int ed) {
	edad = ed;
}
void Persona::setNombre(string nom) {
	nombre = nom;
}


string toString();
