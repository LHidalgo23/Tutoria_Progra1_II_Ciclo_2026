// ============================================================================
// Cocina.h  (BUEN EJEMPLO: respeta la Ley de Demeter)
// ----------------------------------------------------------------------------
// La Cocina es quien prepara los platos. Solo habla con el Mesero.
// ============================================================================
#pragma once
#include<string>
using namespace std;

class Cocina {
public:
    // Prepara el plato que se le pide y devuelve un texto indicando que está listo.
    string preparar(string plato);
};
