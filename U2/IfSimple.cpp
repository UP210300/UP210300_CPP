/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 22/09/2022
    Description: Shows the use of simple if
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Main function integer type
int main ()
{
    int number;
    int data=1;

    cout << "Enter an integer number: ";
    cin >> number;
    if (number==data){
        cout << "The number you entered is equal to data" << endl;
    }


    //Exersice: try the different comparisons ==, !=, <, >, <=, >=
    
    
    //As a function it must return to a value, in this case 0
    return 0;
}