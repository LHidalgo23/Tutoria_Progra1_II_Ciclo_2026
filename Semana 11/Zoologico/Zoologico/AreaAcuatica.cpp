// ============================================================
// AreaAcuatica.cpp
// Implementacion de los metodos de la clase AreaAcuatica.
// ============================================================
#include "AreaAcuatica.h"
#include <sstream>

// Constructor por omision.
// ":Area()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
AreaAcuatica::AreaAcuatica() : Area() {
    profundidad = 0.0;
}

// Constructor parametrizado.
// ":Area(nombre, metrosCuadrados)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
AreaAcuatica::AreaAcuatica(string nombre, double metrosCuadrados, double profundidad) : Area(nombre, metrosCuadrados) {
    this->profundidad = profundidad;
}

AreaAcuatica::~AreaAcuatica() {}

// toString() sobrescrito.
// Escribe el tipo de area, los atributos heredados (nombre y
// metros cuadrados, que son protected) y el atributo propio.
string AreaAcuatica::toString() {
    stringstream s;
    s << "Area: AreaAcuatica" << endl;
    s << "Nombre: " << nombre << endl;
    s << "Metros cuadrados: " << metrosCuadrados << endl;
    s << "Profundidad: " << profundidad << endl;
    return s.str();
}
