/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 26/09/2022
    Description: Shows the use of compisite if
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that reads the users score and show its level of performance, as well as the amount of money thet the user will get.

//Main function integer type
int main (){

    cout << "In a certain company, its employees are evaluated at the end of each year. \nThe points that can be obtained in the evaluation start at 0.0 and can go up,\ntranslating into better benefits. The points you can get \nemployees can be 0.0, 0.4, 0.6 or more, but not intermediate values \nbetween the figures mentioned. Below is a table with the \nlevels corresponding to each score. The amount of money earned \non each level is $2,400 multiplied by the level score. \nLevel              Score \nUnacceptable        0.0 \nAcceptable          0.4 \nDeserving           0.6 or more \n";
    
    //Declaring variables
    double score;
    double money;
    
    //Asking the user for its score
    cout << "Please enter your score during your evaluation: ";
    cin >> score;
 
    //Look for the score range to find out how much moner they will get and display on the screen
    if((score==0.0)||(score==0.4)||(score>=0.6)) 
    {
        money=score*2400;
        cout << "Your score this year is: "<< score; cout << "\n";
        cout << "The amout of money you will get is $" << money <<endl;
    }
    else {
        cout<< "This is not a valid score, please enter a new value" <<endl;
    }
   
     //As a function it must return to a value, in this case 0
    return 0;
}