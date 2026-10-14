// ============================================================================
// Persona.cpp
// ----------------------------------------------------------------------------
// ARCHIVO DE IMPLEMENTACIÓN (.cpp): aquí está el código de cada método
// declarado en Persona.h. Cada método se escribe con el prefijo "Persona::"
// para indicarle al compilador que pertenece a esa clase.
// ============================================================================

#include"Persona.h"   // trae la declaración de la clase

// CONSTRUCTOR
// Recibe los datos y los guarda en los atributos usando una lista de
// inicialización (": cedula(ced), nombre(nom), edad(ed)"), que inicializa los
// atributos directamente al crear el objeto, en lugar de asignarlos en el
// cuerpo. Nota: aquí NO se repiten los valores por defecto (= "" y = 0).
Persona::Persona(string ced, string nom, int ed) : cedula(ced), nombre(nom), edad(ed) {}

// DESTRUCTOR
// Vacío, porque la clase no reserva memoria dinámica que deba liberar.
Persona::~Persona() {}

// ACCESORES
// Cada uno solo devuelve el valor del atributo correspondiente.
string Persona::getCedula() const { return cedula; }
string Persona::getNombre() const { return nombre; }
int Persona::getEdad() const { return edad; }

// MUTADORES.
// Cada uno recibe un valor nuevo y lo asigna al atributo correspondiente.
void Persona::setCedula(string c) { cedula = c; }
void Persona::setNombre(string n) { nombre = n; }
void Persona::setEdad(int e) { edad = e; }

// TOSTRING
// Arma el texto con los datos de la persona usando un stringstream
// (funciona igual que cout, pero en vez de imprimir en pantalla acumula el
// texto en memoria) y lo devuelve como string con s.str().
string Persona::toString() const {
    stringstream s;
    s << "Cedula = " << cedula << "     Nombre: " << nombre << "      Edad: " << edad << endl;
    return s.str();
}
