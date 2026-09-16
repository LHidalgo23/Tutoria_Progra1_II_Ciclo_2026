#include "ContenedorLista.h"

ContenedorLista::ContenedorLista(){
	dummy = new Nodo();
}

ContenedorLista::ContenedorLista(Nodo* nodoNuevo){
	dummy = new Nodo(); //Se crea el ancla
	dummy->setSiguiente(nodoNuevo); //Siguiente vea siguiente
}

bool ContenedorLista::estaVacia(){
	return dummy->getSiguiente() == nullptr;
}


int ContenedorLista::tamannio() {
	Nodo* ptr = dummy;
	int sumador = 0;

	while (ptr->getSiguiente() != nullptr) {  //Mientas que el siguiente sea distinto a nullptr
		sumador++;
		ptr = ptr->getSiguiente();
	}
	return sumador;
}

string ContenedorLista::toString(){
	Nodo* ptr = dummy; //Ancla
	stringstream s;
	s << "Lista enlazada" << endl;
	while (ptr->getSiguiente() != nullptr) {
		ptr = ptr->getSiguiente(); //Esto es para moverse en las listas
		s << ptr->getPersona()->toString() << endl;
	}

	return s.str();
}

void ContenedorLista::insertarPrimero(Nodo* nodo){
	Nodo* ptr = dummy->getSiguiente();
	dummy->setSiguiente(nodo);
	nodo->setSiguiente(nullptr);
}
void ContenedorLista::insertarMedio(Nodo* a) {
	int mitad = (tamannio() + 1) / 2;
	Nodo* ptr = dummy;
	while (mitad > 0) {
		ptr = ptr->getSiguiente();
		mitad--;
	}
	Nodo* p = ptr->getSiguiente();
	ptr->setSiguiente(a);
	a->setSiguiente(p);
}

void ContenedorLista::insertarFinal(Nodo* a) {
	Nodo* ptr = dummy;

	while (ptr->getSiguiente() != nullptr) {
		ptr = ptr->getSiguiente(); //Pegar brincos en las listas
	}

	//Cuando ya termine el while vamos estar 
	// posicionados al final de la lista
	ptr->setSiguiente(a); //a Sofia
	a->setSiguiente(nullptr);
}

void ContenedorLista::borrarPorNombre(string a) {
	Nodo* ptr = dummy;
	Nodo* temp = nullptr;
	while (ptr->getSiguiente() != nullptr) {
		if (ptr->getSiguiente()->getPersona()->getNombre() == a) {//Si el siguiente tiene el mismo nombre
			temp = ptr->getSiguiente();// Guarda el nodo a eliminar.
			ptr->setSiguiente(temp->getSiguiente());
			delete temp;
		}
		else
			ptr = ptr->getSiguiente();
	}
}
