


#include <iostream>
#include <time.h>


int main(){


    using std::cout;
    using std::cin;
    using std::endl;

    srand(time(NULL)); // genera un numero aleatorio diferente cada vez que se ejecuta el programa


    int numeroAleatorio = (rand() % 6) + 1 ; // genera un numero aleatorio entre 0 y 32767

    int numeroAleatorio2 = (rand() % 6) + 1 ;
    int numeroAleatorio3 = (rand() % 6) + 1 ;


    cout << numeroAleatorio << endl;

    cout << numeroAleatorio2 << endl;

    cout << numeroAleatorio3 << endl;
    

    return 0;





}