// ============================================================================
// Archivo  : ContenedorMatD.h
// Tipo     : Archivo de encabezado
// Propósito: FORMA D (matriz dinámica de punteros a Persona) convertida en una
//            COLECCIÓN POLIMÓRFICA.
//
// ¿QUÉ ES UNA COLECCIÓN POLIMÓRFICA?
//   Un contenedor declarado para la clase BASE (Persona*) que guarda objetos
//   de DISTINTAS clases hijas mezclados:
//
//     mat --> [ fila0 ] --> [ Estudiante* ][ Profesor* ][ Persona* ]
//             [ fila1 ] --> [ Estudiante* ][  nullptr   ][  nullptr  ]
//
//   Todas las celdas son Persona*, pero cada una apunta a un objeto real
//   distinto. Al recorrerla y llamar mat[i][j]->toString(), cada objeto
//   responde con SU propia versión (polimorfismo).
//
//   Funciona porque la matriz guarda PUNTEROS. Las formas A y C (por valor)
//   NO sirven para esto: al copiar un Estudiante dentro de una celda Persona
//   se pierde la parte de Estudiante (slicing).
// ============================================================================

#pragma once

#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Punto.h"

class ContenedorMatD {
private:
    Persona*** mat;
    int filas, columnas;
    int fil, col;

public:
    ContenedorMatD(int f, int c);
    ~ContenedorMatD();             // delete mat[i][j] llama al destructor
    // correcto gracias a ~Persona() virtual

    string toString();             // POLIMORFISMO: cada celda usa su toString()

    void inserTarPorFila(Persona* persona);   // Recibe Persona*, Estudiante*
    // o Profesor* (upcasting automático)

    Punto* buscarPorNombre(string n);

    // ---- Métodos nuevos que usan dynamic_cast ----
    string mostrarEstudiantes();   // Solo los Estudiantes, con su nota
    string mostrarProfesores();    // Solo los Profesores, con su curso
    double promedioEstudiantes();  // Promedio de notas (0 si no hay)
    int    contarPorTipo(string tipo);   // Usa getTipo() (virtual)
};
