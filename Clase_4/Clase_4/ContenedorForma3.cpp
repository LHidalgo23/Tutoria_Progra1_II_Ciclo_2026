#include "ContenedorForma3.h"

ContenedorForma3::ContenedorForma3() {
    cant = 0;   // cantidad de elementos válidos que tiene el vector.
    tam = 20;   // tamaño completo del vector y se ha establecido en tiempo de compilación.
    for (int i = 0; i < tam; i++)  // Limpiar el vector de basura, "poniendo" a ver las flechas a NULL.
        vec[i] = NULL;
}

ContenedorForma3::~ContenedorForma3() {
    // Destruir las personas (objetos dinámicos) que están dentro del vector.
    for (int i = 0; i < cant;i++)
        delete vec[i];
}


bool ContenedorForma3::ingresarPersona(Persona* ptr) {
    if (cant < tam) {
        vec[cant++] = ptr;
        return true;
    }
    else
        return false;
}
Persona* ContenedorForma3::mayorEdad() {  // Devuelve un puntero a la persona con mayor edad del contenedor.
    if (cant == 0) return NULL;  // No hay personas ingresadas, no hay a quien devolver.
    Persona* mayor = vec[0];  // Asumimos que el primero es el de mayor edad.
    for (int i = 1; i < cant; i++) {  // Recorremos desde el segundo hasta el último ingresado.
        if (vec[i]->getEdad() > mayor->getEdad()) {
            mayor = vec[i];  // Actualizamos si encontramos uno con mayor edad.
        }
    }
    return mayor;
}

bool ContenedorForma3::existeCedula(string ced) {
    for (int i = 0;i < cant;i++) {
        if(vec[i]->getCedula() == ced)
            return true;
    }
    return false;

}

bool ContenedorForma3::eliminaPersona(int pos) {  // Elimina la persona que está en la posición "pos" del vector.
    if (pos >= 0 && pos < cant) {  // Validamos que la posición exista dentro de lo que hay ingresado.
        delete vec[pos];  // Liberamos la memoria de la persona antes de perder la referencia a ella.
        // Recorremos desde la posición a eliminar hasta el final,
        // corriendo cada puntero una posición hacia atrás.
        for (int i = pos; i < cant - 1; i++) {
            vec[i] = vec[i + 1];
        }
        vec[cant - 1] = NULL;  // Limpiamos la última posición que quedó "duplicada".
        cant--;  // Disminuimos la cantidad de personas que hay en el contenedor.
        return true;
    }
    return false;  // La posición no es válida.
}

string ContenedorForma3::toString() {
    stringstream ss;
    ss << "------Listado de personas dinamicas-----"<<endl;
    for (int i = 0;i < cant;i++)
        ss << vec[i]->toString() << endl;
    return ss.str();

}
