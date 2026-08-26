#pragma once
#include <iostream>
#include <string>
using namespace std;

class Prestamo {

private:
    int idPrestamo;
    double montoSolicitado;
    double tasaInteres;
    int plazoMeses;
    int cuotasPagadas;
    string estado;          // "aprobado", "rechazado", "pagado"

public:

    // CONSTRUCTOR
    Prestamo(int id, double monto, double tasa, int plazo, int cuotas, string est);


    // ========== GETTERS ==========
    int getIdPrestamo() ;
    double getMontoSolicitado();
    double getTasaInteres();
    int getPlazoMeses();
    int getCuotasPagadas();
    string getEstado();


    // ========== SETTERS ==========
    void setIdPrestamo(int id);
    void setMontoSolicitado(double monto);
    void setTasaInteres(double tasa);
    void setPlazoMeses(int plazo);
    void setCuotasPagadas(int cuotas);
    void setEstado(string est);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo();


    // ========== MÉTODO 1: pagarCuota() ==========
    // DESCRIPCIÓN: Registra el pago de una cuota
    // RETORNA: bool - true si se pagó, false si hay error
    //
    // TODO: Implementar
    // Validar que estado sea "aprobado"
    // Si es válido: cuotasPagadas++
    //   - cout éxito y return true
    //   - Si cuotasPagadas == plazoMeses: cambiar estado a "pagado"
    // Si falla: cout error y return false
    bool pagarCuota();


    // ========== MÉTODO 2: obtenerProgreso() ==========
    // DESCRIPCIÓN: Retorna el progreso del préstamo
    // RETORNA: string con formato: "Préstamo #1001: 5 de 24 cuotas pagadas"
    //
    // TODO: Implementar
    // Combinar: "Préstamo #" + id + ": " + cuotasPagadas + " de " + plazoMeses + " cuotas pagadas"
    // Retornar el string formado
    // EJEMPLO: "Préstamo #1001: 5 de 24 cuotas pagadas"
    string obtenerProgreso();
};

