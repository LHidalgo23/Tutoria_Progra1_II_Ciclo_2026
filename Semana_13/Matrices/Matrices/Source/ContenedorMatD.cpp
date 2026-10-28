// ============================================================================
// Archivo  : ContenedorMatD.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de la clase ContenedorMatD (FORMA D: matriz
//            dinámica de punteros a Persona), declarada en ContenedorMatD.h.
// ============================================================================

#include "ContenedorMatD.h"   // Trae la declaración de la clase

// Constructor.
// Recibe la cantidad de filas (f) y de columnas (c) y arma una matriz vacía.
ContenedorMatD::ContenedorMatD(int f, int c) {
  filas = f;       // Guarda las dimensiones
  columnas = c;    //Tamano
  fil = 0;         // El cursor de inserción empieza en la celda (0,0)
  col = 0;        //cantidad = 0

  // Paso 1: reservar el arreglo de filas. Cada elemento es un Persona**
  // (un puntero al arreglo de punteros de esa fila).
  mat = new Persona **[filas];

  // Paso 2: para cada fila reservar su arreglo de punteros a Persona
  // (las columnas) y dejar todas las celdas en nullptr, o sea, vacías.
  for (int i = 0; i < filas; i++) {
    mat[i] = new Persona*[columnas]; //Estructura
    for (int j = 0; j < columnas; j++) {
      mat[i][j] = nullptr; //Direcciones de las personas
    }
  }
}

// Destructor.
// Libera la memoria en el orden inverso al que se reservó:
//   1. Cada Persona que exista (delete, porque se crearon con new),
//   2. el arreglo de punteros de cada fila (delete[]),
//   3. el arreglo de filas (delete[]).
ContenedorMatD::~ContenedorMatD() {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      if (mat[i][j] != nullptr)   // Solo se libera si la celda tiene una Persona
        delete mat[i][j];
    }
    delete[] mat[i];
  }
  delete[] mat;
}

// Devuelve la matriz completa como un texto, lista para imprimir con cout.
// Cada fila queda en su propia línea. Si la celda tiene una Persona se
// muestra su nombre; si está vacía se muestra la letra N (de nullptr).
// Ejemplo para una matriz 2x3 con dos Personas:
//   Ana Luis N
//   N N N
string ContenedorMatD::toString() {
  stringstream ss;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      if (mat[i][j] != nullptr) {
        ss << mat[i][j]->toString();   // Celda ocupada: nombre de la Persona
      } else {
        ss << "Null ";                    // Celda vacía
      }
    }
    ss << endl;   // Salto de línea al terminar cada fila
  }
  ss << endl;     // Línea en blanco al final de la matriz
  return ss.str();
}

// Inserta una Persona en la matriz recorriendo FILA POR FILA:
// (0,0) (0,1) (0,2) ... luego (1,0) (1,1) ... y así sucesivamente.
// Las variables fil y col son el "cursor" que recuerda en cuál celda
// toca insertar la próxima vez.
void ContenedorMatD::inserTarPorFila(Persona *persona) {
 if (fil < filas && col < columnas && mat[fil][col] == nullptr) {
      mat[fil][col] = persona;
    }

  // 2. Se mueve el cursor a la siguiente columna.
  col++;

  // 3. Si se pasó de la última columna, se pasa al inicio de la siguiente fila.
  if (col == columnas) {
    col = 0;
    fil++;
  }

  // 4. Si se pasó de la última fila, la matriz se recorrió completa y el
  //    cursor vuelve a la celda (0,0).
  if (fil == filas) {
    fil = 0;
    col = 0;
  }
}

// Busca un nombre recorriendo la matriz fila por fila.
// Si la encuentra, devuelve un Punto NUEVO (creado con new) con la posición:
//   x = fila,  y = columna.
// Si no la encuentra, devuelve nullptr.
// Quien llame a este método debe revisar que el resultado no sea nullptr antes
// de usarlo, y es responsable de hacer delete del Punto cuando ya no lo necesite.
Punto* ContenedorMatD::buscarPorNombre(string n) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      // Se revisa primero que la celda no sea nullptr; si no, getNombre()
      // sobre un puntero nulo haría fallar el programa.
      if (mat[i][j] != nullptr && mat[i][j]->getNombre() == n) {
        return new Punto(i, j);
      }
    }
  }
  return nullptr;   // Recorrió toda la matriz y no apareció el nombre
}
