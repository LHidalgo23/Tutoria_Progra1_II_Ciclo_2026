// ============================================================================
// Mesero.cpp  (BUEN EJEMPLO)
// ----------------------------------------------------------------------------
// Implementación de la clase Mesero.
// ============================================================================
#include"Mesero.h"

// El mesero recibe el pedido y se lo pasa a la cocina (su amiga cercana).
// Si la cocina cambia (por ejemplo, preparar() pide también el número de
// mesa), SOLO se modifica este método; los clientes ni se enteran.
string Mesero::tomarOrden(string plato) {
    return cocina.preparar(plato);
}
