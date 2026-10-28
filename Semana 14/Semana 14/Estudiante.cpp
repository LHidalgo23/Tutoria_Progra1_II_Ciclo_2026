// ============================================================================
// Archivo  : Estudiante.cpp
// Tipo     : Archivo de implementación
// ============================================================================

#include "Estudiante.h"

// En la lista de inicialización se llama primero al constructor de la BASE
// (Persona(n)) para que inicialice el nombre; luego se inicializa la nota.
Estudiante::Estudiante(string n, double nota) : Persona(n), nota(nota) {}

Estudiante::~Estudiante() {

}

double Estudiante::getNota() {
	return nota;
}

// Versión propia de toString: muestra el nombre con la marca [E].
// Ejemplo: Estudiante("Ana", 95) -> "Ana[E] "
string Estudiante::toString() {
	stringstream ss;
	ss << nombre << "[E] ";
	return ss.str();
}

string Estudiante::getTipo() {
	return "Estudiante";
}
