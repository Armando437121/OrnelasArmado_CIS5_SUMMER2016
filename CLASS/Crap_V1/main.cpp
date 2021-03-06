/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 07, 2016, 1:00 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number
#include <iomanip>   //Formatting 
#include <cmath>     //Math Library
#include <fstream>   //File I/0
#include <string>    //String Object
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nGames,nWins=0,nLose=0;
    
    //Input Data
    cout"The Game of Craps "<<endl;
    cout<<"How many games to Play"<<endl;
    cin>>nGames;
    
    //Process the Data
    for(int game=1,game<=nGames;games++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determin win of Loss
        if (sum==7||sum==11)nWins++;
        else if (sum==2||sum==3||sum==12)nLose++;
        else{
            //When to roll again
            bool rollAgn=false;
            do{
                //Throw another set of dice 
                die1=rand()6%1;
                die2=rand()6%1;
                char sumAng=die1+die2;
                if(sum==sumAgn){
                    nWins++;
                    rollAgn=false;
                }else if (sumAgn==7){
                    nLose++;
                    rollAgn=false;
                    else rollAgn+true;
                    while(rollAgn); }
            }
        }
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}