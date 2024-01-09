

#include <iostream>
#include <ctime>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int numero;
    int eleccion;
    int intentos = 0;

    srand(time(NULL)); // genera un numero aleatorio diferente cada vez que se ejecuta el programa

    numero = (rand() % 100) + 1 ;  

    cout << "Bienvenido al juego de adivinar el numero" << endl;

    do{
        cout << "Ingrese un numero entre el 1 y el 100: " << endl;
        cin >> eleccion;
        intentos++;

        if(eleccion > numero){
            cout << "El numero que ingreso es mayor al numero a adivinar" << endl;

        }else if(eleccion < numero){

            cout << "El numero que ingreso es menor al numero a adivinar" << endl;

        }else{

            cout << "Felicidades, adivino el numero" << endl;
            cout << "Numero de intentos: " << intentos << endl;
        }

    }while(eleccion != numero);

    return 0;
}