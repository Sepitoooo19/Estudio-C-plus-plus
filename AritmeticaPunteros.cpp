



#include <iostream>


int main(){

    using std::cout;

    
    int a = 1025;
    int *p;

    p = &a;

    cout << "El tamano de int es " << sizeof(int) << " bytes\n";
    cout << "La direccion de p es: " << p << ", El valor es: " << *p <<"\n";

    cout << "La direccion de p+1 es: " << p+1 << ", El valor es: " << *(p+1) <<"\n"; // Se imprime la direccion de memoria de la siguiente variable de tipo int, y el valor que hay en esa direccion de memoria

    char *p0;
    p0 = (char*)p; // Se hace un casting de p a char

    cout << "El tamano de char es " << sizeof(char) << " bytes\n";
    cout << "La direccion de p0 es: " << (void*)p0 << ", El valor es: " << *p0 <<"\n"; // Se hace un casting de p0 a void para que no imprima el caracter
    cout << "La direccion de p0+1 es: " << (void*)(p0+1) << ", El valor es: " << *(p0+1) <<"\n"; // Se imprime la direccion de memoria de la siguiente variable de tipo char, y el valor que hay en esa direccion de memoria

    void *p1;
    p1 = p; // Se hace un casting de p a void

    cout << "La direccion de p1 es: " << p1 << "\n"; // Se imprime la direccion de memoria de la variable a la que apunta el puntero p










}

