#pragma once
#include <string>
#include <sstream>
using namespace std;

class Cliente {
private:
	string nombre;
	string cedula;
	int edad;

public:
	//--------------------------------------------------------------------------------------------------
	// constructor y destructor
	Cliente(string nombre, string cedula, int edad);

	virtual ~Cliente();

	//--------------------------------------------------------------------------------------------------
	// accesores (getters)
	string getNombre();

	string getCedula();

	int getEdad();

	//--------------------------------------------------------------------------------------------------
	// mutadores (setters)
	void setNombre(string nombre);

	void setCedula(string cedula);

	void setEdad(int edad);

	//--------------------------------------------------------------------------------------------------
	// otros metodos
	string toString();
};