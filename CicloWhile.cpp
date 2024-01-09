

#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string nombre;

    while (nombre.empty()) // mientras sea true, se ejecuta el codigo, si es false, se salta el while
    {
        cout << "Ingrese su nombre: " << endl;

        std::getline(cin, nombre);
    }

    cout << "Hola " << nombre << endl;

    return 0;

}