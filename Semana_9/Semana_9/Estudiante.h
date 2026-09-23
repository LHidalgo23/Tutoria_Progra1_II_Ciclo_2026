// ============================================================
// Estudiante.h
// Declaracion de la clase Estudiante, que hereda (publicamente)
// de Persona. Un Estudiante "ES-UNA" Persona, pero ademas tiene
// edad y una cantidad de creditos matriculados.
// ============================================================
#pragma once

#include "Persona.h"
#include <string>
using namespace std;

class Estudiante : public Persona {
private:
    // Atributos propios de Estudiante (no existen en Persona)
    int edad;
    int creditosMatriculados;

public:
    // Constructor por omision: llama internamente al constructor
    // por omision de Persona (Persona()) antes de inicializar los
    // atributos propios.
    Estudiante();

    // Constructor parametrizado: llama al constructor parametrizado
    // de la superclase Persona(cedula, nombre), y luego inicializa
    // edad y creditosMatriculados.
    Estudiante(string cedula, string nombre, int edad, int creditos);

    // Destructor
    ~Estudiante();

    // Se sobrescribe (override) el tostring() de Persona para
    // agregar la edad al texto ya generado por la superclase.
    string tostring();

    // Implementacion obligatoria del metodo virtual puro de Persona.
    // En un Estudiante, la "carga" se mide en creditos matriculados.
    int calcularCarga();
};