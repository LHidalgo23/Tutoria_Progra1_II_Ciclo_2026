// ============================================================
// main.cpp
// Demuestra la lista enlazada generica (ListaEnlazada -> Nodo)
// guardando NodoPersona, cada uno con una Persona real distinta
// (Estudiante o Profesor) por dentro.
// ============================================================
#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include "Nodo.h"
#include "NodoPersona.h"
#include "ListaEnlazada.h"
#include "NodoCurso.h"
#include "NodoEvaluacion.h"
using namespace std;

int main() {

    Persona* p1 = new Estudiante("305470210", "Luis", 23, 18);
    Persona* p2 = new Estudiante("12345678", "Efren", 25, 14);
    Persona* p3 = new Estudiante("98765412", "Maria", 21, 16);
    Persona* p4 = new Estudiante("56892145", "Valentina", 22, 14);

    Curso* c1 = new Curso("EIF201", "Programacion 1", 4);

    Evaluacion* e1 = new Evaluacion("Examen", 30, 80);


    // Cada Persona se envuelve en un NodoPersona (polimorfismo de
    // nodo: ListaEnlazada solo vera Nodo*, nunca NodoPersona*).

    Nodo* n1 = new NodoPersona(p1);
    Nodo* n2 = new NodoPersona(p2);
    Nodo* n3 = new NodoPersona(p3);
    Nodo* n4 = new NodoPersona(p4);

    Nodo* n5 = new NodoCurso(c1);
    Nodo* n6 = new NodoEvaluacion(e1);

    ListaEnlazada lista;
    lista.insertarFinal(n1);
    lista.insertarFinal(n2);
    lista.insertarFinal(n3);
    lista.insertarFinal(n4);
    lista.insertarFinal(n5);
    lista.insertarFinal(n6);

    cout << "Tamano de la lista: " << lista.tamano() << endl;
    cout << "--------------------------" << endl;
    cout << lista.imprimirLista();

    system("PAUSE");
    return 0;
}