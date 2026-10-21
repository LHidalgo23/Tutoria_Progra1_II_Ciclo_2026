// ============================================================================
// Archivo  : ContenedorMatC.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: FORMA C de contenedor matricial.
//            Matriz DINÁMICA de objetos Persona (por valor), con tamaño
//            definido en tiempo de ejecución.
//
//            Persona **mat
//              - mat apunta a un arreglo de punteros (uno por fila).
//              - Cada uno de esos punteros apunta a un arreglo de Personas
//                (las columnas de esa fila).
//              - El tamaño (filas x columnas) se decide al crear el contenedor.
//              - Las Personas están guardadas por valor, por eso NO existe
//                nullptr: una celda "vacía" es una Persona con nombre vacío.
//
//            Esquema (ejemplo 2 filas x 3 columnas):
//              mat --> [ fila0 ] --> [Persona][Persona][Persona]
//                      [ fila1 ] --> [Persona][Persona][Persona]
//
// La implementación está en ContenedorMatC.cpp.
// ============================================================================

#pragma once   // Evita incluir este archivo más de una vez en la misma compilación

#include "Persona.h"   // Necesario porque la matriz guarda objetos de tipo Persona

class ContenedorMatC {
  private:
    Persona **mat;       // Puntero al arreglo de filas (cada fila es un arreglo de Persona)
    int filas, columnas; // Dimensiones de la matriz
    int fil, col;        // "Cursor": posición donde se insertará la próxima
                         // Persona (fila y columna actuales)

  public:
    ContenedorMatC(int f, int c);   // Constructor: reserva la matriz de f x c
    ~ContenedorMatC();              // Destructor: libera la memoria reservada

    string toString();              // Devuelve toda la matriz como texto

    // Inserta una Persona recorriendo la matriz fila por fila.
    // Recibe la Persona POR VALOR: se guarda una copia dentro de la matriz.
    void inserTarPorFila(Persona persona);
};
