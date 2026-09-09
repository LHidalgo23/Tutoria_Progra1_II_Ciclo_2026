#pragma once
#include <iostream>
#include <string>
#include <sstream> //sirve para el to string

using namespace std;

class Fecha{

private: 
	int dia;
	int mes;
	int anio;
public: 
	Fecha(); //Constructor
	Fecha(int dia, int mes, int anio); //Constructor con parametros, parametrizado
	virtual ~Fecha(); // Destructor

	//Get es para obtener
	int getDia();
	int getMes();
	int getAnio();

	//Set es para modificar
	void setDia(int dia);
	void setMes(int mes);
	void setAnio(int anio);

	bool esAntesDe(Fecha* otra);

	string toString();


};

