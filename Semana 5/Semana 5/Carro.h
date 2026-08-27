#pragma once

#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
	int annio;
	int valorFiscal;
	string marca;
	int placa;

public:
	// Constructor
	Carro();
	Carro(int an, int val, string mar, int pl);

	//Destructor
	virtual~Carro();

	//Getters
	int getAnnio();
	int getValorFiscal();
	string getMarca();
	int getPlaca();

	//Setters
	void setAnnio(int ann);
	void setValorFiscal(int valFis);
	void setMarca(string mar);
	void setPlaca(int pl);


	//ToString
	string toString();

	//Metodos_extras

	string restriccion(int placa);



};