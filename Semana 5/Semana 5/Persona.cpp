#include "Persona.h"


Persona::Persona() {
	nombre = "sin nombre";
	edad = -1;
	provincia = "sin provincia";
	miCarro = nullptr;
}

Persona::Persona(string nom, int ed, string prov) {
	nombre = nom;
	edad = ed;
	provincia = prov;
	miCarro = nullptr;
}

// El destructor de Persona NO borra miCarro.
// Esa es la prueba de que es asociacion y no composicion:
// el carro sigue vivo aunque la persona desaparezca.
Persona::~Persona() {
	cout << "Destruyendo persona " << nombre << " (el carro sigue vivo)" << endl;
}

string Persona::getNombre() { return nombre; }
int Persona::getEdad() { return edad; }
string Persona::getProvincia() { return provincia; }

void Persona::setNombre(string nom) { nombre = nom; }
void Persona::setEdad(int ed) { edad = ed; }
void Persona::setProvincia(string prov) { provincia = prov; }

void Persona::asignarCarro(Carro* c) { miCarro = c; }
Carro* Persona::getCarro() { return miCarro; }

string Persona::toString() {
	stringstream ss;
	ss << "------------Persona----------" << endl;
	ss << "Nombre: " << nombre << endl;
	ss << "Edad: " << edad << endl;
	ss << "Provincia: " << provincia << endl;
	ss << "Tiene carro: " << (miCarro != nullptr ? "si" : "no") << endl;
	return ss.str();
}

bool Persona::esMayordeEdad() {
	return edad >= 18;
}