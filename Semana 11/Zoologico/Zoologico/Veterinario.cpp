// ============================================================
// Veterinario.cpp
// Implementacion de los metodos de la clase Veterinario.
// ============================================================
#include "Veterinario.h"
#include <sstream>

// Constructor por omision.
// ":Persona()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
Veterinario::Veterinario() : Persona() {
    especialidad = "";
    consultasMes = 0;
}

// Constructor parametrizado.
// ":Persona(cedula, nombre)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
Veterinario::Veterinario(string cedula, string nombre, string especialidad, int consultasMes) : Persona(cedula, nombre) {
    this->especialidad = especialidad;
    this->consultasMes = consultasMes;
}

Veterinario::~Veterinario() {}

// toString() sobrescrito.
// Primero se escribe el tipo de persona y los atributos heredados
// (cedula y nombre, que son protected y se pueden usar aqui),
// y despues los atributos propios.
string Veterinario::toString() {
    stringstream s;
    s << "Tipo: Veterinario" << endl;
    s << "Cedula: " << cedula << endl;
    s << "Nombre: " << nombre << endl;
    s << "Especialidad: " << especialidad << endl;
    s << "Consultas al mes: " << consultasMes << endl;
    return s.str();
}
