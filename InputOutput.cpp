

#include <iostream>


int main(){

    //Para mostrar algo por consola, se utiliza COUT
    //Para pedir algo por consola, se utiliza CIN

    using std::cout;
    using std::cin;
    using std::endl;

    std::string nombre;

    int edad;

     cout << "Ingrese su edad: " << endl;

    cin >> edad;

    cout << "Su edad es: " << edad << endl;

    cout << "Ingrese su nombre completo: " << endl;

    std::getline(cin >> std::ws , nombre); //getline sirve para leer una linea entera, y no solo una palabra, y el std::ws sirve para que no se saltee el getline
    cout << "Hola " << nombre << endl;

   
    

    return 0;


}
