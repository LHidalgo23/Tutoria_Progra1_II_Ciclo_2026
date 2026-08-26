#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transaccion {

private:
    int idTransaccion;
    double monto;
    string tipo;            // "deposito", "retiro", "transferencia"
    string fecha;           // "DD/MM/YYYY"
    string concepto;

public:

    // CONSTRUCTOR
    Transaccion(int id, double mont, string t, string f, string conc);


    // ========== GETTERS ==========
    int getIdTransaccion() ;
    double getMonto() ;
    string getTipo() ;
    string getFecha() ;
    string getConcepto() ;


    // ========== SETTERS ==========
    void setIdTransaccion(int id);
    void setMonto(double mont);
    void setTipo(string t);
    void setFecha(string f);
    void setConcepto(string conc);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo() ;


    // ========== MÉTODO 1: esValida() ==========
    // DESCRIPCIÓN: Verifica que la transacción tenga datos válidos
    // RETORNA: bool - true si es válida, false si no
    //
    // TODO: Implementar
    // Validar que monto sea mayor a 0
    // Validar que concepto NO esté vacío
    // Si ambas pasan: cout éxito y return true
    // Si falla: cout error y return false
    bool esValida();


    // ========== MÉTODO 2: obtenerResumen() ==========
    // DESCRIPCIÓN: Retorna un resumen de la transacción
    // RETORNA: string con formato: "ID#1001 - ₡5000.00 - Retiro"
    //
    // TODO: Implementar
    // Combinar: "ID#" + id + " - ₡" + monto (con 2 decimales) + " - " + tipo
    // Usar sprintf o string concatenation
    // Retornar el string formado
    // EJEMPLO: "ID#1001 - ₡5000.00 - retiro"
    string obtenerResumen() ;
};

