

#include <iostream>

//namespace es una palabra reservada que sirve para crear un espacio de nombres para evitar conflictos entre variables

namespace primero{

    int x = 5;

}

namespace segundo{

    int x = 10;

}



int main(){

    using std::cout; //lo "declaro" una vez para luego llegar y usarlo, lo mismo puede ocurrir con cualquier otro tipo de dato
    using std::endl;
    int x = 0;

    cout << " el valor de x es: " << x << std::endl;

    cout << " el valor de x usando primero es: " << primero::x << endl; //es como usar estructuras en C

    cout << " el valor de x usando segundo es: " << segundo::x << endl;

    


}