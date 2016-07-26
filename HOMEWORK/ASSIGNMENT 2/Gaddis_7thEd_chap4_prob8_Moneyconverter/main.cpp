/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 27, 2016, 9:03 PM
 * Purpose: Converting Currency into dollars
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float quat=.25, dim=.10, nick=.5 ,pen=.1, totVal;
    int  dol=1.00; //Converting Cents into Dollars
    
    //Input Data
    cout<<"Enter the number of quarters "<<endl;
    cin>>quat;
    cout<<"Enter the number of dimes "<<endl;
    cin>>dim;
    cout<<"Enter the number of nickels "<<endl;
    cin>>nick;
    cout<<"Enter the number of pennies "<<endl;
    cin>>pen;
    
    //Process the Data
    totVal=pen+nick+dim+quat;
    
    if(totVal = dol)
    cout<<"Congratulations the amount is correct"<<endl;
    else 
        cout<<"The amount is not correct"<<endl;
    
        
    
    //Output the processed Data
    
  
    return 0;
}