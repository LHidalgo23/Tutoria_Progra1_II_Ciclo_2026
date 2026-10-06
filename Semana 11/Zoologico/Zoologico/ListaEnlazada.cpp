// ============================================================
// ListaEnlazada.cpp
// ============================================================
#include "ListaEnlazada.h"
#include <sstream>

ListaEnlazada::ListaEnlazada() {
    inicio = nullptr;
}

// Destructor: libera TODOS los nodos de la lista.
// Se guarda el puntero al siguiente ANTES de hacer delete del
// actual; si no, al borrar el nodo se perderia el resto de la
// lista (y quedaria memoria sin liberar).
// delete actual -> ~NodoXxx() (virtual) -> libera el dato guardado.
ListaEnlazada::~ListaEnlazada() {
    Nodo* actual = inicio;
    while (actual != nullptr) {
        Nodo* siguiente = actual->getSiguiente();
        delete actual;
        actual = siguiente;
    }
    inicio = nullptr;
}

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
        // No sabemos (ni nos importa) que tipo de nodo es "actual":
        // solo llamamos imprimir() y confiamos en el polimorfismo.
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
