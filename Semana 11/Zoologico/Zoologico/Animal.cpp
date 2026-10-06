// ============================================================
// Animal.cpp
// Implementacion de los metodos de la clase Animal.
// ============================================================
#include "Animal.h"
#include <sstream>

// Constructor por omision: inicializa los atributos en cero
Animal::Animal() {
    codigo = 0;
    peso = 0.0;
}

// Constructor parametrizado: recibe codigo y peso y los asigna
Animal::Animal(int codigo, double peso) {
    this->codigo = codigo;
    this->peso = peso;
}

Animal::~Animal() {}

// toString(): arma un string con los datos comunes del animal.
// Las subclases llaman a este metodo con Animal::toString() y le
// agregan sus propios atributos.
string Animal::toString() {
    stringstream s;
    s << "Codigo: " << codigo << endl;
    s << "Peso: " << peso << endl;
    return s.str();
}

// Nota: hacerSonido() NO se implementa aqui porque es un metodo
// virtual puro (= 0). Cada subclase debe darle su propio cuerpo.
