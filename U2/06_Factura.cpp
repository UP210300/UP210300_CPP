/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 29/09/2022
    Description: Shows the use of do while
*/

// Library for output and input of the screen
#include <iostream>
// LIbrary for the use of printf and scanf
#include <stdio.h>

// Use of namespace to avoid the use of std::

using namespace std;

// Program that ask the user for the product and its price then prints a receipt

// Main function integer type
int main()
{   
    //Declaring variables
    int product;
    int cont;
    float price;
    float total=0;

    //Do while cycle to find out the number of product and its price
    do
    {
        cout << "Please enter the number of products with the same price: ";
        cin >> product;
        cout << "Please enter its price: ";
        cin >> price;
        cout << "If you want to exit type 0, if you want to keep adding products type 1: ";
        cin >> cont;
        total= total+ (product*price);

    } while (cont != 0);

    //Display the receipt 
    cout << "Your total is: " <<total <<endl;
    
    //As a function it must return to a value, in this case 0
    return 0;
}