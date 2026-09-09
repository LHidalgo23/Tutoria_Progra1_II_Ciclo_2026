#pragma once
#include "Producto.h"


class Supermercado{
private:
	Producto** vec;
	int cant;
	int tam;

    // Busca el indice de un producto por codigo; -1 si no existe
    int buscarIndice(string codigo);

public:

	Supermercado(int tamMax);
	virtual ~Supermercado();

    // 2. Verificar existencia de un producto
	bool existeProducto(string codigo);

    // 3. Ingresar producto (sin duplicados)
    bool ingresarProducto(Producto* p);

    // 4a. Cantidad de productos expirados dada una fecha de referencia
    int cantidadExpirados(Fecha* referencia);

    // 4b. Imprimir todos los productos expirados
    string listarExpirados(Fecha* referencia);

    // 5. Total invertido (suma de precioBase * existencia de todos)
    double totalInvertido();

    // 6. Ganancias totales en una fecha (no cuenta expirados)
    double totalGanancias(Fecha* referencia);

    // 7a. Cambiar la fecha final del IVA de un producto
    bool cambiarFechaIva(string codigo, Fecha* nuevaFecha);

    //// 7b. Cambiar el porcentaje del IVA de un producto existente
    bool cambiarPorcentajeIva(string codigo, double nuevoPorcentaje);

    string toString();


};

