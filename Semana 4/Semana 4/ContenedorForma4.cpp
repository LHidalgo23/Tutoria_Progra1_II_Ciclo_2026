#include "ContenedorForma4.h"



ContenedorForma4::ContenedorForma4(int tama) {
    vec = new Persona * [tama];
    tam = tama;
    cant = 0;
}

ContenedorForma4::~ContenedorForma4() {
    // Primero se destruen todos los objetos dinámicos que tiene el vector..
    for (int i = 0; i < cant; i++)
        delete vec[i];
    delete[] vec;   // borro el vector vec, creado con un new (de manera dinámica).
}

bool ContenedorForma4::ingresarPersona(Persona* ptr) {
    if (cant < tam) {
        vec[cant++] = ptr;
        return true;
    }
    else
        return false;
}

bool ContenedorForma4::eliminaPersona(int pos) {  // Elimina la persona que está en la posición "pos" del vector.
    if (pos >= 0 && pos < cant) {  // Validamos que la posición exista dentro de lo que hay ingresado.
        delete vec[pos];  // Liberamos la memoria de la persona antes de perder la referencia a ella.
        for (int i = pos; i < cant - 1; i++) {
            vec[i] = vec[i + 1];
        }
        vec[cant - 1] = NULL;  // Limpiamos la última posición que quedó "duplicada".
        cant--;  // Disminuimos la cantidad de personas que hay en el contenedor.
        return true;
    }
    return false;  // La posición no es válida.
}

Persona* ContenedorForma4::mayorEdad() {  // Devuelve un puntero a la persona con mayor edad del contenedor.
    if (cant == 0) return NULL;  // No hay personas ingresadas, no hay a quien devolver.
    Persona* mayor = vec[0];  // Asumimos que el primero es el de mayor edad.
    for (int i = 1; i < cant; i++) {
        if (vec[i]->getEdad() > mayor->getEdad()) {
            mayor = vec[i];
        }
    }
    return mayor;
}

bool ContenedorForma4::existeCedula(string ced) {
    for (int i = 0; i < cant; i++) {
        if (vec[i]->getCedula() == ced)
            return true;  // Ya existe una persona con esa cédula.
    }
    return false;  // No se encontró, la cédula está disponible.
}

string ContenedorForma4::toString() {
    stringstream ss;
    ss << "------Listado de personas dinamicas-----" << endl;
    for (int i = 0; i < cant; i++)
        ss << vec[i]->toString() << endl;
    return ss.str();
}

