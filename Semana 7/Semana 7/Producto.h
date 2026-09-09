#pragma once
#include "IVA.h"
#include "Vencimiento.h"
class Producto{
private:
    string      codigo;
    string      nombre;
    int         existencia;
    double      precioBase;       // precio al que el super compra el producto
    double      porcentajeGan;    // % de ganancia sobre el precio base

    IVA* iva;             // composicion: Producto crea y destruye su IVA
    Vencimiento* vencimiento;
public:
    Producto();
    Producto(string codigo, string nombre, int existencia,
        double precioBase, double porcentajeGan,
        IVA* iva, Vencimiento* vencimiento);
    virtual ~Producto();

    string getCodigo();
    string getNombre();
    int    getExistencia();
    double getPrecioBase();
    double getPorcentajeGan();
    IVA* getIva();
    Vencimiento* getVencimiento();


    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setExistencia(int existencia);
    void setPrecioBase(double precio);
    void setPorcentajeGan(double porcentaje);
    void setIVA(IVA* iva);
    void setVencimiento(Vencimiento* vencimiento);

    // Precio de venta = precioBase + IVA + ganancia
    double getPrecioVenta();

    // Ganancia real = precioBase * porcentajeGan / 100   (sin expirados)
    double getGanancia();

    bool estaExpirado(Fecha* referencia);

    string toString();

};

