#include <iostream>
#include "ContenedorMatD.h"


int main(){
    cout << "=== Parte 1: un Persona* con distintas formas ===" << endl;
    Persona* p = new Estudiante("Ana", 95);
    cout << "p apunta a un " << p->getTipo() << " -> " << p->toString() << endl;
    delete p;                 // ~Estudiante y luego ~Persona (destructor virtual)

    p = new Profesor("Marta", "Progra 1");
    cout << "p apunta a un " << p->getTipo() << " -> " << p->toString() << endl;
    delete p;
    cout << endl;

    ContenedorMatD d(3, 3);
    d.inserTarPorFila(new Estudiante("Efren", 95));
    d.inserTarPorFila(new Profesor("Luis", "Progra 1"));
    d.inserTarPorFila(new Estudiante("Sofia", 80));

    d.inserTarPorFila(new Persona("Pedro"));        // una Persona "simple"

    d.inserTarPorFila(new Estudiante("Angela", 70));
    d.inserTarPorFila(new Profesor("Valentina", "Estructuras Discretas"));

    cout << "=== Parte 2: coleccion polimorfica (matriz 3x3) ===" << endl;
    cout << "[E] = Estudiante, [P] = Profesor, sin marca = Persona, N = vacia" << endl;
    cout << d.toString();

    cout << "Estudiantes: " << d.contarPorTipo("Estudiante")
        << "  Profesores: " << d.contarPorTipo("Profesor")
        << "  Personas: " << d.contarPorTipo("Persona") << endl << endl;

    // ---------------------------------------------------------------------------
    // PARTE 3: dynamic_cast
    // ---------------------------------------------------------------------------
    cout << "=== Parte 3: dynamic_cast ===" << endl;
    cout << "Solo estudiantes:" << endl << d.mostrarEstudiantes();
    cout << "Solo profesores:" << endl << d.mostrarProfesores();
    cout << "Promedio de estudiantes: " << d.promedioEstudiantes() << endl << endl;

    // dynamic_cast sobre un solo objeto: éxito y fallo.
    Persona* x = new Profesor("Jacky", "Bases de Datos");

    Estudiante* comoEst = dynamic_cast<Estudiante*>(x);
    if (comoEst == nullptr)
        cout << x->getNombre() << " NO es Estudiante (dynamic_cast -> nullptr)" << endl;

    Profesor* comoProf = dynamic_cast<Profesor*>(x);
    if (comoProf != nullptr)
        cout << x->getNombre() << " SI es Profesor, curso: " << comoProf->getCurso() << endl;

    // x->getCurso();   // ERROR de compilación: Persona no tiene getCurso()
    delete x;
    cout << endl;

    // ---------------------------------------------------------------------------
    // PARTE 4: SLICING (por qué hacen falta punteros)
    // Al copiar un Estudiante en una variable Persona (por valor), solo se
    // copia la parte Persona: se pierden la nota y el comportamiento [E].
    // Es lo que pasaría en las Formas A y C de la semana anterior.
    // ---------------------------------------------------------------------------
    cout << "=== Parte 4: slicing ===" << endl;
    {
        Estudiante est("Carla", 88);
        Persona copia = est;      // <- se "rebana" el objeto
        cout << "Por puntero : " << (&est)->toString() << endl;
        cout << "Por valor   : " << copia.toString() << " (tipo: " << copia.getTipo() << ")" << endl;
    }   // aquí se destruyen est y copia
    cout << endl;

    // ---------------------------------------------------------------------------
    // FINAL: al terminar main se destruye d. Como ~Persona() es virtual, cada
    // celda ejecuta primero el destructor de su clase real y luego ~Persona().
    // ---------------------------------------------------------------------------
    cout << "=== Fin de main: destruccion de la matriz ===" << endl;



    return 0;
    
}

