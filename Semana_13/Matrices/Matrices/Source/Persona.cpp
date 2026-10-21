// ============================================================================
// Archivo  : Persona.cpp
// Tipo     : Archivo de implementación
// Propósito: Contiene el código de los métodos de la clase Persona que fue
//            declarada en Persona.h.
//
// Recordatorio: para implementar un método fuera de la clase se escribe
//               NombreClase::nombreMetodo, el operador :: indica a qué clase
//               pertenece el método.
// ============================================================================

#include "Persona.h"   // Trae la declaración de la clase que vamos a implementar

// Constructor por defecto.
// Después de los dos puntos está la "lista de inicialización": deja el
// atributo nombre vacío (""), que representa una Persona sin nombre asignado.
Persona::Persona() : nombre("") {}

// Constructor con parámetro.
// Inicializa el atributo nombre con el valor recibido (n).
Persona::Persona(string n) : nombre(n) {}

// Destructor.
// Está vacío porque Persona no reserva memoria dinámica (no usa new),
// así que no hay nada que liberar. (El string se libera solo.)
Persona::~Persona() {}

// Getter del nombre.
// Permite leer el atributo privado nombre desde fuera de la clase.
string Persona::getNombre() {
  return nombre;
}

// Convierte la Persona a texto.
// Usa un stringstream (funciona como cout, pero escribe en un texto en memoria)
// y devuelve el nombre seguido de un espacio, para que al imprimir varias
// Personas en una fila queden separadas. Ejemplo: Persona("Ana") -> "Ana "
string Persona::toString() {
  stringstream ss;
  ss << nombre << " ";
  return ss.str();
}
