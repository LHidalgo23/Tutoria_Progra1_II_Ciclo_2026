// ============================================================================
// Archivo  : ContenedorMatC.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de la clase ContenedorMatC (FORMA C: matriz
//            dinámica de objetos Persona), declarada en ContenedorMatC.h.
// ============================================================================

#include "ContenedorMatC.h"   // Trae la declaración de la clase

// Constructor.
// Recibe la cantidad de filas (f) y de columnas (c) y arma la matriz en dos pasos:
ContenedorMatC::ContenedorMatC(int f, int c) {
  filas = f;       // Guarda las dimensiones para poder usarlas después
  columnas = c;    // (por ejemplo, en el destructor)
  fil = 0;         // El cursor de inserción empieza en la celda (0,0)
  col = 0;

  // Paso 1: reservar el arreglo de punteros, uno por cada fila.
  mat = new Persona*[filas];

  // Paso 2: para cada fila, reservar el arreglo de Personas (las columnas).
  // new Persona[columnas] construye cada Persona con el constructor por
  // defecto (nombre vacío).
  for (int i = 0; i < filas; i++) {
    mat[i] = new Persona[columnas];
  }
}

// Destructor.
// La memoria se libera en el orden INVERSO al que se reservó, y como se
// reservó con new[] se libera con delete[]:
//   1. primero cada fila (el arreglo de Personas),
//   2. después el arreglo de punteros a filas.
ContenedorMatC::~ContenedorMatC() {
  for (int i = 0; i < filas; i++) {
    delete[] mat[i];
  }
  delete[] mat;
}

// Devuelve la matriz completa como un texto, lista para imprimir con cout.
// Cada fila queda en su propia línea y se muestra el nombre de cada celda.
// Como en esta forma no existe nullptr, una celda vacía es una Persona con
// nombre vacío, por lo que no se ve nada (solo el espacio que separa).
// Ejemplo para una matriz 2x3 con dos Personas insertadas (la fila sin
// nombres sale en blanco):
//   Ana Luis
//
string ContenedorMatC::toString() {
  stringstream ss;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      ss << mat[i][j].toString();   // Nombre de la Persona guardada en la celda
    }
    ss << endl;   // Salto de línea al terminar cada fila
  }
  ss << endl;     // Línea en blanco al final de la matriz
  return ss.str();
}

// Inserta una Persona en la matriz recorriendo FILA POR FILA:
// (0,0) (0,1) (0,2) ... luego (1,0) (1,1) ... y así sucesivamente.
// Las variables fil y col son el "cursor" que recuerda en cuál celda
// toca insertar la próxima vez. Es la misma lógica de ContenedorMatD; lo que
// cambia es cómo se sabe que una celda está libre y cómo se guarda la Persona.
void ContenedorMatC::inserTarPorFila(Persona persona) {
  // 1. Se guarda la Persona solo si el cursor está dentro de la matriz y la
  //    celda está libre. Aquí "libre" significa nombre vacío "" (no hay nullptr).
  //    Se guarda con una asignación: la matriz recibe una COPIA de la Persona.
  //    Ojo: por esta razón no se puede insertar una Persona con nombre vacío.
  if (fil < filas
    && col < columnas
    && mat[fil][col].getNombre() == "") {
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
