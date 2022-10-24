/*
Unit 3. Functions
Author: Sofia Calderon Juarez
Date: 24/10/22
Description: Shows the use of functions
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Program that gives change to the user

void getChange(int);
void getCoins(int);
void displayChange(string);

int quinientos=0, docientos=0, cien=0;
int cincuenta=0, veinte=0;
int diez=0, cinco=0, dos=0, uno=0;
 
//Main function integer type
int main (){

    int money;
    
    cout << "Please enter the amount of money: ";
    cin >> money;

    getChange(money);
    displayChange("Total");
   
   return 0;
 
}

void getChange(int money){
    int residue;
    quinientos= money/500;
    residue= money%500;
    docientos= residue/200;
    residue= residue%200;
    cien= residue/100;
    residue= residue%100;
    cincuenta= residue/50;
    residue= residue%50;
    veinte= veinte/20;
    residue= residue%20;
    diez= residue/10;
    residue= residue%10;
    cinco= residue/5;
    residue= residue%5;
    dos= residue/2;
    residue= residue%2;
    uno= residue/1;
    residue= residue%1;
}