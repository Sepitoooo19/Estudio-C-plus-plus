

#include <iostream>

//Variables globales: Se pueden utilizar en cualquier parte del codigo

// Variables locales: Solo se pueden utilizar en el bloque de codigo donde fueron declaradas

//Ejemplo: 

int numero = 5; // Variable global

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int numero2 = 10; // Variable local

    cout << numero << endl;

    cout << numero2 << endl;

    return 0;

}    

