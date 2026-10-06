// ============================================================
// Camello.cpp
// Implementacion de los metodos de la clase Camello.
// ============================================================
#include "Camello.h"
#include <sstream>

// Constructor por omision.
// ":Animal()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Camello::Camello() : Animal() {
    cantidadJorobas = 0;
}

// Constructor parametrizado.
// ":Animal(codigo, peso)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Camello::Camello(int codigo, double peso, int cantidadJorobas) : Animal(codigo, peso) {
    this->cantidadJorobas = cantidadJorobas;
}

Camello::~Camello() {}

// toString() sobrescrito.
// Reutiliza Animal::toString() (codigo y peso) y le agrega el
// tipo de animal y su atributo propio.
string Camello::toString() {
    stringstream s;
    s << "Animal: Camello" << endl;
    s << Animal::toString();
    s << "Cantidad de jorobas: " << cantidadJorobas << endl;
    return s.str();
}

// Implementacion obligatoria del metodo virtual puro de Animal.
string Camello::hacerSonido() {
    return "Brrrr";
}
