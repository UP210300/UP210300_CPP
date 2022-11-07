
/*
Unit 3. Functions
Author: Sofia Calderon Juarez
Date: 06/11/22
Description: Tic-Tac-Toe game
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Program that allows you to play Tic-Tac-Toe

//
void diplayHash(string);
void selectMove(int);
void displayMove(int);
void asingMove(int);

int move;
int row;
int col;
char playersTurn;
char moveValue;
char possibleMoves[3][3]={"1","2","3","4","5","6","7","8","9"};


//Main function integer type
int main (){
   
   bool busyBox= true;
    do
    {
        move= selectMove();
        busyBox= testBusyBox(move);
        if (busyBox==false)
        {
            asingMove(move);
            system("clear");
            displayHash();
        }
        
    } while (busyBox== true);
    

   return 0;
 
}

void diplayHash() {

    int hash[9][11];

    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if ((row!=2) && (row!=5) && (col!=3) && (col!=7))
            {
                cout << " ";
            }
            else if ((col==3) || (col==7))
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
}

void selectMove(){
    do
    {
        cout << "Please enter yout move: \n";
        cout << "My move: ";
        cin >> move;

    } while ((move<=9) && (move>0));

    return move;
    
}

bool testBusyBox(int move){

    if ((move==1)||(move==2)||(move==3))
    {
        row=1;
    }
    else if ((move==4)||(move==5)||(move==6))
    {
        row=4;
    }
    else if ((move==7)||(move==8)||(move==9))
    {
        row=7
    }

    if ((move==1)||(move==4)||(move==7))
    {
        col=1;
    }
    else if ((move==2)||(move==5)||(move==8))
    {
        col=5;
    }
    else if ((move==3)||(move==6)||(move==9))
    {
        col=9;
    }
    
    if (possibleMoves[row][col]=="X"|| possibleMoves[row][col]=="O")
    {
        return true;
    }
    else
    {
        return false;
    }  
    
}

void displayMove(int move){

    
    if (playersTurn%2==0)
    {
        moveValue= "X";
    }
    else
    {
        moveValue= "O";
    }
    
    
}

void asingMove(int move){
     
    if (move==1)
    {
        possibleMoves[1][1]= moveValue;
    }
    if (move==2)
    {
        possibleMoves[1][5]= moveValue;
    }
    if (move==3)
    {
        possibleMoves[1][9]= moveValue;
    }
    if (move==4)
    {
        possibleMoves[4][1]= moveValue;
    }
    if (move==5)
    {
        possibleMoves[4][5]= moveValue;
    }
    if (move==6)
    {
        possibleMoves[4][9]= moveValue;
    }
    if (move==7)
    {
        possibleMoves[7][1]= moveValue;
    }
    if (move==8)
    {
        possibleMoves[7][5]= moveValue;
    }
    if (move==9)
    {
        possibleMoves[7][9]= moveValue;
    }

    return moveValue;
}