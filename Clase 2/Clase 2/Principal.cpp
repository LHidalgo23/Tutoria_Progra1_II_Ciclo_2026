// Clase 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
#include "Cuenta.h"
#include "Transaccion.h"
#include "Tarjeta.h"
#include "Prestamo.h"
#include "Cajero.h"
using namespace std;

int main()
{
    cout << "========================================" << endl;
    cout << "     PRUEBA: CLIENTE" << endl;
    cout << "========================================" << endl << endl;

    // Crear un cliente
    Cliente c1("1234567890", "Juan Pérez", "juan@email.com", "87654321", "15/08/2024");
    c1.mostrarInfo();

    // Probar método 1: esValido()
    c1.esValido();
    cout << endl;

    // Probar método 2: cambiarCorreo()
    c1.cambiarCorreo("juannuevo@gmail.com");
    cout << endl << endl;


    cout << "========================================" << endl;
    cout << "     PRUEBA: CUENTA" << endl;
    cout << "========================================" << endl << endl;

    // Crear una cuenta
    Cuenta cta1("1001-2345-6789", 5000.0, "ahorro", 2.5, "activa");
    cta1.mostrarInfo();

    // Probar método 1: depositar()
    cta1.depositar(2000);
    cout << endl;

    // Probar método 2: retirar()
    cta1.retirar(1500);
    cout << endl;

    // Probar falla
    cta1.retirar(10000);
    cout << endl << endl;


    cout << "========================================" << endl;
    cout << "     PRUEBA: TRANSACCIÓN" << endl;
    cout << "========================================" << endl << endl;

    // Crear una transacción
    Transaccion trans1(1001, 5000.0, "retiro", "20/08/2026", "Retiro en cajero");
    trans1.mostrarInfo();

    // Probar método 1: esValida()
    trans1.esValida();
    cout << endl;

    // Probar método 2: obtenerResumen()
    cout << "Resumen: " << trans1.obtenerResumen() << endl << endl;


    cout << "========================================" << endl;
    cout << "     PRUEBA: TARJETA" << endl;
    cout << "========================================" << endl << endl;

    // Crear una tarjeta
    Tarjeta tarj1("4532-1234-5678-9010", "crédito", 10000.0, 5000.0, "bloqueada");
    tarj1.mostrarInfo();

    // Probar método 1: activar()
    tarj1.activar();
    cout << endl;

    // Probar método 2: bloquear()
    tarj1.bloquear();
    cout << endl << endl;


    cout << "========================================" << endl;
    cout << "     PRUEBA: PRÉSTAMO" << endl;
    cout << "========================================" << endl << endl;

    // Crear un préstamo
    Prestamo prest1(5001, 50000.0, 8.5, 24, 5, "aprobado");
    prest1.mostrarInfo();

    // Probar método 1: pagarCuota()
    prest1.pagarCuota();
    cout << endl;

    // Probar método 2: obtenerProgreso()
    cout << "Progreso: " << prest1.obtenerProgreso() << endl << endl;


    cout << "========================================" << endl;
    cout << "     PRUEBA: CAJERO" << endl;
    cout << "========================================" << endl << endl;

    // Crear un cajero
    Cajero caj1(301, "San José - Centro", true, 100000.0, "08:00 - 20:00");
    caj1.mostrarInfo();

    // Probar método 1: retirarDinero()
    caj1.retirarDinero(5000);
    cout << endl;

    // Probar método 2: depositarDinero()
    caj1.depositarDinero(3000);
    cout << endl;

    return 0;
}


