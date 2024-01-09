

#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int i;

    for(i = 1; i <= 10; i++){ // for(inicializacion; condicion; incremento)

        cout << i << endl; // desde el 1 2 3 4 5 6

    }
    cout << endl;
    for(i = 10; i >= 1; i--){ // for(inicializacion; condicion; decremento)

        cout << i << endl; // desde el 10 9 8 7 6 5 4 3 2 1

    }
    



    return 0;
}