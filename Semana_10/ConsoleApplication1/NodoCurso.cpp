// ============================================================
// NodoCurso.cpp
// ============================================================
#include "NodoCurso.h"

NodoCurso::NodoCurso(Curso* curso) : Nodo() {
    this->curso = curso;
}

NodoCurso::~NodoCurso() {}

Curso* NodoCurso::getCurso() {
    return curso;
}

// La lista llama imprimir() sobre un Nodo* sin saber que es un
// NodoCurso; se ejecuta esta version, que le pide al Curso que
// se imprima.
string NodoCurso::imprimir() {
    return curso->tostring();
}