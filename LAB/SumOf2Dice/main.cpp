/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 22, 2016, 1:18 PM
 * Purpose:  Throw 2 dice
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time function
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char die1,die2,sum;
    
    //Input Data
    srand(static_cast<unsigned int>(time(0)));
    
    //Process the Data
    die1=rand()%6+1;//Random number [1,6]
    die2=rand()%6+1;//Random number [1,6]
    sum=die1+die2;  //Random number [2,12]
    
    //Output the processed Data
    cout<<"Die 1 = "<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 = "<<static_cast<int>(die2)<<endl;
    cout<<"Sum   = "<<static_cast<int>(sum)<<endl;
    
    //Exit Stage Right!
    return 0;
}