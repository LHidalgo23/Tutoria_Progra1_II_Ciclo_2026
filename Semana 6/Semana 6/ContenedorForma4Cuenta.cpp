#include "ContenedorForma4Cuenta.h"

//--------------------------------------------------------------------------------------------------
// constructor y destructor
ContenedorForma4Cuenta::ContenedorForma4Cuenta(int tama) {
	vec = new Cuenta * [tama];
	tam = tama;
	cant = 0;
}

ContenedorForma4Cuenta::~ContenedorForma4Cuenta() {
	// Primero se destruyen todos los objetos dinamicos que tiene el vector.
	for (int i = 0; i < cant; i++)
		delete vec[i];
	delete[] vec;   // borro el vector vec, creado con un new (de manera dinamica).
}

//--------------------------------------------------------------------------------------------------
// metodos para agregar y eliminar
bool ContenedorForma4Cuenta::ingresarCuenta(Cuenta* ptr) {
	if (cant < tam) {
		vec[cant++] = ptr;
		return true;
	}
	else
		return false;
}

bool ContenedorForma4Cuenta::eliminarCuenta(int pos) {
	if (pos >= 0 && pos < cant) {  // Validamos que la posicion exista dentro de lo que hay ingresado.
		delete vec[pos];  // Liberamos la memoria de la cuenta antes de perder la referencia a ella.
		for (int i = pos; i < cant - 1; i++) {
			vec[i] = vec[i + 1];
		}
		vec[cant - 1] = NULL;  // Limpiamos la ultima posicion que quedo "duplicada".
		cant--;  // Disminuimos la cantidad de cuentas que hay en el contenedor.
		return true;
	}
	return false;  // La posicion no es valida.
}

//--------------------------------------------------------------------------------------------------
// metodos de busqueda
bool ContenedorForma4Cuenta::existeId(int id) {
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getId() == id)
			return true;  // Ya existe una cuenta con ese id.
	}
	return false;  // No se encontro, el id esta disponible.
}

Cuenta* ContenedorForma4Cuenta::buscarPorId(int id) {
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getId() == id)
			return vec[i];  // Se encontro la cuenta, se devuelve el puntero real (no una copia).
	}
	return NULL;  // No existe ninguna cuenta con ese id.
}

//--------------------------------------------------------------------------------------------------
// metodos para retornar informacion
int ContenedorForma4Cuenta::getCant() {
	return cant;
}

string ContenedorForma4Cuenta::toString() {
	stringstream ss;
	ss << "------Listado de cuentas-----" << endl;
	for (int i = 0; i < cant; i++)
		ss << vec[i]->toString() << endl;
	return ss.str();
}