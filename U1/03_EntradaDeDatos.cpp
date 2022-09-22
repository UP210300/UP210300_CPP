/*
    Unit 1. Entry of data
    Author: Sofia Calderon Juarez
    Date: 21/09/2022
    Description: Ways to entry different types of data by the user
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Main function integer type
int main (){
    //More info at: 
    //https://www.geeksforgeeks.org/c-data-types/
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout << "Este programa muestra el ingreso de datos para el susario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato que ingreso es: " << entero << endl;
    
    //More info at:
    //https://cplusplus.com/reference/cstdio/printf/
    printf ("Usando la funcion printf y scanf\n");
    printf ("Ingresa un dato de tipo entero: ");
    scanf ("%d", &entero);
    printf ("El dato ingresado es: %d \n", entero);

    //As a function it must return to a value, in this case 0
    return 0;

    }