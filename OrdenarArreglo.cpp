

#include <iostream>


void ordenarArregloMenorAMayor(int arreglo[], int tamano){

    int auxiliar;

    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
            
        }
        
    }
    
}

void ordenarArregloMayorAMenor(int arreglo[], int tamano){

    int auxiliar;

    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano - 1; j++)
        {
            if (arreglo[j] < arreglo[j + 1])
            {
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
            
        }
        
    }
    
}





int main(){

    int numeros[] = {100, 50, 22, 200, 1, 5, 8};

    int tamano = sizeof(numeros)/sizeof(numeros[0]);

    ordenarArregloMenorAMayor(numeros, tamano);

    for (int i = 0; i < tamano; i++)
    {
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;

    ordenarArregloMayorAMenor(numeros, tamano);

    for (int i = 0; i < tamano; i++)
    {
        std::cout << numeros[i] << " ";
    }

    return 0;
}