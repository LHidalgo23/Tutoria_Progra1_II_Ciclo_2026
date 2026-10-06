// ============================================================
// NodoArea.h
// Nodo concreto que hereda de Nodo y guarda un Area*.
// Al ser Area*, puede apuntar a un AreaDesierto,
// AreaAcuatica
// o AreaHielo sin que el nodo sepa cual es (polimorfismo).
// ============================================================
#pragma once

#include "Nodo.h"
#include "Area.h"
#include <string>
using namespace std;

class NodoArea : public Nodo {
private:
    // Aqui vive el dato real.
    Area* area;

public:
    // Recibe el puntero al objeto que va a guardar. El nodo pasa a
    // ser DUENO de ese objeto: lo libera en su destructor.
    NodoArea(Area* area);
    ~NodoArea();

    Area* getArea();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    string imprimir() override;
};
