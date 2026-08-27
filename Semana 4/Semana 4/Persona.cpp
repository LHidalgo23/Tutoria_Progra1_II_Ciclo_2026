#include "Persona.h"

Persona::Persona() {
    cedula = "---";
    nombre = "---";
    edad = -1;
}
Persona::Persona(string ced, string nom, int ed) {
    cedula = ced;
    nombre = nom;
    edad = ed;
}
Persona:: ~Persona() {}

// ACCESORES Y MUTADORES  (GET'S Y SET´S).
int Persona::getEdad() {
    return edad;
}
string Persona::getCedula() { return cedula; }

void Persona::setCedula(string ced) {
    cedula = ced;
}
void Persona::setNombre(string nom) {
    nombre = nom;
}
void Persona::setEdad(int ed) {
    edad = ed;
}

string Persona::toString() {
    stringstream s;
    s << "Cedula: " << cedula << " --> " << nombre << "  " << edad << endl;
    return s.str();
}
