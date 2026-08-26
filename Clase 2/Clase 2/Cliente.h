#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cliente {

private:
    string cedula;
    string nombre;
    string email;
    string telefono;
    string fechaRegistro;

public:

    // CONSTRUCTOR
    Cliente(string ced, string nom, string mail, string tel, string fecha);


    // ========== GETTERS ==========
    string getCedula() ;
    string getNombre() ;
    string getEmail() ;
    string getTelefono() ;
    string getFechaRegistro() ;


    // ========== SETTERS ==========
    void setCedula(string ced);
    void setNombre(string nom);
    void setEmail(string mail);
    void setTelefono(string tel);
    void setFechaRegistro(string fecha);


    // ========== MÉTODO: mostrarInfo() ==========
    string mostrarInfo() ;


    // ========== MÉTODO 1: esValido() ==========
    // DESCRIPCIÓN: Verifica que el cliente tenga datos básicos
    // RETORNA: bool - true si es válido, false si no
    //
    // TODO: Implementar
    // Validar que nombre, cedula y email NO estén vacíos
    // Si alguno está vacío: cout error y return false
    // Si todos están llenos: cout éxito y return true
    bool esValido();


    // ========== MÉTODO 2: cambiarCorreo() ==========
    // DESCRIPCIÓN: Cambia el email del cliente
    // PARÁMETRO: nuevoEmail (string)
    // RETORNA: bool - true si cambió, false si no
    //
    // TODO: Implementar
    // Validar que nuevoEmail NO esté vacío
    // Si está vacío: cout error y return false
    // Si no está vacío: cambiar this->email y cout éxito y return true
    bool cambiarCorreo(string nuevoEmail);
};