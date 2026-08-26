#include <iostream>
#include <sstream>
#include <string>

#include "Persona1.h"

using namespace std;

void cambiaValor(int* ptr) {
	*ptr = 30;
}

int main() {

	cout << "Paso por puntero" << endl;
	cout << endl;


	Persona1* ptr = new Persona1("Luis");

	cout << ptr->getNombre() << endl;

	delete ptr;


	Persona1 personaEstatica("Luis");

	cout << personaEstatica.getNombre() << endl;


	return 0;
}


