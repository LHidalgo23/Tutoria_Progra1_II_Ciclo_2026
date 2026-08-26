#include "Persona.h"
#include "Carro.h"


int main() {
	system("cls");

	//Persona persona1;
	//Persona persona2("Luis",23,"Cartago");
	//
	////Uso de toString
	//cout << "La per1 es: " << persona1.toString() << endl;
	//cout << "La per2 es: " << persona2.toString() << endl;

	////Uso de getters
	//cout << "El nombre de per2 es: " << persona2.getNombre() << endl;
	//cout << "La edad de per2 es: " << persona2.getEdad() << endl;
	//cout << "La provincia de per1 es: " << persona1.getNombre() << endl << endl;

	////Uso de setters
	//persona2.setEdad(34);
	//cout << "La edad de per2 es: " << persona2.getEdad() << endl;
	//persona2.setNombre("Emilio");
	//cout << "El nombre de per2 es: " << persona2.getNombre() << endl;


	Carro carro1;
	Carro carro2(2000,100000,"Toyota", 123);

	//cout << carro1.toString() << endl;
	cout << carro2.toString() << endl;

	cout << carro2.restriccion(carro2.getPlaca()) << endl;









	system("pause");
	return 0;


}
