

#include <iostream>


int main(){


    using std::cout;
    using std::cin;
    using std::endl;


    //break = rompe el ciclo
    //continue = salta la iteracion actual

    int i;

    for (i = 1; i <= 20; i++)
    {
        
        cout << i << endl;

        if (i == 10)
        {
            break; // rompe el ciclo cuando i es igual a 10
        }
        
    }

    cout << endl;

    for (i = 1; i <= 20; i++)
    {
        
        if (i == 10)
        {
            continue; // salta la iteracion cuando i es igual a 10
        }

        cout << i << endl;
        
    }
    
        



    return 0;   
}