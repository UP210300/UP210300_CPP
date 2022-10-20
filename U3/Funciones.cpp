/*
Unit 3. Arrays and functions
Author: Sofia Calderon Juarez
Date: 20/10/2022
Description: Function test
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Program that shows the use of a function

//Prototype of functions
int getMaxVal(int num1, int num2);
 
//Main function integer type
int main (){
   int num1, num2;
    int valorMaximo;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;

    cout << "\n ================ \n";
    valorMaximo =getMaxVal(num1, num2);

    cout << "El valor máximo es: " << valorMaximo << endl;
   return 0;
 
}


int getMaxVal(int num1, int num2){
    return (num1>num2)? num1:num2;
}