

#include <iostream>



//Un arreglo es una estructura de datos que almacena una colección de datos del mismo tipo.

//int arregloEnteros[5]; //Declaración de un arreglo de enteros

//char arregloCaracteres[5]; //Declaración de un arreglo de caracteres

//double arregloDoubles[5]; //Declaración de un arreglo de doubles

//std::string arregloStrings[5]; //Declaración de un arreglo de strings

//bool arregloBooleanos[5]; //Declaración de un arreglo de booleanos

//int arregloEnteros[5] = {1, 2, 3, 4, 5}; //Declaración de un arreglo de enteros inicializado

// y así sucesivamente para los demás tipos de datos.

//Los arreglos son de tamaño fijo, es decir, una vez que se declaran, no se pueden modificar su tamaño.

//Los arreglos se indexan desde 0, es decir, el primer elemento del arreglo se encuentra en la posición 0.

//Los arreglos se pueden inicializar con llaves {} o con llaves y un tamaño entre corchetes {5}.


int main(){
    

    using std::cout;

    using std::string;

    using std::endl;

    string arregloNombres[] = {"Juan", "Pedro", "Maria", "Jose", "Luis"};

    cout << arregloNombres[0] << endl;

    cout << arregloNombres[1] << endl;

    cout << arregloNombres[2] << endl;



    return 0;
}