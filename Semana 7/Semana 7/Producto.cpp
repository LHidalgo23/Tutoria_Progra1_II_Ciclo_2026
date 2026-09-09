#include "Producto.h"

Producto::Producto() {
    codigo = "---";
    nombre = "sin nombre";
    existencia = 0;
    precioBase = 0.0;
    porcentajeGan = 0.0;
    iva = nullptr;
    vencimiento = nullptr;
}

Producto::Producto(string codigo, string nombre, int existencia,
    double precioBase, double porcentajeGan,
    IVA* iva, Vencimiento* vencimiento) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->existencia = existencia;
    this->precioBase = precioBase;
    this->porcentajeGan = porcentajeGan;
    this->iva = iva;
    this->vencimiento = vencimiento;
}

Producto::~Producto() {
    delete iva;
    delete vencimiento;
}

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
int    Producto::getExistencia() { return existencia; }
double Producto::getPrecioBase() { return precioBase; }
double Producto::getPorcentajeGan() { return porcentajeGan; }


IVA* Producto::getIva() { return iva; }
Vencimiento* Producto::getVencimiento() { return vencimiento; }

void Producto::setCodigo(string codigo) { this->codigo = codigo; }
void Producto::setNombre(string nombre) { this->nombre = nombre; }
void Producto::setExistencia(int existencia) { this->existencia = existencia; }
void Producto::setPrecioBase(double precio) { this->precioBase = precio; }
void Producto::setPorcentajeGan(double porc) { this->porcentajeGan = porc; }

void Producto::setIVA(IVA* iva) { this->iva=iva; }
void Producto::setVencimiento(Vencimiento* vencimiento) { this->vencimiento=vencimiento; }

double Producto::getPrecioVenta() {
    double montoIva = precioBase * (iva->getPorcentaje() / 100.0);
    double montoGanancia = precioBase * (porcentajeGan / 100.0);
    return precioBase + montoIva + montoGanancia;
}

double Producto::getGanancia() {
    return precioBase * 0.15;
}

bool Producto::estaExpirado(Fecha* referencia) {
    return vencimiento->estaExpirado(referencia);
}

string Producto::toString() {
    stringstream ss;
    ss << "Codigo: " << codigo
        << " | Nombre: " << nombre
        << " | Exist: " << existencia
        << " | Base: " << precioBase
        << " | Venta: " << getPrecioVenta()
        << " | " << iva->toString()
        << " | " << vencimiento->toString();
    return ss.str();
}