#include "Vencimiento.h"

Vencimiento::Vencimiento() {
    fechaVencimiento = new Fecha(31, 12, 2099);
}

Vencimiento::Vencimiento(Fecha* fecha) {
    fechaVencimiento = fecha;
}

Vencimiento::~Vencimiento() {
    delete fechaVencimiento;
}

Fecha* Vencimiento::getFecha() { return fechaVencimiento; }

void Vencimiento::setFecha(Fecha* fecha) {
    delete fechaVencimiento;
    fechaVencimiento = fecha;
}

bool Vencimiento::estaExpirado(Fecha* referencia) {
    // Expirado si la fecha de vencimiento es anterior a la referencia
    return fechaVencimiento->esAntesDe(referencia);
}

string Vencimiento::toString() {
    return "Vence: " + fechaVencimiento->toString();
}

