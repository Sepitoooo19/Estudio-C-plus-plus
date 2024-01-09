

#include <iostream>


int main(){


    using std::cout;
    
    using std::endl;

    // && = AND, || = OR, ! = NOT
    // AND: Si ambas condiciones son verdaderas, se ejecuta el codigo
    // OR: Si alguna de las condiciones es verdadera, se ejecuta el codigo
    // NOT: Si la condicion es falsa, se ejecuta el codigo

    int temperatura;

    cout << "Ingrese la temperatura: " << endl;

    std::cin >> temperatura;

    if (temperatura > 25 && temperatura < 30)
    {
        cout << "La temperatura es agradable" << endl;
    }
    else if (temperatura > 30 || temperatura < 25)
    {
        cout << "La temperatura no es agradable" << endl;
    }
    else if (!(temperatura > 25 && temperatura < 30)) // niega la condicion anterior (temperatura > 25 && temperatura < 30)
    {
        cout << "La temperatura no es agradable" << endl;
    }
    else
    {
        cout << "La temperatura no es agradable" << endl;
    }






}