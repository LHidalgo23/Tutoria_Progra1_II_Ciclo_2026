// ============================================================================
// main.cpp  (BUEN EJEMPLO)
// ----------------------------------------------------------------------------
// Prueba: un cliente le pide una pizza al restaurante.
// El resultado es el mismo que en el mal ejemplo, pero el diseño es sólido:
// los cambios en la cocina no afectan al cliente.
// ============================================================================
#include<cstdlib>      // system("pause")
#include"Cliente.h"

int main() {
    cout << "--- BUEN EJEMPLO: el cliente solo habla con el mesero ---" << endl;

    Mesero mesero;
    Cliente cliente;

    cliente.pedir(mesero, "Pizza");

    system("pause");   // detiene la consola hasta presionar una tecla (Windows)
    return 0;
}
