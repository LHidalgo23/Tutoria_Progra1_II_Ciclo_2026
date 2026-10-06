// ============================================================
// Pinguino.cpp
// Implementacion de los metodos de la clase Pinguino.
// ============================================================
#include "Pinguino.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Pinguino::Pinguino() : Animal() {
    especie = "";
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Pinguino::Pinguino(int codigo, double peso, string especie) : Animal(codigo, peso) {
    this->especie = especie;
}

Pinguino::~Pinguino() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string Pinguino::toString() {
    stringstream s;
    s << "Animal: Pinguino" << endl;
    s << Animal::toString();
    s << "Especie: " << especie << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string Pinguino::hacerSonido() {
    return "Kwak kwak";
}
