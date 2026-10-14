// ============================================================================
// ContenedorMatricial.h
// ----------------------------------------------------------------------------
// ARCHIVO DE ENCABEZADO (.h): aquí solo se DECLARA la clase
// ContenedorMatricial. El código de cada método está en
// ContenedorMatricial.cpp.
// ============================================================================

// Evita que este archivo se incluya más de una vez en la misma compilación.
#pragma once

#include"Persona.h"   // el contenedor guarda objetos de tipo Persona
// La idea es construir un contenedor matricial de Personas...

// CONTENEDOR MATRICIAL: guarda hasta 9 Personas en una matriz de 3x3 y
// lleva el control de cuál es la próxima posición libre (filAct, colAct).
class ContenedorMatricial {
private:                    // Aquí las dimensiones se establecen en tiempo de compilación..
    Persona mat[3][3];      // Aqui se estarían ingresando personas automaticas..
                            // (las 9 Personas se crean con el constructor por
                            //  defecto: cédula "", nombre "" y edad 0)
    int filAct;             // fila por donde se va llenando.
    int colAct;             // columna por donde se va llenando.
public:
    // CONSTRUCTOR: deja los controles de llenado en la posición [0][0].
    ContenedorMatricial();

    // DESTRUCTOR virtual.
    virtual ~ContenedorMatricial();

    // Indica si ya no hay espacio para más personas.
    bool estaLleno() const;

    // Establecerle los datos a las personas que viven ya en la matriz.
    // Retorna true si se ingresó la persona, false si la matriz ya estaba llena.
    bool ingresaPersona();

    // Listado de las personas ya ingresadas, una por una con su posición [i][j].
    string toString();

    // Imprime el contenido con forma de matriz: una fila por línea.
    string toStringMatriz() const;
};
