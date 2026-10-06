// ============================================================
// Area.h
// Clase base ABSTRACTA de las areas del zoologico.
// Es abstracta porque tiene un metodo virtual puro
// (toString),
// por lo tanto no se pueden crear objetos de tipo Area
// directamente, solo de sus subclases (AreaDesierto,
// AreaAcuatica, AreaHielo).
// ============================================================
#pragma once

#include <string>
using namespace std;

class Area {
protected:
    string nombre;
    double metrosCuadrados;

public:
    // Constructor por omision (sin parametros)
    Area();

    // Constructor parametrizado
    Area(string nombre, double metrosCuadrados);

    // Destructor virtual (necesario para borrar subclases a
    // traves de un puntero Area*)
    virtual ~Area();

    // Metodo virtual PURO ( = 0 ): cada tipo de area imprime sus
    // propios datos.
    virtual string toString() = 0;
};
