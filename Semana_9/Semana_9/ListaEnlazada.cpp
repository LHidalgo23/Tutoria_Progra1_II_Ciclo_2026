// ============================================================
// ListaEnlazada.cpp
// ============================================================
#include "ListaEnlazada.h"
#include <sstream>

ListaEnlazada::ListaEnlazada() {
    inicio = nullptr;
}

ListaEnlazada::~ListaEnlazada() {}

void ListaEnlazada::insertarFinal(Nodo* nuevo) {
    if (inicio == nullptr) {
        inicio = nuevo;
        return;
    }
    Nodo* actual = inicio;
    while (actual->getSiguiente() != nullptr) {
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(nuevo);
}

string ListaEnlazada::imprimirLista() {
    stringstream s;
    Nodo* actual = inicio;
    while (actual != nullptr) {
        // No sabemos (ni nos importa) si "actual" es un
        // NodoPersona u otro tipo de nodo futuro: solo llamamos
        // imprimir() y confiamos en el polimorfismo.
        s << actual->imprimir();
        s << "--------------------------" << endl;
        actual = actual->getSiguiente();
    }
    return s.str();
}

int ListaEnlazada::tamano() {
    int contador = 0;
    Nodo* actual = inicio;
    while (actual != nullptr) {
        contador++;
        actual = actual->getSiguiente();
    }
    return contador;
}