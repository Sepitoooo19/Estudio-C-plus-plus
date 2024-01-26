

#include <iostream>

//Punteros: Es una variable que almacena la direccion de memoria de otra variable, para declarar un puntero se utiliza el operador *
//Para obtener el valor de la variable a la que apunta un puntero se utiliza el operador *
//Para obtener la direccion de memoria de un puntero se utiliza el operador &
//Para obtener la direccion de memoria de la variable a la que apunta un puntero se utiliza el operador *


int main(){

    using std::cout;
    
    
    int a; // Variable de tipo entero
    int *p; // Puntero de tipo entero

    cout << p << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p

    p = &a; // El puntero p apunta a la direccion de memoria de la variable a

    cout << p << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p
    cout << &a << "\n"; // Imprime la direccion de memoria de la variable a

    cout << *p << "\n"; // Imprime el valor de la variable a la que apunta el puntero p

    cout << "\nAhora con valores (si a = 10 y p = &a) : " << "\n";

    a = 10; // La variable a toma el valor de 10
    p = &a; // El puntero p apunta a la direccion de memoria de la variable a

    cout << "a = " << a << "\n"; // Imprime el valor de la variable a
    
    *p = 12; // La variable a toma el valor de 12, ya que el puntero p apunta a la direccion de memoria de la variable a

    cout << "a = " << a << "\n"; // Imprime el valor de la variable a luego de que el puntero p apuntara a la direccion de memoria de la variable a

    cout << "\nAhora con otros  valores: (a = 10, p = &a, b = 20) " << "\n";

    a = 10;

    p = &a;

    cout << "La direccion de P es " << p << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p

    cout << "El valor de p es " << *p << "\n"; // Imprime el valor de la variable a la que apunta el puntero p

    int b = 20;

    cout <<"\nHaciendo la asignacion *p = b" << "\n";

    *p = b; // La variable a toma el valor de la variable b, ya que el puntero p apunta a la direccion de memoria de la variable a

    cout << "La direccion de P es " << p << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p (No cambia)

    cout << "El valor de p es " << *p << "\n"; // Imprime el valor de la variable a la que apunta el puntero p (Cambia)


    cout << "\nAritmetica de Punteros  (a = 10, *p = &a)" << "\n";

    a = 10;
    
    //*p ya está declarado antes, por lo que no es necesario volver a declararlo
    p = &a;

    cout << "La direccion de p es " << p << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p

    cout << "El valor de p es " << *p << "\n"; // Imprime el valor de la variable a la que apunta el puntero p

    cout << "El tamanho de un entero es " << sizeof(int) << "\n"; // Imprime el tamaño de un entero

    cout << "La direccion de p + 1 = " << p + 1 << "\n"; // Imprime la direccion de memoria de la variable a la que apunta el puntero p + 1 (El tamaño de un entero)

    cout << "El valor de p + 1 = " << *(p + 1) << "\n"; // Imprime el valor de la variable a la que apunta el puntero p + 1 (El tamaño de un entero)


}