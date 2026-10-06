// ============================================================
// OsoPolar.h
// Declaracion de la clase OsoPolar, que hereda
// (publicamente)
// de Animal. Un OsoPolar ES-UN Animal que vive en el hielo:
// ademas tiene la grasa polar que lo aisla del frio.
// ============================================================
#pragma once

#include "Animal.h"
#include <string>
using namespace std;

class OsoPolar : public Animal {
private:
    // Atributos propios de OsoPolar (no existen en Animal)
    double grasaPolar;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Animal antes de inicializar los atributos propios.
    OsoPolar();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (codigo y peso) y despues los atributos propios.
    OsoPolar(int codigo, double peso, double grasaPolar);

    // Destructor
    ~OsoPolar();

    // Sobrescribe (override) toString() de Animal.
    // Agrega el atributo propio al texto de Animal::toString().
    string toString() override;

    // Implementacion obligatoria del metodo virtual puro de Animal.
    string hacerSonido() override;
};
