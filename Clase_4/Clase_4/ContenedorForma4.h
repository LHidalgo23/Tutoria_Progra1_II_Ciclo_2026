#pragma once
#include "Persona.h"
// Este contenedor es el que usa mayormente
// El contenedor se crea dinamicamente y los objetos tambien, todo esta en el heap.


class ContenedorForma4 {
private:
    Persona** vec;   // Este vector interno del contenedor, establece su longitud en tiempo de ejecución
    int cant;        // y está diseñado para cargar o llevar dentro objetos dinámicos.  (obj con puntero).
    int tam;
public:
    ContenedorForma4(int tama);
    virtual ~ContenedorForma4();

    bool ingresarPersona(Persona* ptr);
    bool eliminaPersona(int pos);
    bool existeCedula(string ced);
    Persona* mayorEdad();
    string toString();

};
