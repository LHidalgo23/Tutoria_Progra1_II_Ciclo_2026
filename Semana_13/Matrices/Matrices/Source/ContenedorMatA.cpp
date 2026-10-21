// ============================================================================
// Archivo  : ContenedorMatA.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de la clase ContenedorMatA (FORMA A: matriz
//            estática de objetos Persona), declarada en ContenedorMatA.h.
// ============================================================================

#include "ContenedorMatA.h"   // Trae la declaración de la clase

// Constructor.
// Recorre la matriz con dos ciclos: el de afuera (i) controla las filas y el
// de adentro (j) controla las columnas, así se visita cada una de las 9 celdas.
// A cada celda se le asigna una Persona() por defecto (nombre vacío).
//
// Nota: C++ ya construye automáticamente cada Persona del arreglo con su
//       constructor por defecto; esta asignación solo lo hace explícito para
//       que se vea cómo se recorre una matriz.
ContenedorMatA::ContenedorMatA() {
  fil = 0;   // El cursor de inserción empieza en la celda (0,0)
  col = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mat[i][j] = Persona();
    }
  }
}

// Destructor.
// Está vacío: las Personas están guardadas por valor dentro del propio objeto,
// así que C++ las destruye solo cuando el contenedor se destruye. No hay
// memoria dinámica (new) que liberar.
ContenedorMatA::~ContenedorMatA() {}

// Devuelve la matriz completa como un texto, lista para imprimir con cout.
// Cada fila queda en su propia línea y se muestra el nombre de cada celda.
// Como en esta forma no existe nullptr, una celda vacía es una Persona con
// nombre vacío, por lo que no se ve nada (solo el espacio que separa).
// Ejemplo con dos Personas insertadas (las filas sin nombres salen en blanco):
//   Ana Luis
//
//
string ContenedorMatA::toString() {
  stringstream ss;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ss << mat[i][j].toString();   // Nombre de la Persona guardada en la celda
    }
    ss << endl;   // Salto de línea al terminar cada fila
  }
  ss << endl;     // Línea en blanco al final de la matriz
  return ss.str();
}

// Inserta una Persona en la matriz recorriendo FILA POR FILA:
// (0,0) (0,1) (0,2) luego (1,0) (1,1) (1,2) y así sucesivamente.
// Las variables fil y col son el "cursor" que recuerda en cuál celda
// toca insertar la próxima vez. Es la misma lógica de ContenedorMatD; lo que
// cambia es cómo se sabe que una celda está libre y cómo se guarda la Persona.
void ContenedorMatA::inserTarPorFila(Persona persona) {
  // 1. Se guarda la Persona solo si el cursor está dentro de la matriz y la
  //    celda está libre. Aquí "libre" significa nombre vacío "" (no hay nullptr).
  //    Se guarda con una asignación: la matriz recibe una COPIA de la Persona.
  //    Ojo: por esta razón no se puede insertar una Persona con nombre vacío.
  if (fil < 3
    && col < 3
    && mat[fil][col].getNombre() == "") {
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
