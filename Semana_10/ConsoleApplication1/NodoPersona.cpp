// ============================================================
// NodoPersona.cpp
// ============================================================
#include "NodoPersona.h"

NodoPersona::NodoPersona(Persona* persona) : Nodo() {
    this->persona = persona;
}

NodoPersona::~NodoPersona() {}

Persona* NodoPersona::getPersona() {
    return persona;
}

// Doble polimorfismo en una sola linea:
// 1) ListaEnlazada llama imprimir() sobre un Nodo* sin saber que
//    es un NodoPersona -> se ejecuta ESTA version.
// 2) Esta version llama tostring() sobre un Persona* sin saber
//    si es Estudiante o Profesor -> se ejecuta la version correcta.
string NodoPersona::imprimir() {
    return persona->tostring();
}