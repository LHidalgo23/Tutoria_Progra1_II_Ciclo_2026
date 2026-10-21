// ============================================================================
// Archivo  : Persona.h
// Tipo     : Archivo de encabezado (declaración de la clase)
// Propósito: Declara la clase Persona, que es el objeto que guardan todos los
//            contenedores de matriz de este proyecto (ContenedorMatA, B, C y D).
//            Cada Persona solo conoce su nombre.
//
// Recordatorio: en el .h solo se DECLARA la clase (qué atributos y qué métodos
//               tiene). El código de cada método (la IMPLEMENTACIÓN) está en
//               Persona.cpp.
// ============================================================================

#pragma once   // Evita que el compilador lea este archivo más de una vez en la
               // misma compilación (si no, aparece el error C2011:
               // "redefinición del tipo 'Persona'").

#include <iostream>   // Entrada/salida estándar (cout, endl)
#include <sstream>    // stringstream: sirve para armar textos (toString)

using namespace std;  // Permite escribir string, cout, endl sin el prefijo std::

class Persona {
  private:
    string nombre;          // Nombre de la persona (dato encapsulado)

  public:
    Persona();              // Constructor por defecto: crea una Persona con nombre vacío ("")
    Persona(string n);      // Constructor con parámetro: crea una Persona con el nombre n
    ~Persona();             // Destructor: se ejecuta cuando el objeto se destruye

    string getNombre();     // Getter: devuelve el nombre
    string toString();      // Devuelve el nombre en forma de texto (ej: "Ana ")
};
