

#include <iostream>

 //Bloques de codigo que se pueden reutilizar, se pueden pasar parametros y devolver valores

int suma(int a, int b){

    return a + b;

}

int resta(int a, int b){

    return a - b;

}

int multiplicacion(int a, int b){

    return a * b;

}

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int numero1, numero2;

    cout << "Ingrese el primer numero: " << endl;

    cin >> numero1;

    cout << "Ingrese el segundo numero: " << endl;

    cin >> numero2;

    cout << "La suma de los numeros es: " << suma(numero1, numero2) << endl;

    cout << "La resta de los numeros es: " << resta(numero1, numero2) << endl;

    cout << "La multiplicacion de los numeros es: " << multiplicacion(numero1, numero2) << endl;

    return 0;

}