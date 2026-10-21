// ============================================================================
// Archivo  : ContenedorMatD.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: FORMA D de contenedor matricial (la que usa Main.cpp).
//            Matriz DINÁMICA de PUNTEROS a Persona, con tamaño definido en
//            tiempo de ejecución.
//
//            Persona ***mat   (triple puntero)
//              - mat apunta a un arreglo de filas.
//              - Cada fila es un arreglo de punteros a Persona.
//              - Cada celda guarda la dirección de una Persona, o nullptr si
//                está vacía.
//
//            Esquema (ejemplo 2 filas x 3 columnas):
//              mat --> [ fila0 ] --> [ * ][ * ][ * ]   cada * apunta a una Persona
//                      [ fila1 ] --> [ * ][ * ][ * ]   (o es nullptr si está vacía)
//
//            Además de guardar, esta clase permite insertar, mostrar y buscar.
//
// La implementación está en ContenedorMatD.cpp.
// ============================================================================

#pragma once   // Evita incluir este archivo más de una vez en la misma compilación

#include "Persona.h"   // La matriz guarda punteros a Persona
#include "Punto.h"     // buscarPorNombre devuelve la posición como un Punto

class ContenedorMatD {
  private:
    Persona *** mat;            // Matriz dinámica de punteros a Persona
    int filas, columnas;        // Dimensiones de la matriz
    int fil, col;               // "Cursor": posición donde se insertará la próxima
                                // Persona (fila y columna actuales)

  public:
    ContenedorMatD(int f, int c);   // Constructor: reserva la matriz de f x c, vacía
    ~ContenedorMatD();              // Destructor: libera Personas y matriz

    string toString();              // Devuelve toda la matriz como texto

    void inserTarPorFila(Persona *persona);   // Inserta una Persona recorriendo
                                              // la matriz fila por fila

    Punto* buscarPorNombre(string n); // Busca un nombre y devuelve su posición
                                      // (o nullptr si no lo encuentra)
};
