// ============================================================
// Nodo.cpp
// ============================================================
#include "Nodo.h"

Nodo::Nodo() {
    siguiente = nullptr;
}

Nodo::~Nodo() {}

Nodo* Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* nodo) {
    siguiente = nodo;
}

// Nota: imprimir() no se implementa aqui porque es virtual puro.
// Cada subclase de Nodo debe darle su propio cuerpo.
