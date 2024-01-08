

#include <iostream>

int main(){

    using std::cout;
    using std::endl;

    //si por ejemplo declaramos lo siguiente


    char palabra = 100;

    //el compilador va a tomar el valor 100 como un caracter y no como un numero, 
    //por lo que al imprimirlo va a mostrar el caracter correspondiente a ese numero en la tabla ASCII

    cout << palabra << endl;

    //si queremos que el compilador tome ese valor como un numero, debemos hacer lo siguiente:

    int numero = (int)palabra; //esto se llama casting, y sirve para convertir un tipo de dato en otro

    cout << numero << endl;

    //tambien puede hacerse de la siguiente manera:

    int numero2 = int(palabra);

    cout << numero2 << endl;

    //Esto se puede hacer con los diferentes tipos de datos

    return 0;



}