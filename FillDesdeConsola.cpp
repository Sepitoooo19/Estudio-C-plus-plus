

#include <iostream>

int main (){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string comidas[5];

    int tamano = sizeof(comidas)/sizeof(comidas[0]);

    string aux;

    for (int i = 0; i < tamano; i++)
    {
        cout << "Ingresa la comida que te gusta o escribe 'salir' para terminar " << i + 1 << ": ";
        std::getline(cin, aux);

        if (aux == "salir")
        {
            break;
        }
        else
        {
            comidas[i] = aux;
        }
        
    }

    cout << endl;

    cout << "Tus comidas favoritas son: " << endl;

    for (int i = 0; !(comidas[i].empty()) ; i++)
    {
        cout << comidas[i] << endl;
    }


    return 0;



}