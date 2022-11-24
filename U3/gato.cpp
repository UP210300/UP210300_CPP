/*
Unit 3. Functions
Author: Sofía Calderón Juárez
Date: 19/11/2022
Description: Tic-Tac-Toe game applying the use of functions an arrays
*/
 
//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>
//Library to generate random numbers
#include <time.h>
 
//Use of namespace to avoid the use of std::
 
using namespace std;
 
//Tic-Tac-Toe game
 
//Function prototype
void displayHash();
void moves();
void mode();
char selectMove();
int selectMovePC();
bool checkBusyBox(char);
void placeMove(char);
bool checkWin();
void displayWinner();
char askKeepPlaying();

int row;
int col;
char let[9][17];
int gameMode;
int turnPlayer;

//Main function integer type
int main()
{
    char keepPlaying;

    do
    {
        char move;
        bool busyBox = true;
        bool winner = false;

        cout << "\x1B[1;36m" << "       # Tic-Tac-Toe Game # \n" << "\x1B[0m";
        cout << endl;
        cout << "               Menu     \n";
        cout << endl;
        cout << "1. Multi  player: Human vs Human \n";
        cout << "2. Single player: Human vs Computer \n";
        cout << endl;
        cout << "Please select the game mode that you desire \n";
        cout << "Game mode: ";
        cin >> gameMode;

        while (gameMode != 1 && gameMode != 2)
        {
            cout << "\x1b[33m" << "ERROR. Please select a game mode \n" << "\x1B[0m";
            cout << "Game mode: ";
            cin >> gameMode;
        }

        cout << endl;
        mode();
        moves();
        displayHash();

        do
        {
            if (gameMode == 1)
            {
                move = selectMove();
            }
            else
            {

                if (turnPlayer%2==1) //la maquina impares
                {
                    move = selectMovePC();
                }
                else
                {
                   move = selectMove();
                }
                
            }

            busyBox = checkBusyBox(move);
            if (busyBox == true)
            {
                cout << "Ups :/, busy box. Select another move \n";
            }
            else
            {
                placeMove(move);
                system("clear");
                mode();
                displayHash();
                winner = checkWin();
                turnPlayer++;
            }
        } while (turnPlayer < 9 && winner == false);

        displayWinner();
        turnPlayer= 0;
        keepPlaying= askKeepPlaying();

    }while ( keepPlaying == 'y' |keepPlaying == 'Y');
   

    cout << "Thanks for playing this game, hope you enjoy it!" << endl;
    
    return 0;

}

void displayHash()
{
    int hash[9][17];
    int color = 34;
    for (int row = 0; row < 9 ; row++)
    {
        for (int col = 0; col < 17; col++)
        {
            if ((row!=2) && (row!=5) && (col!=5) && (col!=11))
            {
                if ((row==1||row==4||row==7)&&(col==2||col==8||col==14))
                {
                    color = (let[row][col] == 'X')?31
                        :(let[row][col]=='O')?32:37;
                
                    cout << "\x1B[1;" << color <<"m" << let[row][col]<< "\x1B[0m";
                }
                else
                {
                    cout << " ";
                }  
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

}

void moves(){

    let[1][2]='a';
    let[1][8]='b';
    let[1][14]='c';
    let[4][2]='d';
    let[4][8]='e';
    let[4][14]='f';
    let[7][2]='g';
    let[7][8]='h';
    let[7][14]='i';

}

void mode(){

    if (gameMode == 1)
    {
        cout << endl;
        cout << "Game mode: Human vs Human \n";
        cout << endl;
        cout << "Player 1:  " << "\x1B[1;31m" << "X" << "\x1B[0m \t";
        cout << "Player 2:  " << "\x1B[1;32m" << "O" << "\x1B[0m" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Game mode: Human vs Computer \n";
        cout << endl;
        cout << "Player 1:  " << "\x1B[1;31m" << "X" << "\x1B[0m \t";
        cout << "Machine:  " << "\x1B[1;32m" << "O" << "\x1B[0m" <<endl;
        cout << endl;
    } 
}

char selectMove()
{
    char move;
    cout << "Player " << turnPlayer % 2 + 1 << " Please enter your move: ";
    cin >> move;
    if (move != 'a' && move != 'b' && move != 'c' && move != 'd' && move != 'e' && move != 'f' && move != 'g' && move != 'h' && move != 'i')
    {
        do
        {
            cout << "Error :( Please enter a valid move \n";
            cout << "Player " << turnPlayer % 2 + 1 << " Please enter your move: ";
            cin >> move;
        } while (move != 'a' && move != 'b' && move != 'c' && move != 'd' && move != 'e' && move != 'f' && move != 'g' && move != 'h' && move != 'i');
    
    }
    return move;
}

int selectMovePC(){

    int num;
    char let;
    srand(time(NULL));
    num = 97 + rand() % (105-97);
    let= char(num);
    return let;
}

bool checkBusyBox(char move){
    
    int row;
    int col;

    if (move== 'a'|| move== 'b'|| move== 'c' )
    {
        row=1;
    }
    else if (move== 'd' || move== 'e' || move== 'f' )
    {
        row=4;
    }
    else if (move== 'g' || move== 'h' || move== 'i')
    {
        row=7;
    }
    if (move== 'a'|| move== 'd'|| move== 'g' )
    {
        col=2;
    }
    else if (move== 'b' || move== 'e' || move== 'h')
    {
        col=8;
    }
    else if (move== 'c' || move== 'f' || move== 'i' )
    {
        col=14;
    }
    
    if (let[row][col]== 'X'||let[row][col]== 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void placeMove(char move){

    char moveValue;
    if(turnPlayer%2==0){
        
        moveValue='X';
    }
    else
    {
        moveValue='O';
    }
    
    if (move =='a')
    {
        let[1][2]= moveValue;
    }
    else if (move == 'b')
    {
        let[1][8]= moveValue;
    }
    else if (move== 'c')
    {
        let[1][14]= moveValue;
    }
    else if (move == 'd')
    {
        let[4][2]= moveValue;
    }
    else if (move == 'e')
    {
        let[4][8]= moveValue;
    }
    else if (move == 'f')
    {
        let[4][14]= moveValue;
    }
    else if (move == 'g')
    {
        let[7][2]= moveValue;
    }
    else if (move == 'h')
    {
        let[7][8]= moveValue;
    }
    else if (move == 'i')
    {
        let[7][14]= moveValue;
    }

}

bool checkWin(){

    if (let[1][2] == 'X' && let[1][8] == 'X' && let[1][14] == 'X')

        return true;
    else if (let[4][2] == 'X' && let[4][8] == 'X' && let[4][14] == 'X')

        return true;
    else if (let[7][2] == 'X'  && let[7][8] == 'X' && let[7][14] == 'X')

        return true;
    else if (let[1][2] =='X' && let[4][2] == 'X' && let[7][2] == 'X')

        return true;
    else if (let[1][8] == 'X'  && let[4][8] == 'X' && let[7][8] == 'X')

        return true;
    else if (let[1][14] == 'X' && let[4][14] == 'X' && let[7][14] == 'X')

        return true;
    else if (let[1][2] == 'X' && let[4][8] == 'X' && let[7][14] == 'X')

        return true;
    else if (let[7][2] == 'X' && let[4][8] == 'X' && let[1][14] == 'X')

        return true;
    if (let[1][2] == 'O' && let[1][8] == 'O' && let[1][14] == 'O')

        return true;
    else if (let[4][2] == 'O' && let[4][8] == 'O' && let[4][14] == 'O')

        return true;
    else if (let[7][2] == 'O'  && let[7][8] == 'O' && let[7][14] == 'O')

        return true;
    else if (let[1][2] =='O' && let[4][2] == 'O' && let[7][2] == 'O')

        return true;
    else if (let[1][8] == 'O'  && let[4][8] == 'O' && let[7][8] == 'O')

        return true;
    else if (let[1][14] == 'O' && let[4][14] == 'O' && let[7][14] == 'O')

        return true;
    else if (let[1][2] == 'O' && let[4][8] == 'O' && let[7][14] == 'O')

        return true;
    else if (let[7][2] == 'O' && let[4][8] == 'O' && let[1][14] == 'O')

        return true;
    else
        return false;
    
}

void displayWinner(){

    bool winner;
    winner= checkWin();

    if (gameMode==1)
    {
        if (winner == true)
        {
            if (turnPlayer % 2 == 0)
            {
                cout << endl;
                cout << "Congrats player 2 " << "\x1B[1;32m" << "O" << "\x1B[0m" << ", you won \n";
            }
            else
            {
                cout << endl;
                cout << "Congrats player 1 , you won \n";
            }
        }
        else if (winner == false)
        {
            cout << endl;
            cout << "Draft :( \n";
        }
    }
    else
    {
        if (winner == true)
        {
            if (turnPlayer % 2 == 0)
            {
                cout << endl;
                cout << "Ups, looks like the machine is smarter than you. The machine wins !!! " << "\x1B[1;32m" << "O" << "\x1B[0m" << ", you won \n";
            }
            else
            {
                cout << endl;
                cout << "You beat the machine :). Congrats player 1 , you won !!! \n";
            }
        }
        else if (winner == false)
        {
            cout << endl;
            cout << "Draft :( \n";
        }
    }
    
    
}

char askKeepPlaying(){

    char keepPlaying;

    cout << "If you want to keep playing please type -y, if not please type -n \n";
    cin >> keepPlaying;

    if (keepPlaying != 'y' && keepPlaying != 'Y' && keepPlaying != 'n' && keepPlaying != 'N')
    {
        cout << "Error :(, please type a valid option. \n";
        cout << "If you want to keep playing please type -y, if not please tyoe -n \n";
        cin >> keepPlaying;
    }

    system("clear");
    return keepPlaying;
}
