// ============================================================
// AreaHielo.h
// Declaracion de la clase AreaHielo, que hereda
// (publicamente)
// de Area. Una AreaHielo ES-UNA Area fria: ademas tiene su
// temperatura.
// ============================================================
#pragma once

#include "Area.h"
#include <string>
using namespace std;

class AreaHielo : public Area {
private:
    // Atributos propios de AreaHielo (no existen en Area)
    double temperatura;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Area antes de inicializar los atributos propios.
    AreaHielo();

    // Constructor parametrizado: primero se reciben los datos de la
    // superclase (nombre y metrosCuadrados) y despues los atributos propios.
    AreaHielo(string nombre, double metrosCuadrados, double temperatura);

    // Destructor
    ~AreaHielo();

    // Sobrescribe (override) toString() de Area.
    // Imprime el nombre, los metros cuadrados y el atributo propio.
    string toString() override;
};
