#pragma once
#include "Fecha.h"

class IVA{
private://Atributos
	double porcentaje;
	Fecha* fechaFin;
public://Metodos
	IVA();
	IVA(double porcentaje, Fecha* fechaFin);
	virtual ~IVA();

	double getPorcentaje();
	Fecha* getFechaFin();

	void setPorcentaje(double porcentaje);
	void setFechaFin(Fecha* nuevaFecha);

	string toString();

};

