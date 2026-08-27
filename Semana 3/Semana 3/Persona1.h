#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Persona1 {


private:
    //Acceso solo dentro de la clase
    string nombre;


public:
    //Acceso fuera de la clase
    Persona1();
    Persona1(string);
    ~Persona1();

    string getNombre();
    void setNombre(string nom);
};

