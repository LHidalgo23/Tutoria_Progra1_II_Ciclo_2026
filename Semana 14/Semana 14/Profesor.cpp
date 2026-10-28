// ============================================================================
// Archivo  : Profesor.cpp
// Tipo     : Archivo de implementación
// ============================================================================

#include "Profesor.h"

Profesor::Profesor(string n, string curso) : Persona(n), curso(curso) {}

Profesor::~Profesor() {
	
}

string Profesor::getCurso() {
	return curso;
}

// Ejemplo: Profesor("Marta", "Progra 1") -> "Marta[P] "
string Profesor::toString() {
	stringstream ss;
	ss << nombre << "[P] ";
	return ss.str();
}

string Profesor::getTipo() {
	return "Profesor";
}
