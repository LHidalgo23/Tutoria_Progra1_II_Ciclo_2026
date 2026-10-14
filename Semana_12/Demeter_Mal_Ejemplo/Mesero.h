// ============================================================================
// Mesero.h  (MAL EJEMPLO: viola la Ley de Demeter)
// ----------------------------------------------------------------------------
// El Mesero tiene una Cocina. El problema es que la EXPONE hacia afuera con
// getCocina(), así que cualquiera puede "entrar a la cocina" a través de él.
// ============================================================================
#pragma once
#include"Cocina.h"

class Mesero {
private:
    Cocina cocina;   // la cocina es un detalle interno del mesero

public:
    // MAL: devuelve la cocina para que otros la usen directamente.
    // Esto es lo que permite que el Cliente hable con la Cocina.
    Cocina& getCocina();
};
