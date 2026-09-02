#pragma once
#include "Cuenta.h"

class ContenedorForma4Cuenta {
private:
	Cuenta** vec;
	int tam;
	int cant;

public:
	//--------------------------------------------------------------------------------------------------
	// constructor y destructor
	ContenedorForma4Cuenta(int tama);

	virtual ~ContenedorForma4Cuenta();

	//--------------------------------------------------------------------------------------------------
	// metodos para agregar y eliminar
	bool ingresarCuenta(Cuenta* ptr);

	bool eliminarCuenta(int pos);  // Elimina la cuenta que esta en la posicion "pos" del vector.

	//--------------------------------------------------------------------------------------------------
	// metodos de busqueda
	bool existeId(int id);

	Cuenta* buscarPorId(int id);  // Devuelve el puntero a la cuenta con ese id, o NULL si no existe.

	//--------------------------------------------------------------------------------------------------
	// metodos para retornar informacion
	int getCant();

	string toString();
};