// ============================================================================
// main.cpp  (MAL EJEMPLO)
// ----------------------------------------------------------------------------
// Prueba: un cliente le pide una pizza al restaurante.
// Funciona, pero el diseño es frágil (ver Cliente.cpp).
// ============================================================================
#include<cstdlib>      // system("pause")
#include"Cliente.h"

int main() {
    cout << "--- MAL EJEMPLO: el cliente entra a la cocina ---" << endl;

    Mesero mesero;
    Cliente cliente;

    cliente.pedir(mesero, "Pizza");

    system("pause");   // detiene la consola hasta presionar una tecla (Windows)
    return 0;
}
