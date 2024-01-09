


#include <iostream>


int main(){

    using std::cout;

    using std::string;

    //Los arreglos multidimensionales son arreglos que contienen otros arreglos, por ejemplo:

    // el siguiente arreglo contiene 3 arreglos de 3 elementos cada uno
    string comidas[][3] = {{ "Pizza", "Hamburguesa", "Hot Dog"}, 
                           {"manzana", "pera", "platano"}, 
                           {"papas", "zanahorias", "cebollas"}};

    //Para acceder a los elementos de un arreglo multidimensional se hace de la siguiente manera:

    int filas = sizeof(comidas)/sizeof(comidas[0]);

    int columnas = sizeof(comidas[0])/sizeof(comidas[0][0]);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas ; j++)
        {
            cout << comidas[i][j] << " ";
        }
        cout << "\n";
    }






}