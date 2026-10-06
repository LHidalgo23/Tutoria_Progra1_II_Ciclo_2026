// ============================================================
// Visitante.h
// Declaracion de la clase Visitante, que hereda
// (publicamente)
// de Persona. Un Visitante ES-UNA Persona que visita el
// zoologico: ademas tiene edad y cantidad de entradas
// compradas.
// ============================================================
#pragma once

#include "Persona.h"
#include <string>
using namespace std;

class Visitante : public Persona {
private:
    // Atributos propios de Visitante (no existen en Persona)
    int edad;
    int cantidadEntradas;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Persona antes de inicializar los atributos propios.
    Visitante();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (cedula y nombre) y despues los atributos propios.
    Visitante(string cedula, string nombre, int edad, int cantidadEntradas);

    // Destructor
    ~Visitante();

    // Sobrescribe (override) toString() de Persona.
    // Imprime la cedula, el nombre y los atributos propios.
    string toString() override;
};
