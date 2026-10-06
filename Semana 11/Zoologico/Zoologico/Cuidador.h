// ============================================================
// Cuidador.h
// Declaracion de la clase Cuidador, que hereda
// (publicamente)
// de Persona. Un Cuidador ES-UNA Persona que atiende una
// zona del zoologico: ademas tiene la zona asignada y las
// horas que trabaja por semana.
// ============================================================
#pragma once

#include "Persona.h"
#include <string>
using namespace std;

class Cuidador : public Persona {
private:
    // Atributos propios de Cuidador (no existen en Persona)
    string zona;
    int horasSemana;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Persona antes de inicializar los atributos propios.
    Cuidador();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (cedula y nombre) y despues los atributos propios.
    Cuidador(string cedula, string nombre, string zona, int horasSemana);

    // Destructor
    ~Cuidador();

    // Sobrescribe (override) toString() de Persona.
    // Imprime la cedula, el nombre y los atributos propios.
    string toString() override;
};
