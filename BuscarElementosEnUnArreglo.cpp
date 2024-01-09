

#include <iostream>


int buscarElemento(int numeros[], int tamano, int numeroABuscar){

    int indice = -1;

    for (int i = 0; i < tamano; i++)
    {
        if (numeros[i] == numeroABuscar)
        {
            indice = i;
            break;
        }
        
    }

    return indice;
    
}


int main(){


    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int tamano = sizeof(numeros)/sizeof(numeros[0]);

    int indice;

    int numeroABuscar;


    std::cout << "Ingrese el numero a buscar: ";

    std::cin >> numeroABuscar;

    indice = buscarElemento(numeros, tamano, numeroABuscar);

    if (indice == -1)
    {
        std::cout << "El numero no se encuentra en el arreglo" << std::endl;
    }
    else
    {
        std::cout << "El numero " << numeroABuscar <<  " se encuentra en el indice: " << indice << std::endl;
    }



    return 0;



}