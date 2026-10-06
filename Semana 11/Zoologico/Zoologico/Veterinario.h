// ============================================================
// Veterinario.h
// Declaracion de la clase Veterinario, que hereda
// (publicamente)
// de Persona. Un Veterinario ES-UNA Persona que cuida la
// salud de los animales: ademas tiene una especialidad y las
// consultas que atiende al mes.
// ============================================================
#pragma once

#include "Persona.h"
#include <string>
using namespace std;

class Veterinario : public Persona {
private:
    // Atributos propios de Veterinario (no existen en Persona)
    string especialidad;
    int consultasMes;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Persona antes de inicializar los atributos propios.
    Veterinario();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (cedula y nombre) y despues los atributos propios.
    Veterinario(string cedula, string nombre, string especialidad, int consultasMes);

    // Destructor
    ~Veterinario();

    // Sobrescribe (override) toString() de Persona.
    // Imprime la cedula, el nombre y los atributos propios.
    string toString() override;
};
