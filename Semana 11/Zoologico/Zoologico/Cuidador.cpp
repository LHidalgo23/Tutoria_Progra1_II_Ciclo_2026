// ============================================================
// Cuidador.cpp
// Implementacion de los metodos de la clase Cuidador.
// ============================================================
#include "Cuidador.h"
#include <sstream>

// Constructor por omision.
// ":Persona()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Cuidador::Cuidador() : Persona() {
    zona = "";
    horasSemana = 0;
}

// Constructor parametrizado.
// ":Persona(cedula, nombre)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Cuidador::Cuidador(string cedula, string nombre, string zona, int horasSemana) : Persona(cedula, nombre) {
    this->zona = zona;
    this->horasSemana = horasSemana;
}

Cuidador::~Cuidador() {}

// toString() sobrescrito.
// Primero se escribe el tipo de persona y los atributos heredados
// (cedula y nombre, que son protected y se pueden usar aqui),
// y despues los atributos propios.
string Cuidador::toString() {
    stringstream s;
    s << "Tipo: Cuidador" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Zona: " << zona << endl;
    s << "Horas por semana: " << horasSemana << endl;
    return s.str();
}
