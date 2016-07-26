/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 22, 2016, 1:45 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace to the System Libraries

//User Libraries


//Global Constant 

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float msMass=35;//35 Grams is the mass of the mouse 
    float msKill=5; //5 Grams of sweetener kill the mouse
    float hmMass=45400;//grams is the mass of soda can content
    float msSoda=350;//350grams is the mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener
    int nCans;//Number of cans to kill dieter
    
    //Input data
    
    //Process data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed data
    cout<<"The number of cans that a dieter with mass =";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right
    
    return 0;
}


