/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 21, 2016, 12:27 PM
 * Purpose: Circuit Board Selling Price
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//iostream uses the standard namespace

//User Libraries


//Global Constants
const float CNVFTAC=4.356e4f;//Conversion from Ft^2 to Acres
const float CNVMFT=1/5.28e3f;//Conversion from Miles to Ft

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float nAcres;//Number of Acres
    float nSqMls;//Number of Square Miles
    
    
    //Input data
    cout<<"Enter the number of Acres to convert to Square Miles"<<endl;
    cin>>nAcres;
    
    //Process data
    nSqMls=nAcres*CNVFTAC*CNVMFT*CNVMFT;
    
    
    //Output data
    cout<<nAcres<<" acres = "<<nSqMls<<" miles^2 "<<endl;
    
    
    //Exit Stage Right
    
    return 0;
}


