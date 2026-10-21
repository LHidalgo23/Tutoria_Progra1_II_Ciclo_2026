// ============================================================================
// Archivo  : Punto.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: Declara la clase Punto, que representa una posición (x, y).
//            En este proyecto se usa para devolver en qué posición de la
//            matriz se encontró una Persona:
//              x = número de fila,  y = número de columna.
//
// La implementación de los métodos está en Punto.cpp.
// ============================================================================

#pragma once   // Evita incluir este archivo más de una vez en la misma compilación

#include <sstream>    // stringstream: sirve para armar textos (toString)
#include <iostream>   // Entrada/salida estándar (cout, endl)

using namespace std;  // Permite escribir string, cout, endl sin el prefijo std::

class Punto {
  private:
    int x, y;                 // Coordenadas del punto (en la matriz: fila y columna)

  public:
    Punto(int x, int y);      // Constructor: recibe ambas coordenadas

    int getX() const;         // Getter de x ("const": no modifica el objeto)
    int getY() const;         // Getter de y ("const": no modifica el objeto)

    void setX(int x);         // Setter de x: cambia el valor de x
    void setY(int y);         // Setter de y: cambia el valor de y

    string toString();        // Devuelve el punto como texto, ej: "(0,3)"
};
