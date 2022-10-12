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

    int number;
    int lenght;


    cout << "Please enter the number you want your times table: \n";
    cin >> number;
    cout << "Please enter the lengh you desire: \n";
    cin >> lenght;
    cout <<"\n" << number << " Times table \n\n";
    

    for ( int i = 1; i <= lenght; i++)
    {
        cout << "|";
        for (int j= 1; j <48; j++)
        {
            cout << "-";
        }
        cout << "|";
        cout << "\n";
        cout << "|\t" << i << "\t" << "x"  << "\t" << number << "\t" << "=" << "\t" << i*number << "\t|\n";
        
    }
    for (int j= 1; j <50; j++)
    {
        cout << "-";
    }
    cout << endl;
}