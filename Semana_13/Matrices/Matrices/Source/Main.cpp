// ============================================================================
// Archivo  : Main.cpp
// Tipo     : Programa principal (punto de entrada)
// Propósito: Prueba las 4 formas de contenedor matricial. En cada una inserta
//            4 Personas (Ana, Luis, Marta y Pedro) con inserTarPorFila y luego
//            imprime la matriz, para poder comparar cómo se comporta cada forma.
//            Al final muestra cómo se ubica una celda con la clase Punto.
//
//   Forma A: matriz estática de Personas          (por valor)    -> 3x3
//   Forma B: matriz estática de punteros          (por puntero)  -> 3x3
//   Forma C: matriz dinámica de Personas          (por valor)    -> 3x3
//   Forma D: matriz dinámica de punteros          (por puntero)  -> 3x3
//
// PARA LA CLASE: los nombres entre comillas ("Ana", "Luis", "Marta", "Pedro")
// se pueden cambiar por los de los estudiantes.
//
// Salida esperada en la consola (cada matriz termina con una línea en blanco):
//   === Forma A: matriz estatica de Personas ===
//   Ana Luis Marta
//   Pedro
//
//
//   === Forma B: matriz estatica de punteros ===
//   Ana Luis Marta
//   Pedro N N
//   N N N
//
//   === Forma C: matriz dinamica de Personas ===
//   Ana Luis Marta
//   Pedro
//
//
//   === Forma D: matriz dinamica de punteros ===
//   Ana Luis Marta
//   Pedro N N
//   N N N
//
//   === Puntos ===
//   Punto creado a mano: (1,2)  fila (y) = 1, columna (x) = 2
//   Pedro esta en (1,0)  -> mat[1][0]
//   Marta esta en (0,2)  -> mat[0][2]
//   Zoila no esta en la matriz (nullptr)
//
// Observe la diferencia: en A y C una celda vacía no muestra nada (es una
// Persona por defecto, con nombre vacío), en B y D se ve como N (un puntero
// nullptr).
// ============================================================================

#include "ContenedorMatA.h"   // Cada include trae su contenedor (y Persona/Punto).
#include "ContenedorMatB.h"   // Gracias a #pragma once en los headers no hay
#include "ContenedorMatC.h"   // problema de redefinición aunque Persona se
#include "ContenedorMatD.h"   // incluya desde varios archivos.

int main() {

    //// ---------------------------------------------------------------------------
    //// FORMA A: matriz estática de Personas (por valor)
    //// El contenedor se crea en la pila (sin new), por lo que se destruye solo
    //// al terminar main. Se inserta pasando la Persona por valor: Persona("Ana")
    //// crea una Persona temporal y el contenedor guarda una copia.
    //// ---------------------------------------------------------------------------
    //ContenedorMatA a;
    //a.inserTarPorFila(Persona("Ana"));
    //a.inserTarPorFila(Persona("Luis"));
    //a.inserTarPorFila(Persona("Marta"));
    //a.inserTarPorFila(Persona("Pedro"));
    //cout << "=== Forma A: matriz estatica de Personas ===" << endl;
    //cout << a.toString();

    //// ---------------------------------------------------------------------------
    //// FORMA B: matriz estática de punteros
    //// Aquí la matriz guarda direcciones, así que cada Persona se crea con new.
    //// El contenedor se queda con ese puntero y lo libera en su destructor.
    //// ---------------------------------------------------------------------------
    //ContenedorMatB b;
    //b.inserTarPorFila(new Persona("Ana"));
    //b.inserTarPorFila(new Persona("Luis"));
    //b.inserTarPorFila(new Persona("Marta"));
    //b.inserTarPorFila(new Persona("Pedro"));
    //cout << "=== Forma B: matriz estatica de punteros ===" << endl;
    //cout << b.toString();

    //// ---------------------------------------------------------------------------
    //// FORMA C: matriz dinámica de Personas (por valor)
    //// Se indica el tamaño al crearla: 3 filas x 3 columnas. La inserción es
    //// igual que en la forma A (Persona por valor).
    //// ---------------------------------------------------------------------------
    //ContenedorMatC c(3, 3);
    //c.inserTarPorFila(Persona("Ana"));
    //c.inserTarPorFila(Persona("Luis"));
    //c.inserTarPorFila(Persona("Marta"));
    //c.inserTarPorFila(Persona("Pedro"));
    //cout << "=== Forma C: matriz dinamica de Personas ===" << endl;
    //cout << c.toString();

    // ---------------------------------------------------------------------------
    // FORMA D: matriz dinámica de punteros
    // Tamaño indicado al crearla (3x3) e inserción con new, igual que en la
    // forma B.
    // ---------------------------------------------------------------------------
    ContenedorMatD d(3, 3);
    d.inserTarPorFila(new Persona("Ana"));
    d.inserTarPorFila(new Persona("Luis"));
    d.inserTarPorFila(new Persona("Marta"));
    d.inserTarPorFila(new Persona("Pedro"));
    cout << "=== Forma D: matriz dinamica de punteros ===" << endl;
    cout << d.toString();

    // ---------------------------------------------------------------------------
    // PUNTOS: ubicar una celda con la clase Punto
    // Punto(y, x) se escribe en el MISMO orden que mat[fila][columna]:
    //   y = fila (vertical, crece hacia abajo)
    //   x = columna (horizontal, crece hacia la derecha)
    // ---------------------------------------------------------------------------
    cout << "=== Puntos ===" << endl;

    // 1. Crear un Punto a mano. Es la celda mat[1][2]: fila 1, columna 2.
    //Punto p(1, 2);
    //cout << "Punto creado a mano: " << p.toString()
    //    << "  fila (y) = " << p.getY()
    //    << ", columna (x) = " << p.getX() << endl;

    // 2. Preguntarle a la forma D dónde está cada Persona.
    //    buscarPorNombre devuelve un Punto creado con new, o nullptr si el nombre
    //    no está. Por eso se revisa antes de usarlo y se hace delete al terminar.
    Punto* pos = d.buscarPorNombre("Pedro");
    if (pos != nullptr) {
        cout << "Pedro esta en " << pos->toString()
            << "  -> mat[" << pos->getY() << "][" << pos->getX() << "]" << endl;
        delete pos;
    }

    pos = d.buscarPorNombre("Marta");
    if (pos != nullptr) {
        cout << "Marta esta en " << pos->toString()
            << "  -> mat[" << pos->getY() << "][" << pos->getX() << "]" << endl;
        delete pos;
    }

    // 3. Un nombre que no se insertó: no hay Punto.
    pos = d.buscarPorNombre("Jacky");
    if (pos == nullptr) {
        cout << "Jacky no esta en la matriz (nullptr)" << endl;
    }

    // Al terminar main, C++ llama automáticamente al destructor de a, b, c y d:
    // B, C y D liberan su memoria dinámica, así que no hay fugas de memoria.
}