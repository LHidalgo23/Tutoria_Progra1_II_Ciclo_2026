#pragma once

#include <iostream>
using namespace std;

// Declaracion de la clase Persona
// Es una interfaz que define los atributos y metodos de una persona

class Persona {
	//Atributos
private:
	string nombre;
	int edad;
	string provincia;

public:
	//Constructor sin parametros
	Persona();
	//Constructor con parametros
	Persona(string nom, int ed, string prov);
	//Destructor
	virtual ~Persona();

	//Getters
	string getNombre();
	int getEdad();
	string getProvincia();

	//Setters
	void setNombre(string nom);
	void setEdad(int ed);
	void setProvincia(string prov);

	//Mostrar los datos de la persona
	string toString();

	//Metodos extras
	bool esMayordeEdad();
	string primeraLetradelaProvincia();




};


