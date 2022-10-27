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

int calculo(int);
void getChange(int);
void getCoins(int);
void displayChange(string);
void displayChangeCoins(string);
void displayOption(string);

int quinientos=0, docientos=0, cien=0;
int cincuenta=0, veinte=0;
int diez=0, cinco=0, dos=0, uno=0;
int residue;
 
//Main function integer type
int main (){

    int money;
    string choose;
    
    cout << "Please enter the amount of money: ";
    cin >> money;
    cout << "Please choose: \na)Bills and coins \nb)Coins \nYour choice: ";
    cin >> choose;

    if (choose=="a")
    {
        getChange(money); 
        displayChange("Total");
    }
    if (choose=="b")
    {
        getCoins(money); 
        displayChangeCoins("Total");
    }
    else
    {
        cout << "Error, Please enter a valid option";
    }
    
    
   return 0;
 
}
int calculo(int bills, int getmoney){
    int result;
    result = getmoney/bills;
    residue=getmoney%bills;
    getmoney= residue;
    return result;
}

void getChange(int getmoney){

    quinientos= calculo(500,getmoney);
    docientos= calculo(200,residue);
    cien= calculo(100,residue);
    cincuenta= calculo(50,residue);
    veinte= calculo(20,residue);
    diez= calculo(10,residue);
    cinco= calculo(5,residue);
    dos= calculo(2,residue);
    uno= calculo(1,residue);
}

void getCoins(int getmoney){

    diez= calculo(10,getmoney);
    cinco= calculo(5,residue);
    dos= calculo(2,residue);
    uno= calculo(1,residue);
}

void displayChange(string){
    
    cout << "Billetes: \n";
    cout << "Quinientos: " << quinientos <<endl;
    cout << "Docientos: " << docientos <<endl;
    cout << "Cien: " << cien <<endl;
    cout << "Cincuenta: " << cincuenta <<endl;
    cout << "Veinte: " << veinte <<endl;
    cout << "Monedas: \n"; 
    cout << "Diez: " << diez <<endl;
    cout << "Cinco: " << cinco <<endl;
    cout << "Dos: " << dos <<endl;
    cout << "Uno: " << uno <<endl; 

}

void displayChangeCoins(string){
    
    cout << "Monedas: \n"; 
    cout << "Diez: " << diez <<endl;
    cout << "Cinco: " << cinco <<endl;
    cout << "Dos: " << dos <<endl;
    cout << "Uno: " << uno <<endl; 

}

 
