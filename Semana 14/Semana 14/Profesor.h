// ============================================================================
// Archivo  : Profesor.h
// Tipo     : Archivo de encabezado
// Propósito: Clase HIJA de Persona. Un Profesor ES UNA Persona que además
//            imparte un curso.
// ============================================================================

#pragma once

#include "Persona.h"

class Profesor : public Persona {
private:
    string curso;

public:
    Profesor(string n, string curso);
    ~Profesor() override;

    string getCurso();       // Método PROPIO de Profesor

    string toString() override;
    string getTipo() override;
};
