// ============================================================================
// Cocina.h  (MAL EJEMPLO: viola la Ley de Demeter)
// ----------------------------------------------------------------------------
// La Cocina es quien prepara los platos. Es "amiga" del Mesero, no del Cliente.
// ============================================================================
#pragma once
#include<string>
using namespace std;

class Cocina {
public:
    // Prepara el plato que se le pide y devuelve un texto indicando que está listo.
    string preparar(string plato);
};
