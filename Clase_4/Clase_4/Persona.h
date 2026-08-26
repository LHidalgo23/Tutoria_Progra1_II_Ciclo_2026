#pragma once
// ------ CONTENEDORES ----- COLECCIONES -----
//                FORMA No.1

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class Persona {
private:
    string cedula;
    string nombre;
    int edad;
public:
    Persona();
    Persona(string ced, string nom, int ed);
    virtual ~Persona();

    int getEdad();
    string getCedula();
    void setCedula(string ced);
    void setNombre(string nom);
    void setEdad(int ed);

    // ACCESORES Y MUTADORES  (GET'S Y SET´S).
    string toString();
};
