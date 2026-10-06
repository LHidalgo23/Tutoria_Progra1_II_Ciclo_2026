// ============================================================
// ListaEnlazada.h
// Lista enlazada GENERICA: solo trabaja con Nodo*, nunca con
// NodoPersona*, NodoAnimal* ni NodoArea* directamente. Por
// eso
// esta misma clase sirve para las tres listas del zoologico
// y
// no tendria que cambiar aunque manana se agregue otro tipo
// de
// nodo que tambien herede de Nodo.
//
// La lista es DUENA de los nodos que se le insertan: los
// libera
// todos en su destructor.
// ============================================================
#pragma once

#include "Nodo.h"
#include <string>
using namespace std;

class ListaEnlazada {
private:
    Nodo* inicio;

public:
    ListaEnlazada();

    // Recorre la lista y libera cada nodo (y, a traves del
    // destructor del nodo, el dato que cada uno guarda).
    ~ListaEnlazada();

    void insertarFinal(Nodo* nuevo);
    string imprimirLista();
    int tamano();
};
