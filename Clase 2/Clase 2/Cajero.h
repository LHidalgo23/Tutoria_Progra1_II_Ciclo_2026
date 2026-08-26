#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cajero {

private:
    int idCajero;
    string ubicacion;
    bool disponibilidad;    // true = disponible, false = no disponible
    double dineroDisponible;
    string horaApertura;

public:

    // CONSTRUCTOR
    Cajero(int id, string ub, bool disp, double dinero, string hora);


    // ========== GETTERS ==========
    int getIdCajero() ;
    string getUbicacion() ;
    bool getDisponibilidad() ;
    double getDineroDisponible() ;
    string getHoraApertura() ;


    // ========== SETTERS ==========
    void setIdCajero(int id);
    void setUbicacion(string ub);
    void setDisponibilidad(bool disp);
    void setDineroDisponible(double dinero);
    void setHoraApertura(string hora);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo() ;


    // ========== MÉTODO 1: retirarDinero() ==========
    // DESCRIPCIÓN: Retira dinero del cajero
    // PARÁMETRO: monto (double)
    // RETORNA: bool - true si se retiró, false si hay error
    //
    // TODO: Implementar
    // Validar que disponibilidad sea true
    // Validar que monto sea mayor a 0
    // Validar que dineroDisponible >= monto
    // Si todas pasan: dineroDisponible -= monto, cout éxito y return true
    // Si falla: cout error y return false
    bool retirarDinero(double monto);


    // ========== MÉTODO 2: depositarDinero() ==========
    // DESCRIPCIÓN: Deposita dinero en el cajero
    // PARÁMETRO: monto (double)
    // RETORNA: bool - true si se depositó, false si hay error
    //
    // TODO: Implementar
    // Validar que disponibilidad sea true
    // Validar que monto sea mayor a 0
    // Si ambas pasan: dineroDisponible += monto, cout éxito y return true
    // Si falla: cout error y return false
    bool depositarDinero(double monto);
};

