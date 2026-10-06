// ============================================================
// Zoologico.cpp
// main.cpp
// Crea tres listas enlazadas (personas, animales y areas)
// con la
// MISMA clase ListaEnlazada. Cada lista guarda un tipo de
// nodo
// distinto (NodoPersona, NodoAnimal, NodoArea), y cada nodo
// guarda
// un objeto de alguna de las subclases (polimorfismo).
// ============================================================
// En Visual Studio (modo Debug) esto permite detectar fugas de
// memoria: al terminar el programa, la ventana de Salida muestra
// "Detected memory leaks!" si algun objeto quedo sin liberar.


#include <iostream>
#include <cstdlib>
#include "Persona.h"
#include "Visitante.h"
#include "Veterinario.h"
#include "Cuidador.h"
#include "Animal.h"
#include "OsoPolar.h"
#include "Suricata.h"
#include "Delfin.h"
#include "Tiburon.h"
#include "Camello.h"
#include "Pinguino.h"
#include "Area.h"
#include "AreaDesierto.h"
#include "AreaAcuatica.h"
#include "AreaHielo.h"
#include "Nodo.h"
#include "NodoPersona.h"
#include "NodoAnimal.h"
#include "NodoArea.h"
#include "ListaEnlazada.h"
using namespace std;

int main() {


    // No se puede crear un objeto de una clase abstracta:
    // Persona* p = new Persona("111", "Juan"); // <-- ERROR de compilacion
    // Persona tiene un metodo virtual puro (toString), asi que el
    // compilador no permite crear objetos Persona, solo de sus
    // subclases. Lo mismo pasa con Animal y Area.

    // Las tres listas usan la misma clase ListaEnlazada.
    ListaEnlazada personas;
    ListaEnlazada animales;
    ListaEnlazada areas;

    // ---------------- Personas (una de cada tipo)
    // El objeto se crea con new como argumento del constructor del
    // nodo, y el nodo se crea con new como argumento de
    // insertarFinal. La lista y los nodos se encargan de liberarlos.
    personas.insertarFinal(new NodoPersona(new Visitante("111111111", "Ana Mora", 25, 3)));
    personas.insertarFinal(new NodoPersona(new Veterinario("222222222", "Carlos Rojas", "Mamiferos marinos", 40)));
    personas.insertarFinal(new NodoPersona(new Cuidador("333333333", "Lucia Vargas", "Zona Polar", 44)));

    // ---------------- Animales (uno de cada tipo)
    animales.insertarFinal(new NodoAnimal(new OsoPolar(1, 450.5, 12.5)));
    animales.insertarFinal(new NodoAnimal(new Suricata(2, 0.8, true)));
    animales.insertarFinal(new NodoAnimal(new Delfin(3, 180.0, 4)));
    animales.insertarFinal(new NodoAnimal(new Tiburon(4, 520.0, 450)));
    animales.insertarFinal(new NodoAnimal(new Camello(5, 600.0, 2)));
    animales.insertarFinal(new NodoAnimal(new Pinguino(6, 5.5, "Emperador")));

    // ---------------- Areas (una de cada tipo)
    areas.insertarFinal(new NodoArea(new AreaDesierto("Desierto del Sahara", 800.0, 6)));
    areas.insertarFinal(new NodoArea(new AreaAcuatica("Acuario Principal", 1200.0, 8.5)));
    areas.insertarFinal(new NodoArea(new AreaHielo("Polo Norte", 500.0, -10.0)));

    cout << "==========================================" << endl;
    cout << "PERSONAS - Tamano de la lista: " << personas.tamano() << endl;
    cout << "==========================================" << endl;
    cout << personas.imprimirLista();

    cout << endl << "==========================================" << endl;
    cout << "ANIMALES - Tamano de la lista: " << animales.tamano() << endl;
    cout << "==========================================" << endl;
    cout << animales.imprimirLista();

    cout << endl << "==========================================" << endl;
    cout << "AREAS - Tamano de la lista: " << areas.tamano() << endl;
    cout << "==========================================" << endl;
    cout << areas.imprimirLista();

    // Pregunta: cuando se imprime un animal, que version de
    // hacerSonido() se ejecuta y por que?
    // Respuesta: se ejecuta la del tipo REAL del objeto (OsoPolar,
    // Delfin, Camello...) y no la de Animal, porque hacerSonido() es
    // virtual: la llamada se resuelve en tiempo de ejecucion segun
    // el objeto al que apunta el Animal*. Eso es polimorfismo.

    // No hay ningun delete aqui: cuando main termina, las listas se
    // destruyen solas. El destructor de ListaEnlazada libera los
    // nodos y el destructor de cada nodo libera su objeto.


    system("PAUSE");

    return 0;
}
