// ============================================================
// NodoCurso.h
// Nodo concreto que hereda de Nodo y guarda un Curso*.
// ============================================================
#pragma once

#include "Nodo.h"
#include "Curso.h"
#include <string>
using namespace std;

class NodoCurso : public Nodo {
private:
    Curso* curso;

public:
    NodoCurso(Curso* curso);
    ~NodoCurso();

    Curso* getCurso();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    string imprimir() override;
};