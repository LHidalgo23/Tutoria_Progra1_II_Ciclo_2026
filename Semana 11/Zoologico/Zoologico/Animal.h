// ============================================================
// Animal.h
// Clase base ABSTRACTA de los animales del zoologico.
// Es abstracta porque tiene un metodo virtual puro
// (hacerSonido):
// cada animal hace un sonido distinto y no existe un sonido
// comun para un "Animal" en general.
// ============================================================
#pragma once

#include <string>
using namespace std;

class Animal {
protected:
    // protected: las subclases pueden usar estos atributos
    int codigo;
    double peso;

public:
    // Constructor por omision (sin parametros)
    Animal();

    // Constructor parametrizado
    Animal(int codigo, double peso);

    // Destructor virtual (necesario para borrar subclases a
    // traves de un puntero Animal*)
    virtual ~Animal();

    // Metodo virtual NO puro: tiene implementacion en Animal
    // (codigo y peso). Las subclases lo sobrescriben, llaman a
    // Animal::toString() y le agregan su atributo propio.
    virtual string toString();

    // Metodo virtual PURO ( = 0 ): cada subclase devuelve el
    // sonido que hace su animal. Aqui se ve el polimorfismo:
    // la misma llamada produce un resultado distinto segun el
    // tipo real del objeto.
    virtual string hacerSonido() = 0;
};
