// ============================================================================
// Archivo  : ContenedorMatD.cpp
// Tipo     : Archivo de implementación
// Propósito: Colección polimórfica + uso de dynamic_cast.
//
// ¿QUÉ ES dynamic_cast?
//   Convierte un puntero de la BASE a un puntero de una HIJA (downcasting),
//   revisando EN TIEMPO DE EJECUCIÓN si el objeto realmente es de ese tipo:
//
//     Estudiante* e = dynamic_cast<Estudiante*>(p);
//       - Si p apunta a un Estudiante -> e es un puntero válido.
//       - Si p apunta a otra cosa     -> e es nullptr.
//
//   Se usa cuando se necesita un método que SOLO tiene la hija (getNota(),
//   getCurso()), porque a través de un Persona* no se pueden llamar.
//
//   Requisitos: la clase base debe tener al menos un método virtual (por eso
//   Persona tiene ~Persona() virtual). Siempre se revisa el resultado contra
//   nullptr antes de usarlo.
//
//   Diferencia con static_cast: static_cast NO revisa nada; si el objeto no
//   era Estudiante, el programa usa memoria incorrecta (comportamiento
//   indefinido). dynamic_cast es la forma SEGURA.
// ============================================================================

#include "ContenedorMatD.h"

ContenedorMatD::ContenedorMatD(int f, int c) {
    filas = f;
    columnas = c;
    fil = 0;
    col = 0;
    mat = new Persona * *[filas];
    for (int i = 0; i < filas; i++) {
        mat[i] = new Persona * [columnas];
        for (int j = 0; j < columnas; j++) {
            mat[i][j] = nullptr;
        }
    }
}

// Igual que antes, pero ahora 'delete mat[i][j]' es POLIMÓRFICO:
// si la celda tiene un Estudiante se ejecuta ~Estudiante() y luego ~Persona().
ContenedorMatD::~ContenedorMatD() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (mat[i][j] != nullptr)
                delete mat[i][j];
        }
        delete[] mat[i];
    }
    delete[] mat;
}

// POLIMORFISMO EN ACCIÓN: el código es idéntico al de la Forma D original,
// pero mat[i][j]->toString() ejecuta la versión del tipo REAL del objeto.
// Ejemplo de salida:
//   Ana[E] Marta[P] Luis[E]
//   Pedro  N N
string ContenedorMatD::toString() {
    stringstream ss;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (mat[i][j] != nullptr) {
                ss << mat[i][j]->toString();   // <- enlace dinámico
            }
            else {
                ss << "N ";
            }
        }
        ss << endl;
    }
    ss << endl;
    return ss.str();
}

void ContenedorMatD::inserTarPorFila(Persona* persona) {
    if (fil < filas
        && col < columnas
        && mat[fil][col] == nullptr) {
        mat[fil][col] = persona;
    }
    col++;
    if (col == columnas) {
        col = 0;
        fil++;
    }
    if (fil == filas) {
        fil = 0;
        col = 0;
    }
}

Punto* ContenedorMatD::buscarPorNombre(string n) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (mat[i][j] != nullptr && mat[i][j]->getNombre() == n) {
                return new Punto(i, j);
            }
        }
    }
    return nullptr;
}

// Recorre la matriz y, con dynamic_cast, se queda solo con los Estudiantes.
// mat[i][j]->getNota() NO compila (Persona no tiene getNota),
// por eso primero se convierte a Estudiante*.
string ContenedorMatD::mostrarEstudiantes() {
    stringstream ss;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            // dynamic_cast de nullptr devuelve nullptr, así que las celdas vacías
            // también quedan descartadas por el if.
            Estudiante* e = dynamic_cast<Estudiante*>(mat[i][j]);
            if (e != nullptr) {
                ss << "  " << e->getNombre() << " nota: " << e->getNota()
                    << "  en mat[" << i << "][" << j << "]" << endl;
            }
        }
    }
    return ss.str();
}

string ContenedorMatD::mostrarProfesores() {
    stringstream ss;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            Profesor* p = dynamic_cast<Profesor*>(mat[i][j]);
            if (p != nullptr) {
                ss << "  " << p->getNombre() << " imparte: " << p->getCurso()
                    << "  en mat[" << i << "][" << j << "]" << endl;
            }
        }
    }
    return ss.str();
}

// Otro uso típico de dynamic_cast: hacer un cálculo solo con un subtipo.
double ContenedorMatD::promedioEstudiantes() {
    double suma = 0;
    int cant = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            Estudiante* e = dynamic_cast<Estudiante*>(mat[i][j]);
            if (e != nullptr) {
                suma += e->getNota();
                cant++;
            }
        }
    }
    return (cant == 0) ? 0 : suma / cant;
}

// Alternativa SIN dynamic_cast: preguntarle el tipo al objeto mediante un
// método virtual. Sirve para contar/identificar, pero NO da acceso a los
// métodos propios de la hija (para eso sigue haciendo falta el cast).
int ContenedorMatD::contarPorTipo(string tipo) {
    int cant = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (mat[i][j] != nullptr && mat[i][j]->getTipo() == tipo) {
                cant++;
            }
        }
    }
    return cant;
}
