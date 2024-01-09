



#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int edad;

    cout << "Ingrese su edad: " << endl;

    cin >> edad;


    // El operador "?" sirve como un if, pero en una sola linea, es decir, 
    // si la condicion es verdadera, se ejecuta lo que esta antes de los dos puntos, 
    // y si es falsa, se ejecuta lo que esta despues de los dos puntos
    edad >= 18 ? cout << "Usted es mayor de edad" << endl : cout << "Usted es menor de edad" << endl;

    return 0;







}