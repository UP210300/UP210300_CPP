/*
    Unit 2. Control structures and cycles
    Author: Sofia Calderon Juarez
    Date: 13/10/2022
    Description: Shows the use of Bisection method
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
//Library 
#include <cmath>
//Library to control the decimal precision
#include <iomanip>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that uses the Bisection method

//Function that solves the ecuation
float solveEquation(float worth) {
        return pow(worth,2) - worth- 12;
    }

//Main function integer type
int main (){

    //Declaring variables
    float a;
    float b;
    float c = (a+b)/2;
    float ya = solveEquation(a);
    float yb = solveEquation(b);
    float yc = solveEquation(c);
    float error = 0.01;
    int i;

    //Ask the user to enter the value of the variables
    cout << "Enter a value of (a): ";
    cin >>  a;
    cout << endl;
    cout << "Enter a value of (b): ";
    cin >>  b;
    cout << "\n";

    //Print table with the results of the ecuation solved
    for (i = 1, i = 0; i < 121; i++)
    {      
    cout << "_";
    }
    cout << "\n";
    
    cout     << "|" 
             << "\t" << "a" << "\t"
             << "\t" << "b" << "\t"
             << "\t" << "c" << "\t"
             << "\t" << "ya" << "\t" << "\t"
             << "\t" << "yb" << "\t"
             << "\t" << "\t" << "yc" << "\t" << "\t" 
             << "|" << endl;
             cout << "|";
        for (i = 1, i = 0; i < 119; i++)
        {
            cout << "_";
        }
        cout << "|";
    //Loop to keep solving the ecuation
    do
    {
            c = (a+b)/2;
            ya = solveEquation(a);
            yb = solveEquation(b);
            yc = solveEquation(c);
        if (ya*yc<0)
        {
            b = c;
        }
        else if (yc*yb<0)
        {
            a = c;
        }
        else
        {
            cout << "The root does not exist";
        }
    cout << "\n";
    cout << fixed;
     //Print table with the results of the ecuation solved
    cout << setprecision(3)<< "|" 
             << "\t" << a << "\t"
             << "\t" << b << "\t"
             << "\t" << c << "\t"
             << "\t" << ya << "\t" << "\t"
             << "\t" << yb << "\t"
             << "\t" << "\t" << yc << "\t" << "\t" 
             << "|" << endl;
             cout << "|";
            
    for (i = 1, i = 0; i < 119; i++)
            {
                cout << "_";
            }
            cout << "|";
    } while (abs(yc)>= error);
    return 0;    

}