

#include <iostream>
#include <cmath>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    double cateto1;
    double cateto2;
    double hipotenusa;

    cout << "Ingrese el valor del primer cateto: " << endl;

    cin >> cateto1;

    cout << "Ingrese el valor del segundo cateto: " << endl;

    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;


}