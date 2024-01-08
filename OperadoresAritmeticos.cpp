

#include <iostream>

int main(){


    using std::cout;
    using std::endl;


    //Como operadores aritmeticos tenemos: +, -, *, /, %, ++, --, +=, -=, *=, /=, %=
    //Los operadores de asignacion son: =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
    //Los operadores de comparacion son: ==, !=, >, <, >=, <=
    //Los operadores logicos son: &&, ||, !

    // + es suma
    // - es resta
    // * es multiplicacion
    // / es division
    // % es modulo
    // ++ es incremento
    // -- es decremento
    // += es suma y asignacion
    // -= es resta y asignacion
    // *= es multiplicacion y asignacion
    // /= es division y asignacion
    // %= es modulo y asignacion
    // == es igualdad
    // != es desigualdad
    // > es mayor que
    // < es menor que
    // >= es mayor o igual que
    // <= es menor o igual que
    // && es and
    // || es or
    // ! es not

    //Algunas operaciones son:

    int x = 5;
    int y = 2;

    int suma = x + y;
    int resta = x - y;
    int multiplicacion = x * y;
    int division = x / y;
    int modulo = x % y;
    int incremento = x + 1; // en los ciclos for se usa mas que nada el x++
    int decremento = x - 1; // en los ciclos for se usa mas que nada el x--
    int sumaAsignacion = x += y;
    int restaAsignacion = x -= y;
    int multiplicacionAsignacion = x *= y;
    int divisionAsignacion = x /= y; 
    int moduloAsignacion = x %= y;
    bool igualdad = x == y; //devuelve 1 si x es igual a y, y 0 si no lo es
    bool desigualdad = x != y; //devuelve 1 si x es distinto a y, y 0 si no lo es
    bool mayorQue = x > y; //devuelve 1 si x es mayor a y, y 0 si no lo es
    bool menorQue = x < y; //devuelve 1 si x es menor a y, y 0 si no lo es
    bool mayorOIgualQue = x >= y; //devuelve 1 si x es mayor o igual a y, y 0 si no lo es
    bool menorOIgualQue = x <= y; //devuelve 1 si x es menor o igual a y, y 0 si no lo es
  

    cout << "La suma de x e y es: " << suma << endl;
    cout << "La resta de x e y es: " << resta << endl;
    cout << "La multiplicacion de x e y es: " << multiplicacion << endl;
    cout << "La division de x e y es: " << division << endl;
    cout << "El modulo de x e y es: " << modulo << endl;
    cout << "El incremento de x es: " << incremento << endl;
    cout << "El decremento de x es: " << decremento << endl;
    cout << "La suma y asignacion de x e y es: " << sumaAsignacion << endl;
    cout << "La resta y asignacion de x e y es: " << restaAsignacion << endl;
    cout << "La multiplicacion y asignacion de x e y es: " << multiplicacionAsignacion << endl;
    cout << "La division y asignacion de x e y es: " << divisionAsignacion << endl;
    cout << "El modulo y asignacion de x e y es: " << moduloAsignacion << endl;
    cout << "La igualdad de x e y es: " << igualdad << endl;
    cout << "La desigualdad de x e y es: " << desigualdad << endl;
    cout << "La mayor que de x e y es: " << mayorQue << endl;
    cout << "La menor que de x e y es: " << menorQue << endl;
    cout << "La mayor o igual que de x e y es: " << mayorOIgualQue << endl;
    cout << "La menor o igual que de x e y es: " << menorOIgualQue << endl;








    return 0;
}