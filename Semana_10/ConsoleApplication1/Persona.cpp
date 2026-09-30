// ============================================================
// Persona.cpp
// Implementacion de los metodos de la clase Persona.
// ============================================================
#include "Persona.h"
#include <sstream>
using namespace std;

// Constructor por omision: inicializa los atributos vacios
Persona::Persona() {
    cedula = "";
    nombre = "";
}

// Constructor parametrizado: recibe cedula y nombre y los asigna
Persona::Persona(string cedula, string nombre) {
    this->nombre = nombre;
    this->cedula = cedula;
}

// Destructor: no hace nada especial, pero debe existir e implementarse
Persona::~Persona() {}

// tostring(): arma un string con los datos basicos de la persona.
// Las subclases llaman a este metodo con Persona::tostring() y le
// agregan sus propios atributos.
string Persona::tostring() {
    stringstream s;
    s << "Nombre: " << nombre << endl;
    s << "Cedula: " << cedula << endl;
    return s.str();
}

// Nota: calcularCarga() NO se implementa aqui porque es un metodo
// virtual puro (= 0), definido solo en el .h. Cada subclase debe
// darle su propia implementacion, con su propio significado de
// "carga".