// ============================================================
// Nodo.h
// Clase base (abstracta) de un nodo generico de lista
// enlazada.
// No sabe que tipo de dato contiene: solo sabe encadenarse
// con
// el siguiente nodo y sabe que DEBE poder imprimirse a si
// mismo.
// Cada tipo de nodo concreto (NodoPersona, NodoAnimal,
// NodoArea)
// hereda de aqui y decide como guardar su dato y como
// imprimirlo.
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

    // Destructor virtual: al destruir un Nodo* que en realidad es
    // un NodoPersona, NodoAnimal o NodoArea, se ejecuta primero el
    // destructor de la subclase (que libera el dato que guarda).
    virtual ~Nodo();

    Nodo* getSiguiente();
    void setSiguiente(Nodo* nodo);

    // Metodo virtual PURO: Nodo no sabe imprimir nada (no sabe
    // que contiene), asi que obliga a cada subclase a
    // implementarlo. Esto permite que ListaEnlazada llame a
    // imprimir() sobre CUALQUIER tipo de nodo sin saber cual es.
    virtual string imprimir() = 0;
};
