

#include <iostream>
#include <cmath> // para usar funciones matematicas

int main(){

    double x = 2;
    double y = 4;
    double x2 = 2.5;

    double resultado;
    double resultado2;
    double resultado3;
    double resultado4;
    double resultado5;
    double resultado6;
    double resultado7;
    double resultado8;




    resultado = std::max(x,y); //devuelve el mayor de los dos numeros
    resultado2 = std::min(x,y); //devuelve el menor de los dos numeros

    std::cout << "El mayor de los dos numeros es: " << resultado << std::endl;
    std::cout << "El menor de los dos numeros es: " << resultado2 << std::endl;

    resultado3 = std::sqrt(y); //devuelve la raiz cuadrada del numero

    std::cout << "La raiz cuadrada de " << y << " es: " << resultado3 << std::endl;

    resultado4 = pow(x,y); //devuelve el primer numero elevado al segundo

    std::cout << x << " elevado a " << y << " es: " << resultado4 << std::endl;


    resultado5 = abs(-y); //devuelve el valor absoluto del numero

    std::cout << "El valor absoluto de " << -y << " es: " << resultado5 << std::endl;

    resultado6 = floor(x2); //devuelve el numero redondeado hacia abajo

    std::cout << "El numero " << x2 << " redondeado hacia abajo es: " << resultado6 << std::endl;

    resultado7 = ceil(x2); //devuelve el numero redondeado hacia arriba

    std::cout << "El numero " << x2 << " redondeado hacia arriba es: " << resultado7 << std::endl;

    resultado8 = round(x2); //devuelve el numero redondeado al entero mas cercano

    std::cout << "El numero " << x2 << " redondeado al entero mas cercano es: " << resultado8 << std::endl;
    




    return 0;
    



}