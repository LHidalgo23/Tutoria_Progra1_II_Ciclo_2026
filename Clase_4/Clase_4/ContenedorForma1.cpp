#include "ContenedorForma1.h"

ContenedorForma1::ContenedorForma1() {  // Método constructor sin parámetros..
    cant = 0;   // empezamos en la posición cero (0)
    tam = 10;
}
ContenedorForma1:: ~ContenedorForma1(){
}

bool ContenedorForma1::ingresarPersona(){ // Ir ingresando valores a los objetos automaticos que hay en cada posición.       
    if (cant < tam) {  // Esto para no ingresar personas fuera del rango del vector..
        string ced, nom;
        int ed;
        cout << "Ingrese la cedula ";
        cin >> ced;
        cout << "Ingrese el nombre ";
        cin >> nom;
        cout << "Ingresar la edad ";
        cin >> ed;
        // con esta información lleno la información del objeto fantasma que está en la posición cant.
        vec[cant].setCedula(ced);
        vec[cant].setNombre(nom);
        vec[cant].setEdad(ed);
        cant++;
        return true;
    }
    else
        return false;
}

bool ContenedorForma1::eliminaPersona(int pos) {  // Elimina la persona que está en la posición "pos" del vector.
    if (pos >= 0 && pos < cant) {  // Validamos que la posición exista dentro de lo que hay ingresado.
        // Recorremos desde la posición a eliminar hasta el final,
        // corriendo cada objeto una posición hacia atrás.
        for (int i = pos; i < cant - 1; i++) {
            vec[i] = vec[i + 1];
        }
        cant--;  // Disminuimos la cantidad de personas que hay en el contenedor.
        return true;
    }
    return false;  // La posición no es válida.
}

Persona ContenedorForma1::mayorEdad() {  // Devuelve la persona con mayor edad del contenedor.
    Persona mayor = vec[0];  // Asumimos que el primero es el de mayor edad.
    for (int i = 1; i < cant; i++) {  // Recorremos desde el segundo hasta el último ingresado.
        if (vec[i].getEdad() > mayor.getEdad()) {
            mayor = vec[i];  // Actualizamos si encontramos uno con mayor edad.
        }
    }
    return mayor;
}

string ContenedorForma1::toString(){
    stringstream ss;
    ss << "----Lista de personas------" << endl;
    for (int i = 0;i < cant;i++)
        ss << vec[i].toString();
    return ss.str();
}
