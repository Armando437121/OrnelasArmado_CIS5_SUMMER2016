/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  Use the math Library
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library -> atan, sin
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);  //PI to 7 significant digits
const float CNVRDEG=PI/180;//Conversion from radians to degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float deg=30;//30 degrees
    float rad;   //Declare the radian equivalient
    float result;//Result of the sin
    float x=2;
    float y=3;
    float ze,zm;
    
    //Input Data
    rad=deg*CNVRDEG;//Convert to radians
    
    //Process the Data
    result=sin(rad);
    ze=exp(y*log(x));
    zm=x*x*x;
    
    //Output the processed Data
    cout<<"sin("<<deg<<")="<<result<<endl;
    cout<<"ze="<<x<<"^"<<y<<" -> "<<ze<<endl;
    cout<<"zm="<<x<<"^"<<y<<" -> "<<zm<<endl;
    
    //Exit Stage Right!
    return 0;
}