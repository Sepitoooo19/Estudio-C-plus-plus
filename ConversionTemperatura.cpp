

#include <iostream>


int main(){


    double temperatura;
    std::string unidad;

    std::cout << "Ingrese la temperatura: " << std::endl;

    std::cin >> temperatura;

    std::cout << "Ingrese la unidad de la temperatura (celsius o fahrenheit): " << std::endl;

    std::cin >> unidad;

    if (unidad == "celsius")
    {
        std::cout << "La temperatura en fahrenheit es: " << temperatura * 1.8 + 32 << std::endl;
    }
    else if (unidad == "fahrenheit")
    {
        std::cout << "La temperatura en celsius es: " << (temperatura - 32) / 1.8 << std::endl;
    }
    else
    {
        std::cout << "La unidad ingresada no es valida" << std::endl;
    }

    return 0;











}