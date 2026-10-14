// ============================================================================
// Cliente.h  (BUEN EJEMPLO: respeta la Ley de Demeter)
// ----------------------------------------------------------------------------
// El Cliente pide comida. Solo habla con su amigo cercano: el Mesero.
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
