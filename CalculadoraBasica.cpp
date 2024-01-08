

#include <iostream>


int main(){

    double numero1;
    double numero2;
    std::string operacion;

    std::cout << "Ingrese el primer numero: " << std::endl;

    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: " << std::endl;

    std::cin >> numero2;

    std::cout << "Ingrese la operacion que desea realizar: " << std::endl;

    std::cin >> operacion;

    if (operacion == "suma")
    {
        std::cout << "El resultado de la suma es: " << numero1 + numero2 << std::endl;
    }
    else if (operacion == "resta")
    {
        std::cout << "El resultado de la resta es: " << numero1 - numero2 << std::endl;
    }
    else if (operacion == "multi")
    {
        std::cout << "El resultado de la multiplicacion es: " << numero1 * numero2 << std::endl;
    }
    else if (operacion == "div")
    {
        std::cout << "El resultado de la division es: " << numero1 / numero2 << std::endl;
    }
    else
    {
        std::cout << "La operacion ingresada no es valida" << std::endl;
    }

    return 0;






}