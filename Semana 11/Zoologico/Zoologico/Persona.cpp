// ============================================================
// Persona.cpp
// Implementacion de los metodos de la clase Persona.
// ============================================================
#include "Persona.h"

// Constructor por omision: inicializa los atributos vacios
Persona::Persona() {
    cedula = "";
    nombre = "";
}

// Constructor parametrizado: recibe cedula y nombre y los asigna
Persona::Persona(string cedula, string nombre) {
    this->cedula = cedula;
    this->nombre = nombre;
}

// Destructor: no hay memoria dinamica que liberar aqui, pero debe
// existir e implementarse (es virtual).
Persona::~Persona() {}

// Nota: toString() NO se implementa aqui porque es un metodo
// virtual puro (= 0). Cada subclase le da su propio cuerpo e
// imprime tambien la cedula y el nombre, que son protected.
