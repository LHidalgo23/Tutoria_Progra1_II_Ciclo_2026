// ============================================================
// Area.cpp
// Implementacion de los metodos de la clase Area.
// ============================================================
#include "Area.h"

// Constructor por omision: inicializa los atributos vacios
Area::Area() {
    nombre = "";
    metrosCuadrados = 0.0;
}

// Constructor parametrizado: recibe nombre y metros cuadrados
Area::Area(string nombre, double metrosCuadrados) {
    this->nombre = nombre;
    this->metrosCuadrados = metrosCuadrados;
}

Area::~Area() {}

// Nota: toString() NO se implementa aqui porque es un metodo
// virtual puro (= 0). Cada subclase le da su propio cuerpo e
// imprime tambien el nombre y los metros cuadrados.
