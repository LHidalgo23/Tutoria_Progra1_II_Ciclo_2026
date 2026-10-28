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

// Propósito: Declara la clase Punto, que representa una posición en la matriz.
//            Se escribe en el mismo orden que mat[fila][columna]:
//              y = número de fila    (eje vertical, crece hacia abajo)
//              x = número de columna (eje horizontal, crece hacia la derecha)
//            Ejemplo: la Persona en mat[1][2] es el Punto(1,2): y=1, x=2.

class Punto {
private:
    int y, x;                 // y = fila, x = columna

public:
    Punto(int y, int x);      // Constructor: primero la fila (y), luego la columna (x)

    int getY() const;         // Getter de y (la fila)
    int getX() const;         // Getter de x (la columna)

    void setY(int y);         // Setter de y
    void setX(int x);         // Setter de x

    string toString();        // Devuelve el punto como texto "(y,x)", ej: "(1,2)"
};
