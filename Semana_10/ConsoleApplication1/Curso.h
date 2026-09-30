// ============================================================
// Curso.h
// Clase que representa un curso de la universidad.
// ============================================================
#pragma once

#include <string>
using namespace std;

class Curso {
private:
    string codigo;
    string nombre;
    int creditos;

public:
    Curso();
    Curso(string codigo, string nombre, int creditos);
    ~Curso();

    string getCodigo();
    string getNombre();
    int getCreditos();

    string tostring();
};