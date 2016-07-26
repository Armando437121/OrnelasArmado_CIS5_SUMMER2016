/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 27, 2016, 8:30 PM
 * Purpose:  Enter mass in kg and convert to nwnts then check weight
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Data
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float massKg, massNewt, gravity=9.8; //Calculating the wight in Newtons way
    
    //Input Data
    cout<<"Enter the objects mass in kg"<<endl;
    cin>>massKg;
    
    //Process the Data
    massNewt=massKg*gravity;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The mass in newtons is "<<massNewt<<endl;
    if(massNewt>=1000)
        cout<<"The object is too heavy"<<endl;
    else cout<<"The object is too light"<<endl;
    
    //Exit Stage Right!
    return 0;
}