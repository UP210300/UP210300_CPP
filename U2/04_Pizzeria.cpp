/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 29/09/2022
    Description: Shows the use of nested if
*/

// Library for output and input of the screen
#include <iostream>
// LIbrary for the use of printf and scanf
#include <stdio.h>
// Library for declaring variables that stores a sequence of letters or other characters
#include <string>

// Use of namespace to avoid the use of std::

using namespace std;

// Program that automatically calculate the price you should charge customers for entering to the game room.

// Main function integer type
int main()
{

    cout << "Pizzeria Napoli \n";

    // Declaring variables
    int option;
    int complement;
    string pizzaType;
    string ingredient;

    //Asking the user to choose a pizza type
    cout << "Hi dear customer! \nPlease choose an option: \n1: Vegan \n2: Not vegan \nYour choice: ";
    cin >> option;

    //Acording to that option the user has to choose another ingredient
    if (option == 1)
    {
        cout << "Excellent choice! \nPlease choose one complement for your pizza: \n1:Bell pepper \n2:Tofu \nYour choice: ";
        cin >> complement;
        if (complement == 1)
        {
            ingredient = "bell pepper";
        }
        else if (complement == 2)
        {
            ingredient = "tofu";
        }
        else
        {
            cout << "Please enter a valid option.";
        }

        pizzaType = "vegan";
    }
    else if (option == 2)
    {
        cout << "Excellent choice! \nPlease choose one complement for your pizza: \n1:Pepperoni \n2:Jam \n3:Salmon \nYour choice: ";
        cin >> complement;
        if (complement == 1)
        {
            ingredient = "pepperoni";
        }
        else if (complement == 2)
        {
            ingredient = "jam";
        }
        else if (complement == 3)
        {
            ingredient = "salmon";
        }

        else
        {
            cout << "Please enter a valid option.";
        }

        pizzaType = "not vegan";
    }
    else
    {
        cout << "Sorry! This is not a valid option, plese try again";
    }
 
    //Display on the screen the users order acording to what they chose
    cout << "Your order is: " << pizzaType;
    cout << " pizza with tomato sauce, mozzarella and " << ingredient;
    cout << endl;

    // As a function it must return to a value, in this case 0
    return 0;
}