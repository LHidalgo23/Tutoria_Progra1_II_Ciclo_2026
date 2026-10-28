// ============================================================================
// Archivo  : Estudiante.h
// Tipo     : Archivo de encabezado
// Propósito: Clase HIJA de Persona. Un Estudiante ES UNA Persona
//            (relación de herencia) que además tiene una nota.
//
//                 Persona            <- clase base
//                 /     \  (rama)
//          Estudiante  Profesor      <- clases derivadas
// ============================================================================

#pragma once

#include "Persona.h"

class Estudiante : public Persona {   // herencia PÚBLICA
private:
    double nota;

public:
    Estudiante(string n, double nota);
    ~Estudiante() override;

    double getNota();        // Método PROPIO: Persona no lo tiene.
    // Para llamarlo desde un Persona* hay que hacer
    // dynamic_cast<Estudiante*>.

// 'override' le pide al compilador que verifique que de verdad se está
// redefiniendo un método virtual de la base (si se escribe mal el nombre
// o la firma, da error en vez de crear un método nuevo sin avisar).
    string toString() override;
    string getTipo() override;
};
