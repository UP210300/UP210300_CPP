/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 29/09/2022
    Description: Shows the use of nested if
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that automatically calculate the price you should charge customers for entering to the game room. 

//Main function integer type
int main (){
    
    cout << "Game room \n Age                       Price \n Younger than 4 years       Free \n Between 4 and 18 years     5$ \n 18 years or older         10$ \n";
    
    //Declaring variables
    int age;
    int price;

    //Asking the user its age
    cout << "Please enter your age: ";
    cin >> age;

    //Look for tre age range to know how much the have to pay
    if ((age>=0)&&(age<4))
    {
        price= 0;
    }
    else if ((age>=4)&&(age<18))
    {
        price= 4;
    }
    else if (age>=18)
    {
        price= 10;
    }
    else
    {
        cout << "Error :(, please enter a valid age";
    }
    
    //Display the amount of money the user have to pay
    cout << "You have to pay $" << price; cout <<" to enter the game room" <<endl;
    
    //As a function it must return to a value, in this case 0
    return 0;

}