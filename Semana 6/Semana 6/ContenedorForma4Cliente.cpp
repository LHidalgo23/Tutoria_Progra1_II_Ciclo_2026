#include "ContenedorForma4Cliente.h"

//--------------------------------------------------------------------------------------------------
// constructor y destructor
ContenedorForma4Cliente::ContenedorForma4Cliente(int tama) {
	vec = new Cliente * [tama];
	tam = tama;
	cant = 0;
}

ContenedorForma4Cliente::~ContenedorForma4Cliente() {
	// Primero se destruyen todos los objetos dinamicos que tiene el vector.
	for (int i = 0; i < cant; i++)
		delete vec[i];
	delete[] vec;   // borro el vector vec, creado con un new (de manera dinamica).
}

//--------------------------------------------------------------------------------------------------
// metodos para agregar y eliminar
bool ContenedorForma4Cliente::ingresarCliente(Cliente* ptr) {
	if (cant < tam) {
		vec[cant++] = ptr;
		return true;
	}
	else
		return false;
}

bool ContenedorForma4Cliente::eliminarCliente(int pos) {
	if (pos >= 0 && pos < cant) {  // Validamos que la posicion exista dentro de lo que hay ingresado.
		delete vec[pos];  // Liberamos la memoria del cliente antes de perder la referencia a el.
		for (int i = pos; i < cant - 1; i++) {
			vec[i] = vec[i + 1];
		}
		vec[cant - 1] = NULL;  // Limpiamos la ultima posicion que quedo "duplicada".
		cant--;  // Disminuimos la cantidad de clientes que hay en el contenedor.
		return true;
	}
	return false;  // La posicion no es valida.
}

//--------------------------------------------------------------------------------------------------
// metodos de busqueda
bool ContenedorForma4Cliente::existeCedula(string ced) {
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getCedula() == ced)
			return true;  // Ya existe un cliente con esa cedula.
	}
	return false;  // No se encontro, la cedula esta disponible.
}

Cliente* ContenedorForma4Cliente::mayorEdad() {
	if (cant == 0) return NULL;  // No hay clientes ingresados, no hay a quien devolver.
	Cliente* mayor = vec[0];  // Asumimos que el primero es el de mayor edad.
	for (int i = 1; i < cant; i++) {
		if (vec[i]->getEdad() > mayor->getEdad()) {
			mayor = vec[i];
		}
	}
	return mayor;
}

//--------------------------------------------------------------------------------------------------
// metodos para retornar informacion
int ContenedorForma4Cliente::getCant() {
	return cant;
}

string ContenedorForma4Cliente::toString() {
	stringstream ss;
	ss << "------Listado de clientes-----" << endl;
	for (int i = 0; i < cant; i++)
		ss << vec[i]->toString() << endl;
	return ss.str();
}