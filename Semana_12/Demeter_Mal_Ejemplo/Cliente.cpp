// ============================================================================
// Cliente.cpp  (MAL EJEMPLO)
// ----------------------------------------------------------------------------
// Implementación de la clase Cliente.
// ============================================================================
#include"Cliente.h"

void Cliente::pedir(Mesero& mesero, string plato) {
    // VIOLA DEMETER: el cliente "entra a la cocina".
    // Aquí hay dos puntos: mesero.getCocina().preparar(...)
    // El cliente habla con la Cocina, que es amiga del mesero, no suya.
    // Si la cocina cambia (por ejemplo, preparar() pide también el número de
    // mesa), este código se rompe, y también el de TODOS los clientes.
    cout << mesero.getCocina().preparar(plato) << endl;
}
