#include "Carro.h"
#include <sstream>

// Constructor

Carro::Carro(){
	annio = -1;
	valorFiscal = -1;
	marca = "sin marca";
	placa = -1;

}

Carro::Carro(int an, int val, string mar, int pl){
	annio = an;
	valorFiscal = val;
	marca = mar;
	placa = pl;
}

//Destructor
Carro::~Carro(){}

//Getters
int Carro::getAnnio(){
	return annio;
}
int Carro::getValorFiscal() {
	return valorFiscal;
}
string Carro::getMarca() {
	return marca;
}
int Carro::getPlaca() {
	return placa;
}

//Setters
void Carro::setAnnio(int ann) {
	annio = ann;
}
void Carro::setValorFiscal(int valFis) {
	valorFiscal = valFis;
}
void Carro::setMarca(string mar) {
	marca = mar;
}
void Carro::setPlaca(int pl){
	placa=pl;
}


//ToString
string Carro::toString(){
	stringstream ss;
	ss << "------------Carro----------" << endl;
	ss << "Annio: " << annio << endl;
	ss << "Valor Fiscal: " << valorFiscal << endl;
	ss << "Marca: " << marca << endl;
	ss<< "Placa:" << placa <<endl;
	return ss.str();

}

//Metodos_extras

string Carro::restriccion(int placa){
	int ultimoDigito = placa % 10;

	switch (ultimoDigito) {
	case 1:
	case 2:
		return "Lunes";
	case 3:
	case 4:
		return "Martes";
	case 5:
	case 6:
		return "Miercoles";
	case 7:
	case 8:
		return "Jueves";
	case 9:
	case 0:
		return "Viernes";
	default:
		return "Placa no existe o no esta registrada";
	}
}

