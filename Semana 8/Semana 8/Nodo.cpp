#include "Nodo.h"

//Constructores
Nodo::Nodo(Persona* per){
	siguiente = nullptr;
	persona = per;

}
Nodo::Nodo(Nodo* node, Persona* per){
	siguiente = node;
	persona = per;
}

Nodo::Nodo(){
	siguiente = nullptr;
	persona = nullptr;
}

//Destructor
Nodo::~Nodo(){
	if (persona!=nullptr) {
		delete persona;
	}
}

//Accesores y mutadores
Nodo* Nodo::getSiguiente(){
	return siguiente;
}
void Nodo::setSiguiente(Nodo* sig){
	siguiente = sig;
}

Persona* Nodo::getPersona(){
	return persona;
}
