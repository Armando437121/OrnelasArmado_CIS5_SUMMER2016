/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 30, 2016, 2:53 PM
 * Purpose: Conversion From Kilos to Newtons 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float obMs;     //Objects Mass in Kilograms
    float nwT;      //Converted weight to Newtons
    float grv=9.8;  //Gravity
    //Input data
    cout<<"Input the Object's Mass in Kilograms "<<endl;
    cin>>obMs;
    
    //Process data
    nwT=obMs*grv;   //Equation for Conversion from Kilograms to Newtons
   
    //Output data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Converted Weight in Newtons = "<<nwT<<endl;
    if (nwT>=1000)
        cout<<"Too Heavy!"<<endl;
    if (nwT<=10)
        cout<<"Too Light!"<<endl;
    
    //Exit Stage Right
    return 0;
}


