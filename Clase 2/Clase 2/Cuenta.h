#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cuenta {

private:
    string numeroCuenta;
    double saldo;
    string tipoCuenta;      // "ahorro" o "corriente"
    double tasaInteres;
    string estado;          // "activa" o "inactiva"

public:

    // CONSTRUCTOR
    Cuenta(string numero, double sal, string tipo, double tasa, string est);


    // ========== GETTERS ==========
    string getNumeroCuenta() ;
    double getSaldo() ;
    string getTipoCuenta() ;
    double getTasaInteres() ;
    string getEstado() ;


    // ========== SETTERS ==========
    void setNumeroCuenta(string numero);
    void setSaldo(double sal);
    void setTipoCuenta(string tipo);
    void setTasaInteres(double tasa);
    void setEstado(string est);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo();


    // ========== MÉTODO 1: depositar() ==========
    // DESCRIPCIÓN: Agrega dinero a la cuenta
    // PARÁMETRO: monto (double)
    // RETORNA: bool - true si se depositó, false si hay error
    //
    // TODO: Implementar
    // Validar que monto sea mayor a 0
    // Validar que estado sea "activa"
    // Si ambas validaciones pasan: saldo += monto, cout éxito y return true
    // Si falla: cout error y return false
    bool depositar(double monto);


    // ========== MÉTODO 2: retirar() ==========
    // DESCRIPCIÓN: Quita dinero de la cuenta
    // PARÁMETRO: monto (double)
    // RETORNA: bool - true si se retiró, false si hay error
    //
    // TODO: Implementar
    // Validar que monto sea mayor a 0
    // Validar que estado sea "activa"
    // Validar que saldo >= monto
    // Si todas pasan: saldo -= monto, cout éxito y return true
    // Si falla: cout error y return false
    bool retirar(double monto);
};

