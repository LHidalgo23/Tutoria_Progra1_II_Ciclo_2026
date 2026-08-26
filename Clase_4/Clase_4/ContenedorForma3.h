#pragma once
#include "Persona.h"

// La longitud se establece en tiempo de compilacion pero los objetos van ser dinamicos,
// por que los creamos en tiempo de ejecucion
// Una flecha viendo a una persona.

class ContenedorForma3 { 
private:
    Persona* vec[20];   //Aquí la longitud del vector ya está dada y es de 20 posiciones..
    int cant;           //el vector carga solo objetos dinámicos (puntero-objto)
    int tam;
public:
    ContenedorForma3();
    virtual ~ContenedorForma3();

    
    bool ingresarPersona(Persona* ptr);
    bool eliminaPersona(int pos);
    bool existeCedula(string ced);
    Persona* mayorEdad();
    string toString();



};
