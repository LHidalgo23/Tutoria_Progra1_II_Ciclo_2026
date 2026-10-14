// ============================================================================
// Cliente.cpp  (BUEN EJEMPLO)
// ----------------------------------------------------------------------------
// Implementación de la clase Cliente.
// ============================================================================
#include"Cliente.h"

void Cliente::pedir(Mesero& mesero, string plato) {
    // RESPETA DEMETER: un solo punto. El cliente solo habla con el mesero,
    // sin saber que existe una cocina ni cómo funciona por dentro.
    cout << mesero.tomarOrden(plato) << endl;
}
