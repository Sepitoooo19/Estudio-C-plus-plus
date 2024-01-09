



#include <iostream>

int main(){


    using std::cout;
    using std::cin;
    using std::endl;


    int filas, columnas;

    char simbolos;


    cout << "Ingrese el numero de filas: " << endl;

    cin >> filas;

    cout << "Ingrese el numero de columnas: " << endl;

    cin >> columnas;

    cout << "Ingrese el simbolo que desea utilizar: " << endl;

    cin >> simbolos;

    for(int i = 1; i <= filas; i++)
    {

        for(int j = 1; j <= columnas; j++)
        {
            cout << simbolos;
        
        }
        cout << "\n";




    }
    for(int i = 1; i <= 3; i++)
    {

        for(int j = 1; j <= 10; j++)
        {
            cout << j << " ";
        
        }
        cout << endl;





    }




    return 0;
}
