// ============================================================================
// Archivo  : ContenedorMatB.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de la clase ContenedorMatB (FORMA B: matriz
//            estática de punteros a Persona), declarada en ContenedorMatB.h.
// ============================================================================

#include "ContenedorMatB.h"   // Trae la declaración de la clase

// Constructor.
// Un puntero sin inicializar contiene basura, por eso se recorre toda la
// matriz y se deja cada celda en nullptr (significa "aquí no hay nadie").
ContenedorMatB::ContenedorMatB() {
  fil = 0;   // El cursor de inserción empieza en la celda (0,0)
  col = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mat[i][j] = nullptr;
    }
  }
}

// Destructor.
// El contenedor es el dueño de las Personas, entonces debe liberarlas.
// Se recorre la matriz y solo se hace delete en las celdas que NO son nullptr
// (hacer delete de una celda vacía no es necesario, y de basura sería un error).
ContenedorMatB::~ContenedorMatB() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (mat[i][j] != nullptr)
        delete mat[i][j];
    }
  }
}

// Devuelve la matriz completa como un texto, lista para imprimir con cout.
// Cada fila queda en su propia línea. Si la celda tiene una Persona se
// muestra su nombre; si está vacía se muestra la letra N (de nullptr).
// Ejemplo con dos Personas insertadas:
//   Ana Luis N
//   N N N
//   N N N
string ContenedorMatB::toString() {
  stringstream ss;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (mat[i][j] != nullptr) {
        ss << mat[i][j]->toString();   // Celda ocupada: nombre de la Persona
      } else {
        ss << "N ";                    // Celda vacía
      }
    }
    ss << endl;   // Salto de línea al terminar cada fila
  }
  ss << endl;     // Línea en blanco al final de la matriz
  return ss.str();
}

// Inserta una Persona en la matriz recorriendo FILA POR FILA:
// (0,0) (0,1) (0,2) luego (1,0) (1,1) (1,2) y así sucesivamente.
// Las variables fil y col son el "cursor" que recuerda en cuál celda
// toca insertar la próxima vez. Es la misma lógica de ContenedorMatD, solo que
// la matriz tiene tamaño fijo 3x3.
void ContenedorMatB::inserTarPorFila(Persona *persona) {
  // 1. Se guarda la Persona solo si el cursor está dentro de la matriz y la
  //    celda está libre (nullptr).
  //    Ojo: si la celda estuviera ocupada, la Persona recibida NO se guarda
  //    y el contenedor no la libera (quedaría sin dueño).
  if (fil < 3
    && col < 3
    && mat[fil][col] == nullptr) {
      mat[fil][col] = persona;
    }

  // 2. Se mueve el cursor a la siguiente columna.
  col++;

  // 3. Si se pasó de la última columna, se pasa al inicio de la siguiente fila.
  if (col == 3) {
    col = 0;
    fil++;
  }

  // 4. Si se pasó de la última fila, la matriz se recorrió completa y el
  //    cursor vuelve a la celda (0,0).
  if (fil == 3) {
    fil = 0;
    col = 0;
  }
}
