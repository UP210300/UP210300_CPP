/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 12/10/2022
    Description: Shows the use of for cycle
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that ask the user for a number and gives it the times table of the lenght the user desires

//Main function integer type
int main (){

    //Declaring variables
    int number;
    int lenght;

    //Ask the user fot the lenght and number of times table
    cout << "Please enter the number you want your times table: ";
    cin >> number;
    cout << "Please enter the lengh you desire: ";
    cin >> lenght;
    cout <<"\n" << number << " Times table \n\n";
    
    //Operations between lenght and number to create times table
    for ( int i = 1; i <= lenght; i++)
    {
        cout << "|";//Diaplay to create the side line of the table
        for (int j= 1; j <48; j++)//Display to create the separation between each result
        {
            cout << "-";
        }
        cout << "|";//Diaplay to create the side line of the table
        cout << "\n";
        cout << "|\t" << i << "\t" << "x"  << "\t" << number << "\t" << "=" << "\t" << i*number << "\t|\n"; //Disĺay the result of the operations
        
    }
    for (int j= 1; j <50; j++)//Display the bottom line of the table
    {
        cout << "-";
    }
    cout << endl;

  //As a function it must return to a value, in this case 0
  return 0;

}