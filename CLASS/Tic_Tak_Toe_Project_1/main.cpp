/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 11th, 2016, 1:20 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <iomanip>   //Formatting
#include <cmath>     //Math Library
#include <fstream>   //File I/O
#include <string>    //String Object
using namespace std; //Namespace of the System Libraries

//User Libraries
void display_board();
void player_turn();
bool gameover();
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char turn;
    bool draw = false;
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
 
    //Input Data
    
    
        cout<<"Tic Tac Toe Game\n";
        cout<<"Player 1 [X] --- Player 2 [0]\n";
        turn = 'X';
        
        while(!gameover())
        {
            display_board();
            player_turn();
            gameover();
        }
        
        if (turn == '0' && !draw)
        
        {
       display_board();
       cout << endl << endl <<"Player 1 [X] wins! Game over!\n";
       
        }
        else if (turn == 'X' && !draw)
        {   
       display_board();
       cout << endl << endl <<"Player 2 [0] Wins! Game Over!\n";
      
        }  
        else
        {
        display_board();
        cout << endl << endl << "It's a draw! Game Over!\n";
        }
}
void display_board()
{
    cout << "___________________" << endl << endl;
    cout << "     |     |     " << endl;
    cout << " " << board[0][0]  << "|" board[0][1]"|" << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << " " << board[1][0]  << "|" board[1][1]"|" << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl
    cout << " " << board[0][0]  << "|" board[0][1]"|" << board[0][2] << endl; 
    cout << "     |     |     " << endl; 
}

void player_turn();
{ 
   int choice;
   int row = 0, column = 0;
   
   if(turn == 'X')
   {
       cout << "Player 1 turn [X]: ";
   }
   else if(turn == '0') 
   {
       cout << "Player 2 turn [0]: ";
   }
   cin >> choice;
   
   switch (choice)
   {
       case 1: row = 0; column = 0; break;
       case 2: row = 0; column = 1; break;
       case 3: row = 0; column = 2; break;
       case 4: row = 1; column = 0; break;
       case 5: row = 1; column = 1; break;
       case 6: row = 1; column = 2; break;
       case 7: row = 2; column = 0; break;
       case 8: row = 2; column = 1; break;
       case 9: row = 2; column = 2; break;
       default:
           cout << "you didn't enter a correct number! Try again\n";
           player_turn();
   }
   
}

bool gameover()
{
    for(int i = 0; i < 3; i++) //Check for a win
    {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] ||(board[0][i] == board)) 
        {
            return true;
        }
                
    }
    
    for (int i = 0; i < 3; i++) //Check for draw 
    {
        for (int j = 0; j < 3; j++)
        {   
            if (board[i][j] != 'X' && board[i][j] != '0')
            {
                return false;
            }
        }
    }
    draw = true;
    return true;
}
