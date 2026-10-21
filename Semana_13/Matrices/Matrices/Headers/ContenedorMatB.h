// ============================================================================
// Archivo  : ContenedorMatB.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: FORMA B de contenedor matricial.
//            Matriz ESTÁTICA de 3x3 que guarda PUNTEROS a Persona.
//
//            Persona* mat[3][3]
//              - La matriz tiene tamaño fijo (3x3), pero cada celda solo guarda
//                la dirección de una Persona (o nullptr si está vacía).
//              - Las Personas se crean con new, por eso el destructor debe
//                liberarlas con delete.
//
// La implementación está en ContenedorMatB.cpp.
// ============================================================================

#pragma once   // Evita incluir este archivo más de una vez en la misma compilación

#include "Persona.h"   // Necesario porque la matriz apunta a objetos Persona

class ContenedorMatB {
  private:
    Persona* mat[3][3];   // Matriz de 3x3 de punteros a Persona
    int fil, col;         // "Cursor": posición donde se insertará la próxima
                          // Persona (fila y columna actuales)

  public:
    ContenedorMatB();     // Constructor: deja todas las celdas vacías (nullptr)
    ~ContenedorMatB();    // Destructor: libera las Personas que hayan sido creadas

    string toString();    // Devuelve toda la matriz como texto

    // Inserta una Persona recorriendo la matriz fila por fila.
    // Recibe un PUNTERO (la Persona se crea con new fuera del contenedor) y el
    // contenedor pasa a ser su dueño: la libera en su destructor.
    void inserTarPorFila(Persona *persona);
};
