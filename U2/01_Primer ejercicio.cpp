/*
    Unit 2. Conditionals
    Author: Sofia Calderon Juarez
    Date: 22/09/2022
    Description: Shows the use of simple if
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
    cout << "Please enter your annual rent: ";
    cin >>income;
    if (income<10000){
        cout << "You have to pay 5% of taxes \n";
        taxToPay=income*1.05;
        cout << "You have to pay " <<taxToPay;
    }
    else if (income>=10000 && income<20000){
        cout << "You have to pay 15% of taxes \n";
        taxToPay=income*1.15;
        cout << "You have to pay " <<taxToPay;
    }
    else if (income>=20000 && income<35000){
        cout << "You have to pay 20% of taxes \n";
        taxToPay=income*1.2;
        cout << "You have to pay " <<taxToPay;
    }
    else if (income>=35000 && income<60000){
        cout << "You have to pay 30% of taxes \n";
        taxToPay=income*1.3;
        cout << "You have to pay " <<taxToPay;
    }
    else if (income>=60000){
        cout << "You have to pay 45% of taxes \n";
        taxToPay=income*1.45;
        cout << "You have to pay " <<taxToPay;
    }

    //As a function it must return to a value, in this case 0
    return 0;
}