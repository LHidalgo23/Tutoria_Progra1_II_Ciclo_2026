// ============================================================
// Evaluacion.cpp
// ============================================================
#include "Evaluacion.h"
#include <sstream>
using namespace std;

Evaluacion::Evaluacion() {
    nombre = "";
    porcentaje = 0;
    nota = 0;
}

Evaluacion::Evaluacion(string nombre, double porcentaje, double nota) {
    this->nombre = nombre;
    this->porcentaje = porcentaje;
    this->nota = nota;
}

Evaluacion::~Evaluacion() {}

string Evaluacion::getNombre() { return nombre; }
double Evaluacion::getPorcentaje() { return porcentaje; }
double Evaluacion::getNota() { return nota; }

double Evaluacion::calcularAporte() {
    return nota * porcentaje / 100.0;
}

string Evaluacion::tostring() {
    stringstream s;
    s << "Evaluacion: " << nombre << endl;
    s << "Porcentaje: " << porcentaje << "%" << endl;
    s << "Nota: " << nota << endl;
    s << "Aporte a la nota final: " << calcularAporte() << endl;
    return s.str();
}