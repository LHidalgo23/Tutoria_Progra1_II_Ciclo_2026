#include "Controladora.h"

int main() {

	Controladora* controladora= new Controladora;
	controladora->menuPrincipal();
	delete controladora;

	return 0;
}