// ============================================================
// AreaAcuatica.h
// Declaracion de la clase AreaAcuatica, que hereda
// (publicamente)
// de Area. Una AreaAcuatica ES-UNA Area con agua: ademas
// tiene su profundidad.
// ============================================================
#pragma once

#include "Area.h"
#include <string>
using namespace std;

class AreaAcuatica : public Area {
private:
    // Atributos propios de AreaAcuatica (no existen en Area)
    double profundidad;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Area antes de inicializar los atributos propios.
    AreaAcuatica();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (nombre y metrosCuadrados) y despues los atributos propios.
    AreaAcuatica(string nombre, double metrosCuadrados, double profundidad);

    // Destructor
    ~AreaAcuatica();

    // Sobrescribe (override) toString() de Area.
    // Imprime el nombre, los metros cuadrados y el atributo propio.
    string toString() override;
};
