// ============================================================
// AreaHielo.cpp
// Implementacion de los metodos de la clase AreaHielo.
// ============================================================
#include "AreaHielo.h"
#include <sstream>

// Constructor por omision.
// ":Area()" invoca explicitamente el constructor por omision de
// la superclase antes de ejecutar el cuerpo de este constructor.
AreaHielo::AreaHielo() : Area() {
    temperatura = 0.0;
}

// Constructor parametrizado.
// ":Area(nombre, metrosCuadrados)" delega en la superclase la inicializacion de
// sus atributos; aqui solo se asignan los atributos propios.
AreaHielo::AreaHielo(string nombre, double metrosCuadrados, double temperatura) : Area(nombre, metrosCuadrados) {
    this->temperatura = temperatura;
}

AreaHielo::~AreaHielo() {}

// toString() sobrescrito.
// Escribe el tipo de area, los atributos heredados (nombre y
// metros cuadrados, que son protected) y el atributo propio.
string AreaHielo::toString() {
    stringstream s;
    s << "Area: AreaHielo" << endl;
    s << "Nombre: " << nombre << endl;
    s << "Metros cuadrados: " << metrosCuadrados << endl;
    s << "Temperatura: " << temperatura << endl;
    return s.str();
}
