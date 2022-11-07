/*
Unit 3.Fuctions
Author: Sofia Calderon Juarez
Date: 31/10/22
Description: 
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Program that prints hash sing

//Main function integer type
int main (){

    int hash[9][11];

    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if ((row!=2) && (row!=5) && (col!=3) && (col!=7))
            {
                cout << " ";
            }
            else if ((row==2) || (row==5))
            {
                cout << "_"; 
            }
            else if ((col==3) || (col==7))
            {
                cout << "|";
            }
        }
        cout << endl;
    }

   return 0;
}
