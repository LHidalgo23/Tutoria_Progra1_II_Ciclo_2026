// ============================================================
// Persona.h
// Clase base ABSTRACTA de las personas del zoologico.
// Es abstracta porque tiene un metodo virtual puro
// (toString),
// por lo tanto no se pueden crear objetos de tipo Persona
// directamente, solo de sus subclases (Visitante,
// Veterinario,
// Cuidador).
// ============================================================
#pragma once

#include <string>
using namespace std;

class Persona {
protected:
    // protected: las clases hijas pueden acceder directamente a
    // estos atributos; el resto del programa no.
    string cedula;
    string nombre;

public:
    // Constructor por omision (sin parametros)
    Persona();

    // Constructor parametrizado
    Persona(string cedula, string nombre);

    // Destructor virtual: cuando se hace delete sobre un puntero
    // Persona* que en realidad apunta a un Visitante, Veterinario
    // o Cuidador, primero se destruye la subclase y luego la
    // superclase. Sin "virtual" la parte de la subclase no se
    // destruiria correctamente.
    virtual ~Persona();

    // Metodo virtual PURO ( = 0 ).
    // No tiene implementacion en Persona: cada subclase esta
    // OBLIGADA a implementarlo con sus propios datos.
    virtual string toString() = 0;
};
