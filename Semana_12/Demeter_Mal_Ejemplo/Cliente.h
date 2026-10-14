// ============================================================================
// Cliente.h  (MAL EJEMPLO: viola la Ley de Demeter)
// ----------------------------------------------------------------------------
// El Cliente pide comida. Su único "amigo cercano" debería ser el Mesero.
// ============================================================================
#pragma once
#include<iostream>
#include<string>
#include"Mesero.h"
using namespace std;

class Cliente {
public:
    // Pide un plato usando al mesero.
    void pedir(Mesero& mesero, string plato);
};
