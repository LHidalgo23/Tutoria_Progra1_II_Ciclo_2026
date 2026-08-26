#include "ContenedorForma1.h"
#include "ContenedorForma2.h"
#include "ContenedorForma3.h"
#include "ContenedorForma4.h"


int main(){


    cout << "----TRABAJANDO UN CONTENEDOR DE LA FORMA NO.1------" << endl;
    cout << endl;
    // Creando un Contenedor...(Automático).
    ContenedorForma1 contforma1;
    int x1 = 3;
    while (x1 > 0) {
        if (contforma1.ingresarPersona() == true)
            cout << "Si se ingreso la persona" << endl;
        else
            cout << "No se ingreso la persona" << endl;
        x1--;
    }
    // Imprimir todo el listado de personas...
    cout << contforma1.toString() << endl;


    cout << "----TRABAJANDO UN CONTENEDOR DE LA FORMA NO.2------" << endl;
    cout << endl;
    // Creando un Contenedor de logitud dinamica con objetos automaticos.

    int tamano;
    cout << "Digite la cantidad de personas que desea ingresar en el contenedor: " << endl;
    cin >> tamano;//Aqui solicitamos el tamano en tiempo de ejecucion

    ContenedorForma2 contforma2(tamano);

    int x2 = 3;
    while (x2 > 0) {
        if (contforma2.ingresarPersona() == true)
            cout << "Si se ingreso la persona" << endl;
        else
            cout << "No se ingreso la persona" << endl;
        x2--;
    }
    // Imprimir todo el listado de personas...
    cout << contforma2.toString() << endl;



    cout << "----TRABAJANDO UN CONTENEDOR DE LA FORMA NO.3------" << endl;
    cout << endl;
    // Creando un Contenedor...(Automático con objetos dinamicos).

    ContenedorForma3 contforma3;
    Persona* per = nullptr;
    char letra = 's';

    while (letra == 's') {
        string ced, nom;
        int ed;
        cout << "Ingrese la cedula ";
        cin >> ced;
        cout << "Ingrese el nombre ";
        cin >> nom;
        cout << "Ingresar la edad ";
        cin >> ed;
        
        //Creamos el objeto dinamico
        per = new Persona(ced, nom, ed);
        cout << endl;

        //Podemos verificar que la cedula sean distintas

        if (!contforma3.existeCedula(ced)) {
            //Ahora ingresamos al contenedor
            if (contforma3.ingresarPersona(per))
                cout << "Se ingreso la persona" << endl;
            else
                cout << "No se pudo ingresar la persona" << endl;

            cout << "Desea ingresar mas personas al contenedor (s/n)?";
            cin >> letra;
        }
        else
            cout << "La cedula ya existe" << endl;
        
    }
    // Imprimir todo el listado de personas...
    cout << contforma3.toString() << endl;


    cout << "----TRABAJANDO UN CONTENEDOR DE LA FORMA NO.4------" << endl;
    cout << endl;
    

        //Creacion de personas con datos quemados o de prueba...
    cout << "Creacion de 4 personas...." << endl;
    Persona* per1 = new Persona("11111", "Moe", 23);
    Persona* per2 = new Persona("22222", "Larry", 34);
    Persona* per3 = new Persona("33333", "Curly", 45);
    Persona* per4 = new Persona("44444", "Manson", 21);
    cout << endl;

    // Creando un Contenedor...(Dinámico con objetos dinamicos).
    cout << "Creacion del Contenedor...." << endl;
    cout << "Digite el tamano del vector interno del contenedor.....";
    cin >> tamano;
    ContenedorForma4* ptrCO = new ContenedorForma4(tamano);

    cout << "Ingresar las personas al contenedor...." << endl;
    ptrCO->ingresarPersona(per1);
    ptrCO->ingresarPersona(per2);
    ptrCO->ingresarPersona(per3);
    ptrCO->ingresarPersona(per4);


    cout<<ptrCO->toString() << endl;
    // Se debe eliminar cada persona?

    delete ptrCO;


	system("pause");
	return 0;
   
}

