// ============================================================
// NodoArea.cpp
// ============================================================
#include "NodoArea.h"

NodoArea::NodoArea(Area* area) : Nodo() {
    this->area = area;
}

// Libera el objeto que el nodo guarda. Como el destructor de
// Area es virtual, se destruye la subclase real y luego
// la superclase. Esto evita fugas de memoria.
NodoArea::~NodoArea() {
    delete area;
}

Area* NodoArea::getArea() {
    return area;
}

// Le pide al Area que guarda que se imprima ella misma; se
// ejecuta el toString() del tipo real de area.
string NodoArea::imprimir() {
    return area->toString();
}
