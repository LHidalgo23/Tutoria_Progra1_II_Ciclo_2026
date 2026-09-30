// ============================================================
// Estudiante.cpp
// Implementacion de los metodos de la clase Estudiante.
// ============================================================
#include "Estudiante.h"
#include <sstream>
using namespace std;

// Constructor por omision de Estudiante.
// ":Persona()" invoca explicitamente el constructor por omision
// de la superclase antes de ejecutar el cuerpo de este constructor.
Estudiante::Estudiante() : Persona() {
    edad = 0;
    creditosMatriculados = 0;
}

// Constructor parametrizado.
// ":Persona(cedula, nombre)" delega en la superclase la
// inicializacion de nombre y cedula; aqui solo falta inicializar
// los atributos propios (edad y creditos).
Estudiante::Estudiante(string cedula, string nombre, int edad, int creditos) : Persona(cedula, nombre) {
    this->edad = edad;
    this->creditosMatriculados = creditos;
}

Estudiante::~Estudiante() {}

// tostring() sobrescrito: primero reutiliza el texto que genera
// Persona::tostring() (nombre + cedula) y le concatena la edad.
string Estudiante::tostring() {
    stringstream s;
    s << Persona::tostring();
    s << "Edad: " << edad << endl;
    return s.str();
}

// Implementacion del metodo virtual puro heredado de Persona.
// Para un Estudiante, la carga academica es la cantidad de
// creditos que tiene matriculados.
int Estudiante::calcularCarga() {
    return creditosMatriculados;
}