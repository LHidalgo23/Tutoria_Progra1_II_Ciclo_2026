// ============================================================
// NodoPersona.h
// Nodo concreto que hereda de Nodo y guarda un Persona*.
// Al ser Persona*, puede apuntar a un Visitante, Veterinario
// o
// Cuidador sin que el nodo sepa cual es (polimorfismo).
// ============================================================
#pragma once

#include "Nodo.h"
#include "Persona.h"
#include <string>
using namespace std;

class NodoPersona : public Nodo {
private:
    // Aqui vive el dato real.
    Persona* persona;

public:
    // Recibe el puntero al objeto que va a guardar. El nodo pasa a
    // ser DUENO de ese objeto: lo libera en su destructor.
    NodoPersona(Persona* persona);
    ~NodoPersona();

    Persona* getPersona();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    string imprimir() override;
};
