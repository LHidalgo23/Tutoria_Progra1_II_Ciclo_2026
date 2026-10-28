// ============================================================================
// Archivo  : Punto.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de los métodos de la clase Punto que fue
//            declarada en Punto.h.
// ============================================================================

#include "Punto.h"   // Trae la declaración de la clase que vamos a implementar

// Constructor. En la lista de inicialización, y(y) significa:
// "el atributo y recibe el valor del parámetro y".
Punto::Punto(int y, int x) : y(y), x(x) {}

// Getter de y: devuelve la fila.
int Punto::getY() const {
	return y;
}

// Getter de x: devuelve la columna.
int Punto::getX() const {
	return x;
}

void Punto::setY(int y) {
	this->y = y;
}

void Punto::setX(int x) {
	this->x = x;
}

// Convierte el Punto a texto con el formato (y,x), el mismo orden que mat[y][x].
// Ejemplo: Punto(1,2) -> "(1,2)"
string Punto::toString() {
	stringstream ss;
	ss << "(" << y << "," << x << ")";
	return ss.str();
}