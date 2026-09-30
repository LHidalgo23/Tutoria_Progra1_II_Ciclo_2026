// ============================================================
// Evaluacion.h
// Clase que representa una evaluacion de un curso (examen,
// tarea, proyecto...). Tiene un porcentaje sobre la nota final
// y la nota que saco el estudiante (0 a 100).
// ============================================================
#pragma once

#include <string>
using namespace std;

class Evaluacion {
private:
    string nombre;
    double porcentaje;   // valor de la evaluacion en la nota final
    double nota;         // nota obtenida (0 a 100)

public:
    Evaluacion();
    Evaluacion(string nombre, double porcentaje, double nota);
    ~Evaluacion();

    string getNombre();
    double getPorcentaje();
    double getNota();

    // Cuantos puntos aporta a la nota final: nota * porcentaje / 100
    double calcularAporte();

    string tostring() ;
};