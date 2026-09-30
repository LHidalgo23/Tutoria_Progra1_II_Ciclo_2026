// ============================================================
// NodoPersona.h
// Nodo concreto que hereda de Nodo. Aqui SI se sabe que se
// guarda: un puntero a Persona (que puede ser una Persona,
// Estudiante o Profesor, gracias al polimorfismo que ya vimos).
// ============================================================
#pragma once

#include "Nodo.h"
#include "Persona.h"
#include <string>
using namespace std;

class NodoPersona : public Nodo {
private:
    // Aqui vive el dato real. Al ser Persona*, puede apuntar a
    // un Estudiante o a un Profesor sin que NodoPersona se entere
    // de cual es.
    Persona* persona;

public:
    NodoPersona(Persona* persona);
    ~NodoPersona();

    Persona* getPersona();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    // NodoPersona sabe imprimirse: le pide a la Persona que
    // guarda que se imprima ella misma (otra vez polimorfismo,
    // porque tostring() tambien es virtual en Persona).
    string imprimir() override;
};
