

#include <iostream>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string preguntas[] = {"1. ¿Cuál es la capital de Colombia?", 
                          "2. ¿Cuál es la capital de Argentina?", 
                          "3. ¿Cuál es la capital de Brasil?", 
                          "4. ¿Cuál es la capital de Chile?", 
                          "5. ¿Cuál es la capital de Ecuador?"};

    
    string opciones[][5] = {{"a. Bogotá", "b. Medellín", "c. Cali", "d. Barranquilla", "e. Cartagena"},
                            {"a. Buenos Aires", "b. Córdoba", "c. Rosario", "d. Mendoza", "e. La Plata"},
                            {"a. Brasilia", "b. Sao Paulo", "c. Río de Janeiro", "d. Salvador", "e. Fortaleza"},
                            {"a. Santiago", "b. Valparaíso", "c. Concepción", "d. La Serena", "e. Antofagasta"},
                            {"a. Quito", "b. Guayaquil", "c. Cuenca", "d. Ambato", "e. Manta"}};

    char respuestas[] = {'a', 'a', 'a', 'a', 'a'};

    int tamano = sizeof(preguntas)/sizeof(preguntas[0]);

    char respuesta;

    int puntaje = 0;

    for(int i  = 0; i < tamano; i++){
        
        cout << "********************************************" << endl;
        cout << preguntas[i] << endl;
        cout << "********************************************" << endl;

        for(int j = 0; j < sizeof(opciones[i])/sizeof(opciones[i][0]); j++){

            cout << opciones[i][j] << endl;
        }

        cout << "Ingrese su respuesta: ";
        cin >> respuesta;


        if (respuesta == respuestas[i])
        {
            cout << "Respuesta correcta!" << endl;
            puntaje++;
        }
        else
        {
            cout << "Respuesta incorrecta!" << endl;
            cout << "La respuesta correcta es: " << respuestas[i] << endl;
        }

    }

    cout << "********************************************" << endl;
    cout << "*                RESULTADOS                * " << puntaje << endl;
    cout << "********************************************" << endl;
    cout << "* Preguntas correctas: " << puntaje << endl;
    cout << "* Preguntas incorrectas: " << tamano - puntaje << endl;
    cout << "* Puntaje: " << puntaje << endl;
    cout << "********************************************" << endl;
    








    return 0;

}