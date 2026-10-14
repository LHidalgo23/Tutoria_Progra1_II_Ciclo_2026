// ============================================================================
// Persona.h
// ----------------------------------------------------------------------------
// ARCHIVO DE ENCABEZADO (.h): aquí solo se DECLARA la clase Persona, es decir,
// qué atributos y qué métodos tiene. La implementación (el código de cada
// método) está en Persona.cpp.
// ============================================================================

// Evita que este archivo se incluya más de una vez en la misma compilación
// (si no, el compilador daría error de "clase redefinida").
#pragma once

// Librerías necesarias para esta clase:
#include<iostream>   // cout, cin, endl
#include<sstream>    // stringstream (para armar el texto del toString)
#include<string>     // tipo string
#include<random>     // (no se usa todavía en esta clase; se deja tal cual)
using namespace std; // permite usar string, cout, etc. sin escribir "std::"

// Una Persona tiene cédula, nombre y edad.
class Persona {
private:
    // Atributos privados: solo se pueden usar dentro de la clase.
    // Desde afuera se accede a ellos mediante los accesores y mutadores.
    string cedula;
    string nombre;
    int edad;
public:
    // CONSTRUCTOR con valores por defecto:
    //  - Persona()                    -> cedula = "", nombre = "", edad = 0
    //  - Persona("111", "Ana", 20)    -> con datos
    // Los valores por defecto se escriben SOLO aquí en el .h, nunca en el .cpp.
    // Son necesarios para que se pueda crear un arreglo/matriz de Personas
    // (como Persona mat[3][3]), ya que cada elemento se crea sin argumentos.
    Persona(string = "", string = "", int = 0);

    // DESTRUCTOR virtual: se ejecuta cuando el objeto se destruye.
    virtual ~Persona();

    // ACCESORES (getters): devuelven el valor de un atributo.
    // El "const" al final indica que el método NO modifica al objeto.
    string getCedula() const;
    string getNombre() const;
    int getEdad() const;

    // MUTADORES (setters): modifican el valor de un atributo.
    void setCedula(string);
    void setNombre(string);
    void setEdad(int);

    // TOSTRING: devuelve en un string los datos de la persona
    // (útil para imprimirla con cout).
    string toString() const;
};
