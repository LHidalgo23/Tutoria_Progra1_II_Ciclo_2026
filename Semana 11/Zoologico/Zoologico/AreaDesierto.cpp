// ============================================================
// AreaDesierto.cpp
// Implementacion de los metodos de la clase AreaDesierto.
// ============================================================
#include "AreaDesierto.h"
#include <sstream>

// Constructor por omision.
// ":Area()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
AreaDesierto::AreaDesierto() : Area() {
    lamparasCalor = 0;
}

// Constructor parametrizado.
// ":Area(nombre, metrosCuadrados)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
AreaDesierto::AreaDesierto(string nombre, double metrosCuadrados, int lamparasCalor) : Area(nombre, metrosCuadrados) {
    this->lamparasCalor = lamparasCalor;
}

AreaDesierto::~AreaDesierto() {}

// toString() sobrescrito.
// Escribe el tipo de area, los atributos heredados (nombre y
// metros cuadrados, que son protected) y el atributo propio.
string AreaDesierto::toString() {
    stringstream s;
    s << "Area: AreaDesierto" << endl;
    s << "Nombre: " << nombre << endl;
    s << "Metros cuadrados: " << metrosCuadrados << endl;
    s << "Lamparas de calor: " << lamparasCalor << endl;
    return s.str();
}
