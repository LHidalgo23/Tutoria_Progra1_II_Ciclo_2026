// ============================================================
// main.cpp
// Programa principal que demuestra herencia simple y
// POLIMORFISMO: se manejan objetos Estudiante y Profesor a
// traves de punteros de tipo Persona* (la superclase), incluyendo
// el metodo abstracto calcularCarga().
// ============================================================
#include <iostream>
#include <typeinfo>   // necesario para usar typeid()
#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"
using namespace std;

int main() {
    // No se puede hacer "new Persona(...)" porque Persona es
    // abstracta (tiene un metodo virtual puro sin implementar).
    // Persona* p1 = new Persona("22222", "Juan"); // <-- ERROR de compilacion

    cout << "--------------------------" << endl;

    // Polimorfismo: una variable de tipo Persona* apunta a un
    // objeto real de tipo Estudiante.
    Persona* s1 = new Estudiante("1111", "Pancho", 22, 15); // 15 creditos matriculados
    cout << s1->tostring(); // Llama a Estudiante::tostring() gracias a "virtual"
    cout << "Carga: " << s1->calcularCarga() << " creditos" << endl;

    cout << "--------------------------" << endl;

    // Lo mismo pero con un Profesor
    Persona* pro1 = new Profesor("3333", "Jose", "Informatico", 12); // 12 horas de clase
    cout << pro1->tostring(); // Llama a Profesor::tostring()
    cout << "Carga: " << pro1->calcularCarga() << " horas" << endl;

    cout << "--------------------------" << endl;

    // Arreglo de punteros a Persona: puede guardar tanto
    // Estudiantes como Profesores indistintamente (polimorfismo)
    Persona* vec[3];
    int can = 0;
    vec[can++] = s1;
    vec[can++] = pro1;

    for (int i = 0; i < 2; i++) {
        cout << vec[i]->tostring();

        // Misma llamada, vec[i]->calcularCarga(), pero el numero
        // que devuelve significa algo distinto segun el tipo real
        // del objeto (creditos si es Estudiante, horas si es
        // Profesor). Eso es lo que demuestra el polimorfismo.
        cout << "Carga: " << vec[i]->calcularCarga() << endl;

        // typeid(*vec[i]) obtiene el tipo REAL del objeto en
        // tiempo de ejecucion (RTTI), no el tipo del puntero.
        string tipo = typeid(*vec[i]).name();
        if (tipo == "class Profesor")
            cout << "Es profe" << endl;

        cout << "--------------------------" << endl;
    }

    // Liberar la memoria reservada con new
    delete s1;
    delete pro1;

    system("PAUSE");
    return 0;
}