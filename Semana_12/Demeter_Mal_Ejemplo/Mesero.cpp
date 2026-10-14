// ============================================================================
// Mesero.cpp  (MAL EJEMPLO)
// ----------------------------------------------------------------------------
// Implementación de la clase Mesero.
// ============================================================================
#include"Mesero.h"

// Entrega la cocina interna del mesero (por referencia, para poder usarla).
Cocina& Mesero::getCocina() {
    return cocina;
}
