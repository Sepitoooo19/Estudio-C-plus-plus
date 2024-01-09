

#include <iostream>

//Foreach es una estructura de control que nos permite iterar sobre un arreglo o una colección de datos.


int main(){
    
    using std::cout;

    using std::string;

    using std::endl;

    string estudiantes[] = {"Juan", "Pedro", "Maria", "Jose", "Luis"};

    for (string estudiante : estudiantes)
    {
        cout << estudiante << endl;

    }
    

    char cursos[] = {'a', 'b', 'c', 'd', 'e'};

    for (char curso : cursos)
    {
        cout << curso << endl;

    }
    return 0;

}