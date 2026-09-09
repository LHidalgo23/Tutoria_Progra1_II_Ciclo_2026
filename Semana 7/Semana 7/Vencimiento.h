#pragma once
#include "Fecha.h"
class Vencimiento{
private:
    Fecha* fechaVencimiento;   // composicion

public:
    Vencimiento();
    Vencimiento(Fecha* fecha);
    virtual ~Vencimiento();

    Fecha* getFecha();
    void setFecha(Fecha* fecha);

    // Retorna true si el producto ya expiro respecto a 'referencia'
    bool estaExpirado(Fecha* referencia);

    string toString();

};

