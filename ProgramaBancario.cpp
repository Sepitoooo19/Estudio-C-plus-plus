#include <iostream>



void mostrarSaldo(double saldo){

    using std::cout;
    using std::endl;

    cout << "Su saldo es: " << saldo << endl;





}


double depositar(){

    using std::cout;
    using std::cin;
    using std::endl;

    double saldo = 0;
    double deposito = 0;

    cout << "Ingrese la cantidad que desea depositar: " << endl;
    cin >> deposito;

    saldo = saldo + deposito;

    cout << "Su nuevo saldo es: " << saldo << endl;

    return saldo;

}

double retirar(double saldo){

    using std::cout;
    using std::cin;
    using std::endl;

    double retiro = 0;

    cout << "Ingrese la cantidad que desea retirar: " << endl;
    cin >> retiro;

    if(retiro > saldo){

        cout << "No tiene suficiente saldo para realizar el retiro" << endl;

    }else{

        saldo = saldo - retiro;

        cout << "Su nuevo saldo es: " << saldo << endl;

    }

    return saldo;


}



int main(){

    using std::cout;
    using std::cin;
    using std::endl;


    double saldo = 0;
    int opcion = 0;

    do
    {
        cout << "Bienvenido al banco" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo = depositar();
            break;
        case 3:
            saldo = retirar(saldo);
            break;
        case 4:
            cout << "Gracias por utilizar el banco" << endl;
            break;
        
        default:
            cout << "Opcion invalida" << endl;
            break;
        }

    } while (opcion != 4);

    return 0;
}
