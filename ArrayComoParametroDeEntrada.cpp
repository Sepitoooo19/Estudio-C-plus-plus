

#include <iostream>

int obtenerTotal(int precios[], int tamano){

    int total = 0;

    for (int i = 0; i < tamano; i++)
    {
        total += precios[i];
    }

    return total;
    
}

int main(){

    int precios[] = {100, 200, 300, 400, 500};

    int tamano = sizeof(precios)/sizeof(precios[0]);

    int total = obtenerTotal(precios, tamano);

    std::cout << "El total es: " << total << std::endl;

    return 0;

}

