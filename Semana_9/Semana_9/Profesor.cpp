// ============================================================
// Profesor.cpp
// Implementacion de los metodos de la clase Profesor.
// ============================================================
#include "Profesor.h"
#include <sstream>
using namespace std;

// Constructor por omision: delega en el constructor por omision
// de Persona y luego inicializa titulo vacio y horasClase en 0.
Profesor::Profesor() : Persona() {
    titulo = "";
    horasClase = 0;
}

// Constructor parametrizado: delega en Persona(cedula, nombre)
// para los atributos heredados, y aqui se asignan titulo y
// horasClase, que son propios de Profesor.
Profesor::Profesor(string cedula, string nombre, string titulo, int horasClase) : Persona(cedula, nombre) {
    this->titulo = titulo;
    this->horasClase = horasClase;
}

Profesor::~Profesor() {}

// tostring() sobrescrito: reutiliza Persona::tostring() y le
// concatena el titulo del profesor.
string Profesor::tostring() {
    stringstream s;
    s << Persona::tostring();
    s << "Titulo: " << titulo << endl;
    return s.str();
}

// Implementacion del metodo virtual puro heredado de Persona.
// Para un Profesor, la carga academica es la cantidad de horas
// de clase que imparte (un concepto distinto al de "creditos"
// que usa Estudiante, aunque el metodo se llame igual).
int Profesor::calcularCarga() {
    return horasClase;
}
