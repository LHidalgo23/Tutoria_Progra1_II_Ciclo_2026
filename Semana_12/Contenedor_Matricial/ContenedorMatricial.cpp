// ============================================================================
// ContenedorMatricial.cpp
// ----------------------------------------------------------------------------
// ARCHIVO DE IMPLEMENTACIÓN (.cpp): aquí está el código de cada método
// declarado en ContenedorMatricial.h. Cada método lleva el prefijo
// "ContenedorMatricial::" para indicar a qué clase pertenece.
// ============================================================================

#include "ContenedorMatricial.h"   // trae la declaración de la clase

// CONSTRUCTOR
// Al crear el contenedor, la próxima posición libre es la [0][0].
ContenedorMatricial::ContenedorMatricial() {
    filAct = 0;
    colAct = 0;
}

// DESTRUCTOR
// Vacío, porque la matriz es estática (no hay memoria dinámica que liberar).
ContenedorMatricial::~ContenedorMatricial() {}

// ESTALLENO
// La matriz tiene 3 filas (0, 1 y 2). Cuando filAct llega a 3 significa que
// ya se llenaron las 9 posiciones. El "const" indica que no modifica al objeto.
// Indica si ya no hay espacio para más personas.
bool ContenedorMatricial::estaLleno() const {
    return filAct >= 3;
}

// INGRESAPERSONA
// Pide los datos por teclado y se los asigna a la Persona que está en la
// posición [filAct][colAct]. Luego avanza a la siguiente posición libre.
// Establecerle los datos a las personas que viven ya en la matriz.
// Retorna true si se ingresó la persona, false si la matriz ya estaba llena.
bool ContenedorMatricial::ingresaPersona() {
    // Se valida ANTES de usar los índices; si la matriz está llena, no se
    // pide nada y se avisa con false (así no se sale de la matriz).
    if (estaLleno()) {      // TAREA MORAL: se valida ANTES de usar los índices
        return false;
    }

    // Variables temporales para leer los datos del usuario.
    string ced, nom;
    int ed;
    cout << "Ingrese la cedula...";
    cin >> ced;
    cout << "Ingrese el nombre..";
    cin >> nom;
    cout << "Ingrese la edad..";
    cin >> ed;

    // Se le asignan los datos a la Persona de la posición actual.
    mat[filAct][colAct].setCedula(ced);
    mat[filAct][colAct].setNombre(nom);
    mat[filAct][colAct].setEdad(ed);

    // Se avanza a la siguiente columna; al pasar de la columna 2, se
    // regresa a la columna 0 y se baja a la siguiente fila.
    colAct++;
    if (colAct == 3) {
        colAct = 0;
        filAct++;
    }
    return true;
}

// TOSTRING
// Recorre la matriz con dos for (el de i recorre las filas y el de j las
// columnas) y agrega al texto solo las personas ya ingresadas, que son las que
// tienen la cédula distinta de vacío (las no ingresadas conservan cedula = "").
// Cada una se muestra con su posición [i][j].
string ContenedorMatricial::toString() {
    stringstream s;
    s << "-----------LISTADO DE PERSONAS DEL CONTENEDOR MATRICIAL------------" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (mat[i][j].getCedula() != "")
                s << "[" << i << "][" << j << "]  " << mat[i][j].toString() << endl;
    return s.str();
}

// TOSTRINGMATRIZ
// Muestra el contenido con forma de matriz: el for interno (j) escribe las 3
// personas de una fila separadas por tabulador, y el endl del for externo (i)
// baja a la siguiente línea al terminar cada fila.
string ContenedorMatricial::toStringMatriz() const {
    stringstream s;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            s << mat[i][j].getCedula() << " " << mat[i][j].getNombre() << "\t";
        s << endl;
    }
    return s.str();
}
