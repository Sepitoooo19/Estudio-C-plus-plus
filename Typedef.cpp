


#include <iostream>

//Typedef: Palabra reservada para crear un alias de un tipo de dato ya existente en C++
//Ayuda para hacer el codigo mas legible y facil de entender.

typedef std::string texto_t; //creo un alias para el tipo de dato string

typedef int entero_t; //creo un alias para el tipo de dato int

/*

Tambien puede usarse de la siguiente manera:

using texto_t = std::string;

using entero_t = int;




*/


int main() {

    using std::cout;
    using std::endl;

    texto_t primerNombre = "Benja"; //uso el alias para el tipo de dato string

    cout << "Mi nombre es: " << primerNombre << endl;

    entero_t edad = 21;     //uso el alias para el tipo de dato int

    cout << "Mi edad es: " << edad << endl;


    return 0;


}
