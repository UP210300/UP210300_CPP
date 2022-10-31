
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

    int hash[11][11];

    for (int row = 0; row < 11; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if ((row%2==0) && (col!=3) && (col!=7))
            {
                cout << "x";
            }
            if ((row%2==0) && (col==3 || col==7))
            {
                cout << "|";
            }
            if (row==3 || row==7)
            {
                cout << "_"; 
            }
            
        }
        cout << endl;
    }
    

   
   return 0;
}