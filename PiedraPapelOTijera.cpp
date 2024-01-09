
#include <iostream>
#include <ctime>

char obtenerEleccionJugador(int eleccion){

    char eleccionJugador;

    switch (eleccion)
    {
    case 1:
        eleccionJugador = 'p';
        break;
    case 2:
        eleccionJugador = 'r';
        break;
    case 3:
        eleccionJugador = 't';
        break;
    
    default:
        break;
    }

    return eleccionJugador;

}

char obtenerEleccionComputadora(int eleccion){

    char eleccionComputadora;

    switch (eleccion)
    {
    case 1:
        eleccionComputadora = 'p';
        break;
    case 2:
        eleccionComputadora = 'r';
        break;
    case 3:
        eleccionComputadora = 't';
        break;
    
    default:
        break;
    }

    return eleccionComputadora;

}


void mostrarEleccion(char eleccionJugador, char eleccionComputadora){

    std::cout << "La eleccion del jugador es: " << eleccionJugador << std::endl;
    std::cout << "La eleccion de la computadora es: " << eleccionComputadora << std::endl;

}

void determinarGanador(char eleccionJugador, char eleccionComputadora){

    if(eleccionJugador == 'p' && eleccionComputadora == 'r'){
        std::cout << "El jugador gana" << std::endl;
    }else if(eleccionJugador == 'r' && eleccionComputadora == 't'){
        std::cout << "El jugador gana" << std::endl;
    }else if(eleccionJugador == 't' && eleccionComputadora == 'p'){
        std::cout << "El jugador gana" << std::endl;
    }else if(eleccionJugador == eleccionComputadora){
        std::cout << "Empate" << std::endl;
    }else{
        std::cout << "La computadora gana" << std::endl;
    }

}






int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int eleccionJugador;
    int eleccionComputadora;

    srand(time(0));

    eleccionComputadora = (rand() % 3) + 1;

    cout << "Bienvenido al juego de piedra, papel o tijera" << endl;

    cout << "Ingrese su eleccion: " << endl;

    cout << "1. Piedra" << endl;

    cout << "2. Papel" << endl;

    cout << "3. Tijera" << endl;

    cin >> eleccionJugador;

    char eleccionJugadorChar = obtenerEleccionJugador(eleccionJugador);

    char eleccionComputadoraChar = obtenerEleccionComputadora(eleccionComputadora);

    mostrarEleccion(eleccionJugadorChar, eleccionComputadoraChar);

    determinarGanador(eleccionJugadorChar, eleccionComputadoraChar);

    




    return 0;
}