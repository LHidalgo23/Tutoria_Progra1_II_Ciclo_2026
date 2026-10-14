// ============================================================================
// main.cpp
// ----------------------------------------------------------------------------
// Programa principal que prueba el ContenedorMatricial: ingresa personas por
// teclado y luego las muestra de dos formas (listado y como matriz).
//
// Nota: en este proyecto hay DOS main. Este es el que está activo. El otro
// está en "Semana 12.cpp" y se encuentra comentado (con los ejercicios de
// matrices mat1, mat2 y mat3), por eso no choca con este.
// ============================================================================

#include <iostream>                 // cout, endl
#include "ContenedorMatricial.h"    // la clase que vamos a probar
using namespace std;


int main() {
    cout << "---TRABAJANDO CON CONTENEDORES MATRICIALES---" << endl;
    cout << endl;
    // creando un contenedor matricial.
    ContenedorMatricial CM;

    // Se ingresan x personas (aquí 2). Cada llamada a ingresaPersona() pide
    // los datos por teclado y los guarda en la siguiente posición libre.
    int x = 2;
    while (x > 0) {
        CM.ingresaPersona();
        x--;
        cout << endl;
    }

    // Primero el listado de personas con su posición, y luego la misma
    // información con forma de matriz.
    cout << CM.toString() << endl;
    cout << CM.toStringMatriz() << endl;

    system("pause");    // detiene la consola hasta presionar una tecla (Windows)
    return 0;
}
