// ============================================================
// Tiburon.cpp
// Implementacion de los metodos de la clase Tiburon.
// ============================================================
#include "Tiburon.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Tiburon::Tiburon() : Animal() {
    longitud = 0;
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Tiburon::Tiburon(int codigo, double peso, int longitud) : Animal(codigo, peso) {
    this->longitud = longitud;
}

Tiburon::~Tiburon() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string Tiburon::toString() {
    stringstream s;
    s << "Animal: Tiburon" << endl;
    s << Animal::toString();
    s << "Longitud: " << longitud << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string Tiburon::hacerSonido() {
    return "Glub glub";
}
