#pragma once
#include "Persona.h"

// Contenedor forma 2
// El tamano del vector se da en tiempo de ejecucion, nosotros lo asignamos cuando tenemos la pantalla en negra.
// Aun guarda objetos automaticos.

class ContenedorForma2 {
private:
    Persona* vec;      // vec es un puntero (flecha), no es un vector... (hay que hacerlo en el constructor).
    int cant;
    int tam;
public:
    ContenedorForma2(int n);  // El constructor le ingresa por parámetro la longitud que va a tener el vector..

    virtual ~ContenedorForma2();
    bool ingresarPersona();
    bool eliminaPersona(int pos);
    Persona mayorEdad();
    string toString();


};

