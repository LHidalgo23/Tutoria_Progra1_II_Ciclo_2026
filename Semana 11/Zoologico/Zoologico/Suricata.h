// ============================================================
// Suricata.h
// Declaracion de la clase Suricata, que hereda
// (publicamente)
// de Animal. Una Suricata ES-UN Animal del desierto: ademas
// indica si es la centinela que vigila al grupo.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class Suricata : public Animal {
private:
    // Atributos propios de Suricata (no existen en Animal)
    bool esCentinela;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    Suricata();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    Suricata(int codigo, double peso, bool esCentinela);

    // Destructor
    ~Suricata();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
