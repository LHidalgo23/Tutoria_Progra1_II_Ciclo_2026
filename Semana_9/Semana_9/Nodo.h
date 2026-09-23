// ============================================================
// Nodo.h
// Clase base (abstracta) de un nodo generico de lista enlazada.
// No sabe que tipo de dato contiene: solo sabe encadenarse con
// el siguiente nodo y sabe que DEBE poder imprimirse a si mismo.
// Cada tipo de nodo concreto (por ejemplo NodoPersona) hereda de
// aqui y decide como guardar su dato y como imprimirlo.
// ============================================================
#pragma once

#include <string>
using namespace std;

class Nodo {
protected:
    // El puntero al siguiente nodo vive aqui, en la clase base,
    // porque todo nodo -sin importar que contenga- necesita
    // encadenarse igual.
    Nodo* siguiente;

public:
    Nodo();
    virtual ~Nodo();

    Nodo* getSiguiente();
    void setSiguiente(Nodo* nodo);

    // Metodo virtual PURO: Nodo no sabe imprimir nada (no sabe
    // que contiene), asi que obliga a cada subclase a implementarlo.
    // Esto es lo que permite que ListaEnlazada llame a imprimir()
    // sobre CUALQUIER tipo de nodo sin saber cual es.
    virtual string imprimir() = 0;
};