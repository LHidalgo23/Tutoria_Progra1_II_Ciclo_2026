// Clase 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
#include "Cuenta.h"

using namespace std;

int main()
{
    cout << "========================================" << endl;
    cout << "     PRUEBA: CLIENTE" << endl;
    cout << "========================================" << endl << endl;

    // Crear un cliente
    Cliente c1("1234567890", "Juan Pérez", "juan@email.com");
    c1.toString();



    cout << "========================================" << endl;
    cout << "     PRUEBA: CUENTA" << endl;
    cout << "========================================" << endl << endl;

    // Crear una cuenta
    Cuenta cta1("1001-2345-6789", 5000.0, "ahorro");
    cta1.toString();


   

   

    return 0;
}


