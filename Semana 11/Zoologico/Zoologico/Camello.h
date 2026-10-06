// ============================================================
// Camello.h
// Declaracion de la clase Camello, que hereda (publicamente)
// de Animal. Un Camello ES-UN Animal del desierto: ademas
// tiene la cantidad de jorobas.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class Camello : public Animal {
private:
    // Atributos propios de Camello (no existen en Animal)
    int cantidadJorobas;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    Camello();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    Camello(int codigo, double peso, int cantidadJorobas);

    // Destructor
    ~Camello();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
