/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 03/10/2022
    Description: Shows the use of do while
*/

// Library for output and input of the screen
#include <iostream>
// LIbrary for the use of printf and scanf
#include <stdio.h>

// Use of namespace to avoid the use of std::

using namespace std;

// Program that converts a decimal number to a binary number

// Main function integer type
int main()
{

  int decimal;
  string binary;

  cout << "Please enter a decimal number: ";
  cin >> decimal;

  if (decimal > 0)
  {
    while (decimal != 0)
    {
      if (decimal % 2 == 0)
      {
        binary = "0" + binary;
      }
      else
      {
        binary = "1" + binary;
      }
      decimal= decimal/2;
    }
     cout << "Binary number: " << binary << endl;
  }
  else
  {
    cout << "Please enter a number above 0";
  }
  
}