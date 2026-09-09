#include "IVA.h"

IVA::IVA() {
    porcentaje = 0.0;
    fechaFin = nullptr;
}

IVA::IVA(double porcentaje, Fecha* fechaFin) {
    this->porcentaje = porcentaje;
    this->fechaFin = fechaFin;
}

IVA::~IVA() {
    delete fechaFin;   // composicion: IVA creo su Fecha, la destruye
}

double IVA::getPorcentaje() { return porcentaje; }
Fecha* IVA::getFechaFin() { return fechaFin; }

void IVA::setPorcentaje(double porcentaje) {
    this->porcentaje = porcentaje;
}

void IVA::setFechaFin(Fecha* nuevaFecha) {
    delete fechaFin;          // borra la anterior
    fechaFin = nuevaFecha;    // apunta a la nueva
}

string IVA::toString() {
    stringstream ss;
    ss << "IVA: " << porcentaje << "% (hasta " << fechaFin->toString() << ")";
    return ss.str();
}



