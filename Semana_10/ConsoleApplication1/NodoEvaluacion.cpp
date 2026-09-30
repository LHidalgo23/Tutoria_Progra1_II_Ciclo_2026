// ============================================================
// NodoEvaluacion.cpp
// ============================================================
#include "NodoEvaluacion.h"

NodoEvaluacion::NodoEvaluacion(Evaluacion* evaluacion) : Nodo() {
    this->evaluacion = evaluacion;
}

NodoEvaluacion::~NodoEvaluacion() {}

Evaluacion* NodoEvaluacion::getEvaluacion() {
    return evaluacion;
}

string NodoEvaluacion::imprimir() {
    return evaluacion->tostring();
}