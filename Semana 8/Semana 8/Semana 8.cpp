#include "ContenedorLista.h"



int main(){

    Persona* p1 = new Persona("Luis", 23);
    Persona* p2 = new Persona("Efren", 20);
    Persona* p3 = new Persona("Sofia",23 );
    Persona* p4 = new Persona("Valentina", 22);
    Persona* p5 = new Persona("Diego", 22);
    Persona* p6 = new Persona("Maria",21 );
    


    Nodo* n1 = new Nodo(p1);
    Nodo* n2 = new Nodo(p2);
    Nodo* n3 = new Nodo(p3);
    Nodo* n4 = new Nodo(p4);
    Nodo* n5 = new Nodo(p5);
    Nodo* n6 = new Nodo(p6);



    ContenedorLista* c1 = new ContenedorLista();

    cout << "=========Insertar al Inicio===========" << endl;
    c1->insertarPrimero(n1);

    cout << c1->toString() << endl;

    cout << "=========Insertar al Final===========" << endl;
    c1->insertarFinal(n2);
    c1->insertarFinal(n3);
    c1->insertarFinal(n4);
    c1->insertarFinal(n5);
    c1->insertarFinal(n6);

    cout << c1->toString() << endl;


    //Probar el codigo con diferentes metodos
    cout << "=========Insertar en el medio===========" << endl;
  



    cout << "=========Eliminar por Nombre===========" << endl;



    

    
}

