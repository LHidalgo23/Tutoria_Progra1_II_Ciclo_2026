#pragma once
#include <sstream>
#include <iostream>

using namespace std;
class Persona{

private:
	string nombre;
	int edad;

public:
	Persona();
	Persona(string nom,int ed);
	virtual~Persona();

	int getEdad();
	string getNombre();

	void setEdad(int ed);
	void setNombre(string nom);


	string toString() {
		stringstream ss;
		ss << "Nombre: " << nombre << "  " << " Edad:" << edad << endl;
		return ss.str();
	}


};

