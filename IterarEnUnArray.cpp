

#include <iostream>


int main(){

    using std::cout;

    using std::string;

    string estudiantes[] = {"Juan", "Pedro", "Maria", "Jose", "Luis"};

    for (int i = 0; i < sizeof(estudiantes)/sizeof(string)  ; i++)
    {
        cout << estudiantes[i] << std::endl;

    }
    

    char cursos[] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < sizeof(cursos)/sizeof(char)  ; i++)
    {
        cout << cursos[i] << std::endl;

    }
    return 0;



}