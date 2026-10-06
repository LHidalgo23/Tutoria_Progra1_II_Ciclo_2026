// ============================================================
// Suricata.cpp
// Implementacion de los metodos de la clase Suricata.
// ============================================================
#include "Suricata.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Suricata::Suricata() : Animal() {
    esCentinela = false;
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Suricata::Suricata(int codigo, double peso, bool esCentinela) : Animal(codigo, peso) {
    this->esCentinela = esCentinela;
}

Suricata::~Suricata() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string Suricata::toString() {
    stringstream s;
    s << "Animal: Suricata" << endl;
    s << Animal::toString();
    s << "Es centinela: " << (esCentinela ? "Si" : "No") << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string Suricata::hacerSonido() {
    return "Wik wik";
}
