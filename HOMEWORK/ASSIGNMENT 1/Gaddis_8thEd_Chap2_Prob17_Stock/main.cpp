/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 21, 2016, 12:27 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace to the System Libraries

//User Libraries


//Global Constant 


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    unsigned short nShares=750;//Number of Shares
    unsigned char  stkPrce=35; //Stock Price in $'s
    float commish=2e-2f;//2 percent commission
    float valStk,cPaid,totPaid;
    
    
    
    //Input data
    
    
    //Process data
    valStk=nShares*stkPrce;//Value of the stock $'s
    cPaid=valStk*commish; //commission paid in $'s
    totPaid=valStk+cPaid; //Total tendered in $'s
    
    
    
    
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Price paid for the stock = $"<<setw(9)<<valStk<<endl;
    cout<<"Commission paid          = $"<<setw(9)<<cPaid<<endl;
    cout<<"Cost of the transaction  = $"<<setw(9)<<totPaid<<endl;
    
    
    //Exit Stage Right
    
    return 0;
}


