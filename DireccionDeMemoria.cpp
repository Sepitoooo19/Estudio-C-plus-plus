

#include <iostream>

//Direccion de memoria: Es la direccion en la que se encuentra almacenado un dato en la memoria RAM,
//para obtener la direccion de memoria de una variable se utiliza el operador &


int main(){

    using std::cout;
    using std::string;

    string nombre = "Benjamin";
    int edad = 21;

    bool estudiante = true;

    cout << "La direccion de memoria de la variable nombre es: " << &nombre << "\n";
    cout << "La direccion de memoria de la variable edad es: " << &edad << "\n";
    cout << "La direccion de memoria de la variable estudiante es: " << &estudiante << "\n";





    return 0;
}