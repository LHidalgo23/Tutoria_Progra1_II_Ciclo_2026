// ============================================================
// NodoPersona.cpp
// ============================================================
#include "NodoPersona.h"

NodoPersona::NodoPersona(Persona* persona) : Nodo() {
    this->persona = persona;
}

// Libera el objeto que el nodo guarda. Como el destructor de
// Persona es virtual, se destruye la subclase real y luego
// la superclase. Esto evita fugas de memoria.
NodoPersona::~NodoPersona() {
    delete persona;
}

Persona* NodoPersona::getPersona() {
    return persona;
}

// Doble polimorfismo en una sola linea:
// 1) ListaEnlazada llama imprimir() sobre un Nodo* sin saber que
//    es un NodoPersona -> se ejecuta ESTA version.
// 2) Esta version llama toString() sobre un Persona* sin saber si
//    es Visitante, Veterinario o Cuidador -> se ejecuta la version
//    correcta.
string NodoPersona::imprimir() {
    return persona->toString();
}
