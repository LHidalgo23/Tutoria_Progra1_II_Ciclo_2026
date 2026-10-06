// ============================================================
// NodoAnimal.cpp
// ============================================================
#include "NodoAnimal.h"

NodoAnimal::NodoAnimal(Animal* animal) : Nodo() {
    this->animal = animal;
}

// Libera el objeto que el nodo guarda. Como el destructor de
// Animal es virtual, se destruye la subclase real y luego
// la superclase. Esto evita fugas de memoria.
NodoAnimal::~NodoAnimal() {
    delete animal;
}

Animal* NodoAnimal::getAnimal() {
    return animal;
}

// Aqui se ve el polimorfismo del animal: toString() y
// hacerSonido() se llaman sobre un Animal*, y se ejecuta la
// version del animal real (OsoPolar, Delfin, Camello...).
string NodoAnimal::imprimir() {
    return animal->toString() + "Sonido: " + animal->hacerSonido() + "\n";
}
