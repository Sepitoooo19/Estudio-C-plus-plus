

#include <iostream>
#include <ctime>


int main(){

    srand(time(0));

    int numeroAleatorio = rand() % 5 + 1;

    switch (numeroAleatorio)
    {

    case 1:
        std::cout << "El numero aleatorio es 1" << std::endl;
        break;
    case 2:
        std::cout << "El numero aleatorio es 2" << std::endl;
        break;
    case 3:

        std::cout << "El numero aleatorio es 3" << std::endl;
        break;

    case 4:

        std::cout << "El numero aleatorio es 4" << std::endl;
        break;

    case 5:

        std::cout << "El numero aleatorio es 5" << std::endl;
        break;

    default:
        break;
        




    }
    return 0;


}