#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tarjeta {

private:
    string numeroTarjeta;
    string tipo;            // "débito" o "crédito"
    double limiteCredito;
    double saldoDisponible;
    string estado;          // "activa", "bloqueada", "vencida"

public:

    // CONSTRUCTOR
    Tarjeta(string numero, string t, double limite, double saldo, string est);


    // ========== GETTERS ==========
    string getNumeroTarjeta();
    string getTipo();
    double getLimiteCredito();
    double getSaldoDisponible();
    string getEstado();


    // ========== SETTERS ==========
    void setNumeroTarjeta(string numero);
    void setTipo(string t);
    void setLimiteCredito(double limite);
    void setSaldoDisponible(double saldo);
    void setEstado(string est);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo();


    // ========== MÉTODO 1: activar() ==========
    // DESCRIPCIÓN: Activa la tarjeta si está bloqueada o vencida
    // RETORNA: bool - true si se activó, false si hay error
    //
    // TODO: Implementar
    // Validar que estado NO sea "activa" (si ya está activa, no hacer nada)
    // Si estado es "bloqueada" o "vencida": cambiar a "activa", cout éxito y return true
    // Si ya es "activa": cout mensaje y return false
    bool activar();


    // ========== MÉTODO 2: bloquear() ==========
    // DESCRIPCIÓN: Bloquea la tarjeta
    // RETORNA: bool - true si se bloqueó, false si hay error
    //
    // TODO: Implementar
    // Validar que estado sea "activa"
    // Si es "activa": cambiar a "bloqueada", cout éxito y return true
    // Si no es "activa": cout error y return false
    bool bloquear();
};

