/* Unit 1. Types of data
    Author: Sofia Calderon Juarez
    Date: 16/09/2022
    Description: Shows the different types of data for c++
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::
using namespace std;

//Main function for integer numbers
int main ()
{
    //More info at:
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;

    cout << "Este programa muestra los tipo de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " <<flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante) << "bytes" << endl;
    cout << "El numero doble es: " << grande << endl;
    cout << "El tamaño del doble es: " << sizeof(grande) << "bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter) << "bytes" << endl;

    cout << "===============" << endl;

    //Mre info at:
    //https://cplusplus.com/reference/cstdio/printf/
    printf("Usamos la funcion printf\n");
    printf("El numero entero es: %i \n", entero);
    printf("El numero flotante es: % 3.1f\n, flotante");

    //As a function it must return to a value, in this case 0
    return 0;
}
