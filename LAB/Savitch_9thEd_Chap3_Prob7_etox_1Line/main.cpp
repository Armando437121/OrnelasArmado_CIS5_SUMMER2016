/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Factorial
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
    float apprxEx=1,term=1,tol=1e-6f,x;
    
    //Input Data
    cout<<"This program calculates the e^x"<<endl;
    cout<<"Input the x which will then output e^x"<<endl;
    cin>>x;
    
    //Process the Data
    int n;
    for(n=1;term>tol;term*=x/n,apprxEx+=term,n++){}
    
    //Output the processed Data
    cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<"="<<apprxEx<<" with "<<n<<" terms"<<endl;
    
    //Exit Stage Right!
    return 0;
}