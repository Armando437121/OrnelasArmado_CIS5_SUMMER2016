/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 22, 2016, 1:45 PM
 * Purpose: Free Fall Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace to the System Libraries

//User Libraries


//Global Constant 
const float GRAVITY=32.174f;//Acceleration sea level ft/sec/sec

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float time;    //Time in seconds
    float dstance;//Distance in feet
    
    //Input data
    cout<<"Input time for free fall in seconds"<<endl;
    cin>>time;
    
    
    //Process data
    //dstance=1/2*GRAVITY*time*time;//gives 0 because of int/int division
    //dstance=GRAVITY*time*time/2;
    //dstance=1.0f/2*GRAVITY*time*time;
    dstance-1/2.0f*GRAVITY*time*time;
    
    //Output the processed data
    cout<<"The distance dropped during "<<time<<"(secs) = ";
    cout<<dstance<<"(ft)"<<endl;
    
    //Exit Stage Right
    
    return 0;
}


