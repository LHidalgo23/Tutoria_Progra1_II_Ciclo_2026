// ============================================================
// Delfin.h
// Declaracion de la clase Delfin, que hereda (publicamente)
// de Animal. Un Delfin ES-UN Animal acuatico: ademas tiene
// la cantidad de trucos que sabe hacer.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class Delfin : public Animal {
private:
    // Atributos propios de Delfin (no existen en Animal)
    int numeroTrucos;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    Delfin();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    Delfin(int codigo, double peso, int numeroTrucos);

    // Destructor
    ~Delfin();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
