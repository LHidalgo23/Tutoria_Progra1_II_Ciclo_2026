// ============================================================
// Tiburon.h
// Declaracion de la clase Tiburon, que hereda (publicamente)
// de Animal. Un Tiburon ES-UN Animal acuatico: ademas tiene
// su longitud.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class Tiburon : public Animal {
private:
    // Atributos propios de Tiburon (no existen en Animal)
    int longitud;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    Tiburon();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    Tiburon(int codigo, double peso, int longitud);

    // Destructor
    ~Tiburon();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
