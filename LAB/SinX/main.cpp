/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 19th, 2016, 8:45 PM
 * Purpose:  Sin
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float aprxSin,term,tol=1e-6f,x;
    
    //Input Data
    cout<<"This program calculates the sin(x)"<<endl;
    cout<<"Input the x in radians which will then output sin(x)"<<endl;
    cin>>x;
    
    //Process the Data
    aprxSin=term=x;
    for(int n=2;abs(term)>tol;n+=2){
        term*=(-x/n * x/(n+1));
        aprxSin+=term;
    }
    
    //Output the processed Data
    cout<<"Exact       sin("<<x<<")="<<sin(x)<<endl;
    cout<<"Approximate sin("<<x<<")="<<aprxSin<<endl;
    
    //Exit Stage Right!
    return 0;
}