// ============================================================
// NodoEvaluacion.h
// Nodo concreto que hereda de Nodo y guarda una Evaluacion*.
// ============================================================
#pragma once

#include "Nodo.h"
#include "Evaluacion.h"
#include <string>
using namespace std;

class NodoEvaluacion : public Nodo {
private:
    Evaluacion* evaluacion;

public:
    NodoEvaluacion(Evaluacion* evaluacion);
    ~NodoEvaluacion();

    Evaluacion* getEvaluacion();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    string imprimir() override;
};