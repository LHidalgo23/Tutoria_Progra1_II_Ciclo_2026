// ============================================================
// Delfin.cpp
// Implementacion de los metodos de la clase Delfin.
// ============================================================
#include "Delfin.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Delfin::Delfin() : Animal() {
    numeroTrucos = 0;
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Delfin::Delfin(int codigo, double peso, int numeroTrucos) : Animal(codigo, peso) {
    this->numeroTrucos = numeroTrucos;
}

Delfin::~Delfin() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string Delfin::toString() {
    stringstream s;
    s << "Animal: Delfin" << endl;
    s << Animal::toString();
    s << "Numero de trucos: " << numeroTrucos << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string Delfin::hacerSonido() {
    return "Iiii-ii-ii";
}
