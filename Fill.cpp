

#include <iostream>

// Fill() : Llena un arreglo con un valor especifico, recibe 3 parametros, el primero es el inicio del arreglo, 
// el segundo es el final del arreglo y el tercero es el valor que se va a asignar a cada elemento del arreglo.

int main(){


    const int TAMANO = 99;
    std::string comidas[TAMANO];

    std::fill(comidas, comidas + (TAMANO/3), "Pizza");
    std::fill(comidas + (TAMANO/3), comidas + (TAMANO/3) * 2, "Hamburguesa");
    std::fill(comidas + (TAMANO/3) * 2, comidas + TAMANO, "Hot Dog");

    for (int i = 0; i < TAMANO; i++)
    {
        std::cout << comidas[i] << "\n ";
    }




    return 0;
}