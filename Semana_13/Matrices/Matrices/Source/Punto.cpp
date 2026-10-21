// ============================================================================
// Archivo  : Punto.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de los métodos de la clase Punto que fue
//            declarada en Punto.h.
// ============================================================================

#include "Punto.h"   // Trae la declaración de la clase que vamos a implementar

// Constructor.
// Los parámetros se llaman igual que los atributos (x, y). En la lista de
// inicialización  x(x)  significa: "el atributo x recibe el valor del
// parámetro x".
Punto::Punto(int x, int y) : x(x), y(y) {}

// Getter de x: devuelve la coordenada x (en la matriz, la fila).
// El const al final indica que este método no modifica el objeto.
int Punto::getX() const {
  return x;
}

// Getter de y: devuelve la coordenada y (en la matriz, la columna).
int Punto::getY() const {
  return y;
}

// Setter de x.
// Como el parámetro y el atributo se llaman igual, se usa this->x para
// referirse al ATRIBUTO del objeto y x (sola) para el PARÁMETRO.
void Punto::setX(int x) {
  this->x = x;
}

// Setter de y (misma idea que setX).
void Punto::setY(int y) {
  this->y = y;
}

// Convierte el Punto a texto con el formato (x,y).
// Ejemplo: Punto(0,3) -> "(0,3)"
string Punto::toString() {
  stringstream ss;
  ss << "(" << x << "," << y << ")";
  return ss.str();
}
