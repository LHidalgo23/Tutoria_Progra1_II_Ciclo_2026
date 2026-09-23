// ============================================================
// ListaEnlazada.h
// Lista enlazada GENERICA: solo trabaja con Nodo*, nunca con
// NodoPersona* directamente. Por eso esta clase no tendria que
// cambiar aunque manana se agregue un NodoAvion o un NodoAsiento
// que tambien herede de Nodo.
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
    ~ListaEnlazada();

    void insertarFinal(Nodo* nuevo);
    string imprimirLista();
    int tamano();
};
