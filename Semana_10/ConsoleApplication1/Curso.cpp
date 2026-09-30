// ============================================================
// Curso.cpp
// ============================================================
#include "Curso.h"
#include <sstream>
using namespace std;

Curso::Curso() {
    codigo = "";
    nombre = "";
    creditos = 0;
}

Curso::Curso(string codigo, string nombre, int creditos) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

Curso::~Curso() {}

string Curso::getCodigo() { return codigo; }
string Curso::getNombre() { return nombre; }
int Curso::getCreditos() { return creditos; }

string Curso::tostring() {
    stringstream s;
    s << "Curso: " << nombre << endl;
    s << "Codigo: " << codigo << endl;
    s << "Creditos: " << creditos << endl;
    return s.str();
}