/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 22/09/2022
    Description: Shows the use of compisite if 
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that ask the user its annual rent and shows the type of tax that corresponds

//Main function integer type
int main (){
    
    cout << "The tax brackets for the declaration of income in a given country are the following: \nIncome                             Tax rate \nLess than   $10,000                 5% \nBetween     $10,000 and $20,000     15% \nBetween     $20,000 and $35,000     20% \nBetween     $35,000 and $60,000     30% \nMore than   $60,000                 45% " << endl;

    float income, taxToPay;
    int percentage;

    //Ask the user for their income
    cout << "Please enter your annual rent: ";
    cin >>income;
    
    
    //Look for the tax rate acording to the income
    if (income<10000){
        percentage=5;
    }
    else if (income>=10000 && income<20000){
        percentage=15;
    }
    else if (income>=20000 && income<35000){
        percentage=20;
    }
    else if (income>=35000 && income<60000){
        percentage=30;
    }
    else if (income>=60000){
        percentage=45;
    }
    
    
    //Operation of how much the user have to pay acording to the tax rate and print the result
    taxToPay=income*percentage/100;
    cout << "Your tax rate is: " <<percentage;  cout << "%\n";
    cout << "You have to pay: " <<taxToPay;  cout << " $" <<endl;

    //As a function it must return to a value, in this case 0
    return 0;
}