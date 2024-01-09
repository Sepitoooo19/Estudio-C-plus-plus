

#include <iostream>

// Sizeof: Devuelve el tamaño en bytes de un tipo de dato o de una variable.

int main(){

    //tamaño de un int
    std::cout << "El tamaño de un int es: " << sizeof(int) << " bytes" << std::endl;

    //tamaño de un char

    std::cout << "El tamaño de un char es: " << sizeof(char) << " bytes" << std::endl;

    //tamaño de un double

    std::cout << "El tamaño de un double es: " << sizeof(double) << " bytes" << std::endl;

    //tamaño de un bool

    std::cout << "El tamaño de un bool es: " << sizeof(bool) << " bytes" << std::endl;

    //tamaño de un string

    std::cout << "El tamaño de un string es: " << sizeof(std::string) << " bytes" << std::endl;

    //tamaño de un arreglo de 5 enteros

    int arregloEnteros[5];

    std::cout << "El tamaño de un arreglo de 5 enteros es: " << sizeof(arregloEnteros) << " bytes" << std::endl;

    //tamaño de un arreglo de 5 chars

    char arregloChars[5];

    std::cout << "El tamaño de un arreglo de 5 chars es: " << sizeof(arregloChars) << " bytes" << std::endl;

    //tamaño de un arreglo de 5 doubles

    double arregloDoubles[5];

    std::cout << "El tamaño de un arreglo de 5 doubles es: " << sizeof(arregloDoubles) << " bytes" << std::endl;

    //tamaño de un arreglo de 5 bools

    bool arregloBools[5];

    std::cout << "El tamaño de un arreglo de 5 bools es: " << sizeof(arregloBools) << " bytes" << std::endl;

    //tamaño de un arreglo de 5 strings

    std::string arregloStrings[5];

    std::cout << "El tamaño de un arreglo de 5 strings es: " << sizeof(arregloStrings) << " bytes" << std::endl;

    

    //Ejemplo, si queremos calcular cuantos elementos tiene un array de strings se hace lo siguiente:

    std::cout << "El arreglo de strings tiene: " << sizeof(arregloStrings) / sizeof(std::string) << " elementos" << std::endl;


    return 0;



}
