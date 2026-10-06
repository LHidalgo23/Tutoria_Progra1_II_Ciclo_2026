// ============================================================
// Visitante.cpp
// Implementacion de los metodos de la clase Visitante.
// ============================================================
#include "Visitante.h"
#include <sstream>

// Constructor por omision.
// ":Persona()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Visitante::Visitante() : Persona() {
    edad = 0;
    cantidadEntradas = 0;
}

// Constructor parametrizado.
// ":Persona(cedula, nombre)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Visitante::Visitante(string cedula, string nombre, int edad, int cantidadEntradas) : Persona(cedula, nombre) {
    this->edad = edad;
    this->cantidadEntradas = cantidadEntradas;
}

Visitante::~Visitante() {}

// toString() sobrescrito.
// Primero se escribe el tipo de persona y los atributos heredados
// (cedula y nombre, que son protected y se pueden usar aqui),
// y despues los atributos propios.
string Visitante::toString() {
    stringstream s;
    s << "Tipo: Visitante" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Cantidad de entradas: " << cantidadEntradas << endl;
    return s.str();
}
