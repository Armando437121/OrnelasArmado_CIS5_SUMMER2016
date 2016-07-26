/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 17th, 2016, 1:20 PM
 * Purpose: MY project Tic Tac Toe
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number seed
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
char square[11]={'0','1','2','3','4','5','6','7','8','9','\0'}; 
char square1[11]={'0','1','2','3','4','5','6','7','8','9','\0'}; 
void board();
int win();
int reset();
int reset1();
//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    char playagain='y';
    while(playagain=='y')
     
    {
    //Input data
        cout<<"Welcome to my Tic Tac Toe!!!\n\n\n"<<endl;
        int player=1;
        int i,choice;
        char mark;
        
        do
        {
            
            board();
            player=(player%2)?1:2;
            cout<<"Player "<<player<<" enter a number: ";
            cin>>choice;
            mark=(player==1)?'x':'0';
            
            if(choice==1  && square[1]=='1')
            {
                square1[1]=mark;
                square[1]=mark;
            }
            else if (choice == 2 && square[2] == '2')
            {  
                square1[2] = mark;
                square[2] = mark;
            }
            else if (choice == 3 && square[3] == '3')
            {   
                square1[3] = mark;
                square[3] = mark;
            }
            else if (choice == 4 && square[4] == '4')
            { 
                square1[4] = mark;
                square[4] = mark;
            }
            else if (choice == 5 && square[5] == '5')
            { 
                square1[5] = mark;
                square[5] = mark;
            }
            else if (choice == 6 && square[6] == '6')
            { 
                square1[6] = mark;
                square[6] = mark;
            }
            else if (choice == 7 && square[7] == '7')
            {
                square1[7] = mark;
                square[7] = mark;
            }
            else if (choice == 8 && square[8] == '8')
            {   
               square1[8] = mark;
                square[8] = mark;
            }
            else if (choice == 9 && square[9] == '9')
            {
               square1[9] = mark;
                square[9] = mark;
            }
            
            else
            {
                cout<<"\nINVALID MOVE \n\n";
                player--;
                
            }
            i=win();
            player++;
        }while(i==-1);
        board();
        if(i==1)
        cout<<"Player"<<--player<<" win";
        if(i==0)
        cout<<"Game Tie";
        
        
        cout<<"\n\nWanna play again(y\n)?:";
        cin>>playagain;
        cout<<endl;
        
        if(playagain=='y')
        {
            cout<<"You choice to play again\n\n";
        }
        else if(playagain=='n')
        {
            cout<<"You choice not to play again\n\n";
        }
        else
        {
            cout<<"You didn't put an valid character so I will take it like(n),so the program will close.\n\n";
        }
        
        for(int c=0;c<40;c++)
        {
            cout<<"****";
        }
        cout<<endl;
        
        reset();
        reset1();
    }
}

// Process Data
int win()
{
    if(square[1]==square[2]&&square[2]==square[3])
        return 1;
    
    else if(square[4]==square[5]&&square[5]==square[6])
        return 1;
    
    else if(square[7]==square[8]&&square[8]==square[9])
        return 1;
    
    else if(square[1]==square[4]&&square[4]==square[7])
        return 1;
    
    else if(square[2]==square[5]&&square[5]==square[8])
        return 1;
    
    else if(square[3]==square[6]&&square[6]==square[9])
        return 1;
    
    else if(square[1]==square[5]&&square[5]==square[9])
        return 1;
    
    else if(square[3]==square[5]&&square[5]==square[7])
        return 1;
    
    else if (square[1] != '1' && square[2] !='2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8'
            && square[9] != '9')
        return 0;
    
    else
        return -1;
    
}
//Output Data
void board()
{
    cout<<"\tTic Tac Toe\t\t\n\n";
    cout<<"PLAYER 1(x) , PLAYER 2(0)\n\n";
    cout<<square[1]<<"|"<<square[2]<<"|"<<square[3]<<endl;
    cout<<"_____"<<endl;
    cout<<square[4]<<"|"<<square[5]<<"|"<<square[6]<<endl;
    cout<<"_____"<<endl;
    cout<<square[7]<<"|"<<square[8]<<"|"<<square[9]<<endl;
   
}  

int reset()
{
        square[1] = '1';
        square[2] = '2';
        square[3] = '3';
        square[4] = '4';
        square[5] = '5';
        square[6] = '6';
        square[7] = '7';
        square[8] = '8';
        square[9] = '9';
}
  
  int reset1()
  {
        square[1] = '1';
        square[2] = '2';
        square[3] = '3';
        square[4] = '4';
        square[5] = '5';
        square[6] = '6';
        square[7] = '7';
        square[8] = '8';
        square[9] = '9';
  }
 