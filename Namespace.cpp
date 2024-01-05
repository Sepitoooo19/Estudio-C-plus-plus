

#include <iostream>



//namespace es una palabra reservada que sirve para crear un espacio de nombres para evitar conflictos entre variables

namespace primero{

    int x = 5;

}

namespace segundo{

    int x = 10;

}



int main(){

    int x = 0;

    std::cout << " el valor de x es: " << x << std::endl;

    std::cout << " el valor de x usando primero es: " << primero::x << std::endl;

    std::cout << " el valor de x usando segundo es: " << segundo::x << std::endl;




}