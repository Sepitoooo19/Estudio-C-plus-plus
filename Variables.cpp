

#include <iostream>

int main(){


    std::cout << "Variables de tipo entero: \n " << std::endl; 

    // ENTEROS

    int x = 5; //Declaracion e inicializacion de variable entera

    int y = 6;

    int z = x + y; 

    std::cout <<"el valor de x es: " << x << std::endl; //Imprime el valor de la variable x

    std::cout <<"el valor de y es: " << y << std::endl;

    std::cout <<"el valor de z es: " << z << std::endl;


    std::cout << "\nVariables de tipo double: \n" << std::endl;

    //DOUBLES

    double temperatura = 29.3;

    double humedad = 0.8;

    double presion = 1.2;

    std::cout <<"el valor de temperatura es: " << temperatura << std::endl;

    std::cout <<"el valor de humedad es: " << humedad << std::endl;

    std::cout <<"el valor de presion es: " << presion << std::endl;

    
    //Single Char (solo muestra un solo caracter)

    std::cout << "\nVariables de tipo char: \n" << std::endl;

    char letra = 'a';

    std::cout <<"el valor de letra es: " << letra << std::endl;


    //Booleanos (true es 1 o false es 0)

    std::cout << "\nVariables de tipo boolean: \n" << std::endl;
    
    bool verdadero = true;

    bool falso = false;

    std::cout <<"el valor de verdadero es: " << verdadero << std::endl;

    std::cout <<"el valor de falso es: " << falso << std::endl;


    //String (cadena de caracteres)

    std::cout << "\nVariables de tipo string: \n" << std::endl;

    std::string nombre = "Benja";

    std::string apellido = "Sepúlveda";

    std::cout <<"el nombre es: " << nombre << std::endl;

    std::cout <<"el apellido es: " << apellido << std::endl;
    







    return 0;

    
}