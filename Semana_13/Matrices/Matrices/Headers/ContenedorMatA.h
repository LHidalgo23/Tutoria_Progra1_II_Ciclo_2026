// ============================================================================
// Archivo  : ContenedorMatA.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: FORMA A de contenedor matricial.
//            Matriz ESTÁTICA de 3x3 que guarda objetos Persona directamente
//            (por valor, sin punteros).
//
//            Persona mat[3][3]
//              - Tamaño fijo, definido al compilar.
//              - Las 9 Personas existen desde que se crea el contenedor.
//              - No se usa new/delete, por eso el destructor no libera nada.
//              - Como no hay punteros, NO existe nullptr: una celda "vacía" es
//                una Persona por defecto, es decir, con nombre vacío.
//
// La implementación está en ContenedorMatA.cpp.
// ============================================================================

#pragma once   // Evita incluir este archivo más de una vez en la misma compilación

#include "Persona.h"   // Necesario porque la matriz guarda objetos de tipo Persona

class ContenedorMatA {
  private:
    Persona mat[3][3];   // Matriz de 3 filas x 3 columnas de objetos Persona
    int fil, col;        // "Cursor": posición donde se insertará la próxima
                         // Persona (fila y columna actuales)

  public:
    ContenedorMatA();    // Constructor: deja cada celda con una Persona por defecto
    ~ContenedorMatA();   // Destructor

    string toString();   // Devuelve toda la matriz como texto

    // Inserta una Persona recorriendo la matriz fila por fila.
    // Recibe la Persona POR VALOR: se guarda una copia dentro de la matriz.
    void inserTarPorFila(Persona persona);
};
