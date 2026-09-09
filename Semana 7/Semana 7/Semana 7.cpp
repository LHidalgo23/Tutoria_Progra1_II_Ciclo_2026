#include <iostream>
#include "Supermercado.h"
using namespace std;

int main() {
    system("cls");

    Supermercado* super = new Supermercado(20);

    // Crear productos dinamicos con IVA y Vencimiento dinamicos
    // Producto(codigo, nombre, existencia, precioBase, %ganancia, IVA*, Vencimiento*)

    super->ingresarProducto(new Producto(
        "001", "Leche Dos Pinos", 50, 800.0, 15.0,
        new IVA(13.0, new Fecha(31, 12, 2025)),
        new Vencimiento(new Fecha(15, 10, 2025))   // ya expiro
    ));

    super->ingresarProducto(new Producto(
        "002", "Arroz Tio Pelon", 200, 500.0, 20.0,
        new IVA(13.0, new Fecha(31, 12, 2026)),
        new Vencimiento(new Fecha(1, 6, 2026))
    ));

    super->ingresarProducto(new Producto(
        "003", "Frijoles La Mujer", 150, 600.0, 18.0,
        new IVA(4.0, new Fecha(31, 12, 2026)),
        new Vencimiento(new Fecha(30, 11, 2024))   // ya expiro
    ));

    super->ingresarProducto(new Producto(
        "004", "Pan Bimbo", 80, 900.0, 25.0,
        new IVA(13.0, new Fecha(31, 12, 2026)),
        new Vencimiento(new Fecha(20, 3, 2027))
    ));

    // Intentar duplicado
    bool dup = super->ingresarProducto(new Producto(
        "002", "DUPLICADO", 1, 1.0, 1.0,
        new IVA(0.0, new Fecha(1, 1, 2030)),
        new Vencimiento(new Fecha(1, 1, 2030))
    ));
    cout << "Intento duplicado codigo 002: " << (dup ? "ingresado" : "rechazado") << "\n\n";

    // Imprimir inventario completo
    cout << super->toString() << "\n";

    // Fecha de referencia para los calculos
    Fecha* hoy = new Fecha(1, 9, 2026);

    // 2. Verificar existencia
    cout << "Existe '001': " << (super->existeProducto("001") ? "si" : "no") << "\n";
    cout << "Existe '999': " << (super->existeProducto("999") ? "si" : "no") << "\n\n";

    // 4. Expirados
    cout << "Cantidad expirados al " << hoy->toString()
        << ": " << super->cantidadExpirados(hoy) << "\n";
    cout << super->listarExpirados(hoy) << "\n";

    // 5. Total invertido
    cout << "Total invertido: " << super->totalInvertido() << "\n\n";

    // 6. Ganancias (sin expirados)
    cout << "Ganancias al " << hoy->toString()
        << ": " << super->totalGanancias(hoy) << "\n\n";

    // 7a. Cambiar fecha del IVA del producto "002"
    bool ok7a = super->cambiarFechaIva("002", new Fecha(31, 12, 2028));
    cout << "Cambiar fecha IVA '002': " << (ok7a ? "ok" : "no encontrado") << "\n";

    // 7b. Cambiar porcentaje del IVA del producto "004"
    bool ok7b = super->cambiarPorcentajeIva("004", 2.0);
    cout << "Cambiar % IVA '004' a 2%: " << (ok7b ? "ok" : "no encontrado") << "\n\n";

    // Estado final
    cout << super->toString();

    delete hoy;
    delete super;

    system("pause");
    return 0;
}