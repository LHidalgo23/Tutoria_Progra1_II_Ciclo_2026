// ============================================================
// OsoPolar.cpp
// Implementacion de los metodos de la clase OsoPolar.
// ============================================================
#include "OsoPolar.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
OsoPolar::OsoPolar() : Animal() {
    grasaPolar = 0.0;
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
OsoPolar::OsoPolar(int codigo, double peso, double grasaPolar) : Animal(codigo, peso) {
    this->grasaPolar = grasaPolar;
}

OsoPolar::~OsoPolar() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string OsoPolar::toString() {
    stringstream s;
    s << "Animal: OsoPolar" << endl;
    s << Animal::toString();
    s << "Grasa polar: " << grasaPolar << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string OsoPolar::hacerSonido() {
    return "Grrr";
}
