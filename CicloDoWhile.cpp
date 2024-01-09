

#include <iostream>

int main(){

    int numero;
    using std::cout;
    using std::cin;
    using std::endl;



    // El ciclo DO WHILE se ejecuta al menos una vez, y luego se ejecuta mientras la condicion sea true

    do{

        cout << "Ingrese un numero positivo: " << endl;      //Primero se ejecuta el codigo, luego se evalua la condicion

        cin >> numero;


    } while(numero < 0);  // Si la condicion es true, se ejecuta el codigo, si es false, se salta el do while

    cout << "El numero es: " << numero << endl;

    return 0;






}