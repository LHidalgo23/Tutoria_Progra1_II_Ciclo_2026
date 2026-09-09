#include "Supermercado.h"

// ── 1. Constructor y destructor ──────────────────────────────
Supermercado::Supermercado(int tamMax) {
    tam = tamMax;
    cant = 0;
    vec = new Producto * [tam];
}

Supermercado::~Supermercado() {
    for (int i = 0; i < cant; i++)
        delete vec[i];      // cada Producto destruye su IVA y Vencimiento
    delete[] vec;
}

// ── Busqueda interna por codigo ──────────────────────────────
int Supermercado::buscarIndice(string codigo) {
    for (int i = 0; i < cant; i++)
        if (vec[i]->getCodigo() == codigo)
            return i;
    return -1;
}

// ── 2. Verificar existencia ───────────────────────────────────
bool Supermercado::existeProducto(string codigo) {
    return buscarIndice(codigo) != -1;
}

// ── 3. Ingresar producto (sin duplicados) ─────────────────────
bool Supermercado::ingresarProducto(Producto* p) {
    if (cant >= tam)                       return false;  // contenedor lleno
    if (existeProducto(p->getCodigo()))    return false;  // ya existe
    vec[cant++] = p;
    cout << "Ingresado correctamente" << endl;
    return true;
    
}

// ── 4a. Cantidad de expirados ─────────────────────────────────
int Supermercado::cantidadExpirados(Fecha* referencia) {
    int conteo = 0;
    for (int i = 0; i < cant; i++)
        if (vec[i]->estaExpirado(referencia))
            conteo++;
    return conteo;
}

// ── 4b. Listar expirados ──────────────────────────────────────
string Supermercado::listarExpirados(Fecha* referencia) {
    stringstream ss;
    ss << "=== Productos expirados antes de " << referencia->toString() << " ===\n";
    bool hayAlguno = false;
    for (int i = 0; i < cant; i++) {
        if (vec[i]->estaExpirado(referencia)) { //vec[i]=producto
            ss << vec[i]->toString() << "\n";
            hayAlguno = true;
        }
    }
    if (!hayAlguno) ss << "  (ninguno)\n";
    return ss.str();
}

// ── 5. Total invertido ────────────────────────────────────────
double Supermercado::totalInvertido() {
    double total = 0.0;
    for (int i = 0; i < cant; i++)
        total += vec[i]->getPrecioBase() * vec[i]->getExistencia();
    return total;
}

// ── 6. Ganancias totales en una fecha (sin expirados) ─────────
double Supermercado::totalGanancias(Fecha* referencia) {
    double total = 0.0;
    for (int i = 0; i < cant; i++)
        if (!vec[i]->estaExpirado(referencia))
            total += vec[i]->getGanancia() * vec[i]->getExistencia();
    return total;
}

// ── 7a. Cambiar fecha del IVA ─────────────────────────────────
bool Supermercado::cambiarFechaIva(string codigo, Fecha* nuevaFecha) {
    int idx = buscarIndice(codigo);
    if (idx == -1) return false;
    vec[idx]->getIva()->setFechaFin(nuevaFecha);  // IVA::setFechaFin borra la anterior
    return true;
}

 //── 7b. Cambiar porcentaje del IVA ───────────────────────────
bool Supermercado::cambiarPorcentajeIva(string codigo, double nuevoPorcentaje) {
    int idx = buscarIndice(codigo);
    if (idx == -1) return false;
    vec[idx]->getIva()->setPorcentaje(nuevoPorcentaje);
    return true;
}

string Supermercado::toString() {
    stringstream ss;
    ss << "===== INVENTARIO SUPERMERCADO (" << cant << " productos) =====\n";
    for (int i = 0; i < cant; i++)
        ss <<endl<< vec[i]->toString() << "\n"<<endl<<endl;
    return ss.str();
}



