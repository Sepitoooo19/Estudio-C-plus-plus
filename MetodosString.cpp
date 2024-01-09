

#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string nombre;

    cout << "Ingrese su nombre: " << endl;

    std::getline(cin, nombre);

    int metodo;

    cout << "Ingrese el metodo que desea utilizar (lenght = 1, empty = 2) : " << endl;

    cin >> metodo;



    switch (metodo)
    {
    case 1:
        if(nombre.length() > 12){ // length() devuelve la cantidad de caracteres de un string
            cout << "Su nombre es muy largo" << endl;
        }
        else{
            cout << "Su nombre es perfecto" << endl;
        }


        break;
    case 2:
        if(nombre.empty()){ // empty() devuelve true si el string esta vacio
            cout << "Su nombre esta vacio" << endl;
        }
        else{
            cout << "hola" << nombre << endl;
        }

        break;
         
    case 3:
        nombre.clear(); // clear() elimina el contenido de un string
        cout << "Su nombre es: " << nombre << endl;
        break;
    case 4:
        nombre.append(" es mi nombre"); // append() agrega un string al final de otro
        cout << nombre << endl;

        break;

    
    }
    

    return 0;

}