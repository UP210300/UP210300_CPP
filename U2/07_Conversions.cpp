/*
    Unit 2. Control structures and cycles
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

  //Declaring variables
  int decimal;
  string binary;

  //Ask the user for a number to convert
  cout << "Decimal to binary conversion \n\n";
  cout << "Decimal number: ";
  cin >> decimal;

  //Find out if the number enter by the user is above 0
  if (decimal > 0)
  {
    //Loop to do the conversion
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
    //Display the result
     cout << "Binary number: " << binary << endl;
  }
  else
  {
    cout << "Please enter a number above 0" <<endl;
  }

  //As a function it must return to a value, in this case 0
  return 0;

}