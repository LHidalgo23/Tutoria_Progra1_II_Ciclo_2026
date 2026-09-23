// ============================================================
// Persona.h
// Declaracion de la clase base (superclase) Persona.
// Es una clase ABSTRACTA porque tiene un metodo virtual puro
// (calcularCarga), por lo tanto no se pueden crear objetos de
// tipo Persona directamente, solo de sus subclases (Estudiante,
// Profesor).
// ============================================================
#pragma once

#include <string>
using namespace std;

class Persona {
protected:
    // protected: las clases hijas (Estudiante, Profesor) pueden
    // acceder directamente a estos atributos; el resto del
    // programa no.
    string nombre;
    string cedula;

public:
    // Constructor por omision (sin parametros)
    Persona();

    // Constructor parametrizado
    Persona(string cedula, string nombre);

    // Destructor virtual: al ser "virtual", cuando se hace delete
    // sobre un puntero Persona* que en realidad apunta a un
    // Estudiante o Profesor, primero se destruye la subclase y
    // luego la superclase.
    virtual ~Persona();

    // Metodo virtual: puede ser sobrescrito por las subclases.
    // Si se llama a traves de un puntero Persona* que apunta a un
    // objeto Estudiante o Profesor, se ejecuta la version correcta
    // segun el tipo real del objeto (esto es polimorfismo).
    virtual string tostring();

    // Metodo virtual PURO ( = 0 ).
    // No tiene implementacion aqui: no existe una forma comun de
    // "calcular la carga" de una Persona en general, porque
    // depende de si es Estudiante (creditos matriculados) o
    // Profesor (horas que imparte). Por eso Persona es abstracta
    // y cada subclase esta OBLIGADA a implementar este metodo con
    // su propio criterio.
    virtual int calcularCarga() = 0;
};