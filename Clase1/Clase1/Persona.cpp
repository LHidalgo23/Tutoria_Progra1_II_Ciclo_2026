#include "Persona.h"
#include <sstream>

//La definicion de la clase Persona

//Constructor sin parametros
Persona::Persona() {
	nombre = "sin nombre";
	edad = -1;
	provincia = "sin provincia";
}


//Constructor con parametros
Persona::Persona(string nom, int ed, string prov) {
	nombre = nom;
	edad = ed;
	provincia = prov;
}


//Destructor
Persona::~Persona(){}

//Getters
string Persona::getNombre() {
	return nombre;
}
int Persona::getEdad() {
	return edad;
}
string Persona::getProvincia() {
	return provincia;
}

//Setters
void Persona::setNombre(string nom) {
	nombre = nom;
}

void Persona::setEdad(int ed) {
	edad = ed;
}
void Persona::setProvincia(string prov) {
	provincia = prov;
}

//Mostrar los datos de la persona
string Persona::toString() {
	stringstream ss;
	ss << "------------Persona----------" << endl;
	ss << "Nombre: " << nombre << endl;
	ss << "Edad: " << edad << endl;
	ss << "Provincia: " << provincia << endl;

	return ss.str();
}
