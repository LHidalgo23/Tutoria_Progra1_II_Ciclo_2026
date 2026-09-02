#pragma once
#include "Cliente.h"

class ContenedorForma4Cliente {
private:
	Cliente** vec;
	int tam;
	int cant;

public:
	//--------------------------------------------------------------------------------------------------
	// constructor y destructor
	ContenedorForma4Cliente(int tama);

	virtual ~ContenedorForma4Cliente();

	//--------------------------------------------------------------------------------------------------
	// metodos para agregar y eliminar
	bool ingresarCliente(Cliente* ptr);

	bool eliminarCliente(int pos);  // Elimina el cliente que esta en la posicion "pos" del vector.

	//--------------------------------------------------------------------------------------------------
	// metodos de busqueda
	bool existeCedula(string ced);

	Cliente* mayorEdad();  // Devuelve un puntero al cliente con mayor edad del contenedor.

	//--------------------------------------------------------------------------------------------------
	// metodos para retornar informacion
	int getCant();

	string toString();
};