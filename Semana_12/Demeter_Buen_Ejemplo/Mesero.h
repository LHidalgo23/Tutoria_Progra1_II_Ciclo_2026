// ============================================================================
// Mesero.h  (BUEN EJEMPLO: respeta la Ley de Demeter)
// ----------------------------------------------------------------------------
// El Mesero tiene una Cocina, pero NO la expone. En su lugar ofrece un método
// (tomarOrden) para lo que el cliente necesita. El mesero es el único que
// habla con la cocina.
// ============================================================================
#pragma once
#include"Cocina.h"

class Mesero {
private:
    Cocina cocina;   // detalle interno: nadie de afuera la ve ni la usa

public:
    // BIEN: el cliente le pide el plato al mesero, y el mesero se encarga
    // de hablar con la cocina.
    string tomarOrden(string plato);
};
