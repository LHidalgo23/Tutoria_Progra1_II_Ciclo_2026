// ============================================================
// Profesor.h
// Declaracion de la clase Profesor, que tambien hereda de
// Persona. Un Profesor "ES-UNA" Persona, pero ademas tiene un
// titulo y una cantidad de horas de clase que imparte.
// ============================================================
#pragma once

#include "Persona.h"
#include <string>
using namespace std;

class Profesor : public Persona {
private:
    // Atributos propios de Profesor
    string titulo;
    int horasClase;

public:
    // Constructor por omision: delega en Persona()
    Profesor();

    // Constructor parametrizado: delega en Persona(cedula, nombre)
    // y ademas asigna el titulo y las horas de clase.
    Profesor(string cedula, string nombre, string titulo, int horasClase);

    // Destructor
    ~Profesor();

    // tostring() sobrescrito para agregar el titulo
    string tostring();

    // Implementacion obligatoria del metodo virtual puro de Persona.
    // En un Profesor, la "carga" se mide en horas de clase que imparte.
    int calcularCarga();
};