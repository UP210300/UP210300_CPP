
/*
Unit 3. Functions
Author: Sofia Calderon Juarez
Date: 28/10/22
Description: Filling a matrix
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Program that shows vthe vuse of nested for to fill a matrix
 
//Main function integer type
int main (){
   
   int conjunto[5][5];

    for (int row = 0; row < 5; row ++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Value (" << row <<"," << col << ") : ";
            cin >> conjunto [row][col];
        }
        
    }

     for (int row = 0; row < 5; row ++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << conjunto [row][col] << "\t";
        }
        cout << endl;
    }
    

   return 0;
 
}