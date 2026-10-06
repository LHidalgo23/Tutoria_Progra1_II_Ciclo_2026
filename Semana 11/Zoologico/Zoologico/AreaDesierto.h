// ============================================================
// AreaDesierto.h
// Declaracion de la clase AreaDesierto, que hereda
// (publicamente)
// de Area. Un AreaDesierto ES-UNA Area calida y seca: ademas
// tiene la cantidad de lamparas de calor.
// ============================================================
#pragma once

#include "Area.h"
#include <string>
using namespace std;

class AreaDesierto : public Area {
private:
    // Atributos propios de AreaDesierto (no existen en Area)
    int lamparasCalor;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Area antes de inicializar los atributos propios.
    AreaDesierto();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (nombre y metrosCuadrados) y despues los atributos propios.
    AreaDesierto(string nombre, double metrosCuadrados, int lamparasCalor);

    // Destructor
    ~AreaDesierto();

    // Sobrescribe (override) toString() de Area.
    // Imprime el nombre, los metros cuadrados y el atributo propio.
    string toString() override;
};
