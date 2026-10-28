// ============================================================================
// Archivo  : Persona.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: Declara la clase BASE Persona. Ahora es una clase POLIMÓRFICA:
//            tiene métodos virtuales que las clases hijas (Estudiante y
//            Profesor) pueden redefinir (override).
//
// ¿QUÉ ES EL POLIMORFISMO?
//   "Muchas formas": un mismo mensaje (ej: p->toString()) produce un
//   comportamiento distinto según el tipo REAL del objeto al que apunta p,
//   aunque p esté declarado como Persona*.
//
//   Persona* p = new Estudiante("Ana", 95);
//   p->toString();   // Ejecuta Estudiante::toString(), NO Persona::toString()
//
// ¿CÓMO SE IMPLEMENTA EN C++?  Se necesitan 3 cosas:
//   1. Herencia pública        : class Estudiante : public Persona
//   2. Métodos virtual en la base (y override en las hijas)
//   3. Usar PUNTEROS (o referencias) a la clase base: Persona*
//      Si se guarda por valor (Persona p = Estudiante(...)) ocurre "slicing":
//      el objeto se "rebana" y queda solo la parte Persona.
//
// Por dentro: cada clase con métodos virtuales tiene una tabla (vtable) con
// las direcciones de sus métodos; cada objeto guarda un puntero oculto (vptr)
// a la tabla de SU clase. Así, en tiempo de ejecución se sabe cuál llamar
// (enlace dinámico / late binding).
// ============================================================================

#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Persona {
protected:               // protected (antes private): las clases hijas
    string nombre;         // pueden usar 'nombre' directamente

public:
    Persona();
    Persona(string n);

    // DESTRUCTOR VIRTUAL: OBLIGATORIO en una clase base polimórfica.
    // Si no es virtual, al hacer  delete p;  con  Persona* p = new Estudiante
    // solo se ejecutaría ~Persona() y la parte de Estudiante no se destruye.
    virtual ~Persona();

    string getNombre();

    // Métodos VIRTUALES: cada hija puede dar su propia versión.
    virtual string toString();   // La respuesta puede ser es que no tiene un metodo puro
    virtual string getTipo();    // "Persona", "Estudiante" o "Profesor"
};
