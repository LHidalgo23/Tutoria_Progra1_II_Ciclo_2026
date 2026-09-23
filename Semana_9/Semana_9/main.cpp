//// ============================================================
//// main.cpp
//// Demuestra la lista enlazada generica (ListaEnlazada -> Nodo)
//// guardando NodoPersona, cada uno con una Persona real distinta
//// (Estudiante o Profesor) por dentro.
//// ============================================================
//#include <iostream>
//#include "Persona.h"
//#include "Estudiante.h"
//#include "Profesor.h"
//#include "Nodo.h"
//#include "NodoPersona.h"
//#include "ListaEnlazada.h"
//using namespace std;
//
//int main() {
//    // Se crean las personas (polimorfismo de contenido: Persona*
//    // apuntando a Estudiante o Profesor).
//    Persona* p1 = new Estudiante("1111", "Pancho", 22, 15);
//    Persona* p2 = new Profesor("3333", "Jose", "Informatico", 12);
//    Persona* p3 = new Estudiante("2222", "Ana", 20, 18);
//
//    // Cada Persona se envuelve en un NodoPersona (polimorfismo de
//    // nodo: ListaEnlazada solo vera Nodo*, nunca NodoPersona*).
//    Nodo* n1 = new NodoPersona(p1);
//    Nodo* n2 = new NodoPersona(p2);
//    Nodo* n3 = new NodoPersona(p3);
//
//    ListaEnlazada lista;
//    lista.insertarFinal(n1);
//    lista.insertarFinal(n2);
//    lista.insertarFinal(n3);
//
//    cout << "Tamano de la lista: " << lista.tamano() << endl;
//    cout << "--------------------------" << endl;
//    cout << lista.imprimirLista();
//
//    system("PAUSE");
//    return 0;
//}