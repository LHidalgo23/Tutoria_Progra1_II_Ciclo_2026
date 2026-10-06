// ============================================================
// Pinguino.h
// Declaracion de la clase Pinguino, que hereda
// (publicamente)
// de Animal. Un Pinguino ES-UN Animal de las zonas heladas:
// ademas tiene su especie.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class Pinguino : public Animal {
private:
    // Atributos propios de Pinguino (no existen en Animal)
    string especie;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    Pinguino();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    Pinguino(int codigo, double peso, string especie);

    // Destructor
    ~Pinguino();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
