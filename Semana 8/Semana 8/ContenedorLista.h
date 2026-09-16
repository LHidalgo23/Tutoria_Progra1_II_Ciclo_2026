#pragma once
#include "Nodo.h"


class ContenedorLista{

private:
	Nodo* dummy; //Aqui ya incluida la persona

public: 
	ContenedorLista();
	ContenedorLista(Nodo* );

	bool estaVacia();
	int tamannio();

	string toString();

	void insertarPrimero(Nodo*);
	void insertarMedio(Nodo*);
	void insertarFinal(Nodo*);

	void borrarPorNombre(string);


};

