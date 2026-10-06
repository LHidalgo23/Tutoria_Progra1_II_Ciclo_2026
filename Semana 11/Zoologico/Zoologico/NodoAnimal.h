// ============================================================
// NodoAnimal.h
// Nodo concreto que hereda de Nodo y guarda un Animal*.
// Al ser Animal*, puede apuntar a cualquiera de los seis
// animales sin que el nodo sepa cual es (polimorfismo).
// ============================================================
#pragma once

#include "Nodo.h"
#include "Animal.h"
#include <string>
using namespace std;

class NodoAnimal : public Nodo {
private:
    // Aqui vive el dato real.
    Animal* animal;

public:
    // Recibe el puntero al objeto que va a guardar. El nodo pasa a
    // ser DUENO de ese objeto: lo libera en su destructor.
    NodoAnimal(Animal* animal);
    ~NodoAnimal();

    Animal* getAnimal();

    // Implementacion obligatoria del metodo virtual puro de Nodo.
    string imprimir() override;
};
