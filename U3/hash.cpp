
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

    int hash[9][17];

    for (int row = 0; row < 9 ; row++)
    {
        for (int col = 0; col < 17; col++)
        {
            if ((row!=2) && (row!=5) && (col!=5) && (col!=11))
            {
                cout << " ";
            }
            else if ((col==5) || (col==11))
            {
                cout << "|";
            }
            else if ((row==2) || (row==5))
            {   
                cout << "_"; 
            }
            
        }
        cout << endl;
    }

   return 0;
}
