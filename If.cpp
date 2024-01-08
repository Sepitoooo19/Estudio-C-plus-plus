

#include <iostream>


int main(){

    // IF = si se cumple la condicion, se ejecuta el codigo que esta dentro de las llaves. 

    using std::cout;
    using std::cin;
    using std::endl;


    int edad;

    cout << "Ingrese su edad: " << endl;

    cin >> edad;

    if (edad >= 18)
    {
        cout << "Usted es mayor de edad" << endl;
    }
    else if(edad < 0)
    {
        cout << "Usted no ha nacido aún" << endl;
    }
    
    else{
        cout << "Usted es menor de edad" << endl;

    }
    

    return 0;

}