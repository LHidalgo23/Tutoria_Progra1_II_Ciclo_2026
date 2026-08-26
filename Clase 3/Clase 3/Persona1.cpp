#include "Persona1.h"

Persona1::Persona1() {
    nombre = "Sin nombre";
}

Persona1::Persona1(string nom) {
    nombre = nom;
}
Persona1::~Persona1() {}


//Accesores y mutadores

//Sirve para obtener los datos fuera de la clase.
string Persona1::getNombre() { return nombre; }


//Sirve para modificar los datos fuera de la clase.
void Persona1::setNombre(string nom) { nombre = nom; }
