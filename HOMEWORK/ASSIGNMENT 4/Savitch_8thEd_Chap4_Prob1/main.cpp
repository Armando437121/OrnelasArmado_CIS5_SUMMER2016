/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 6, 2016, 4:10 PM
 * Purpose:  Calculating Gas Mileage
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Library
#include <cmath>     //Math Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float litGas=0.264179;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float liters=0;//Number of Liters of Gas consumed by the car
    float galGas=0;//liters converted into Gallons
    int nMiles=0;//Number Of Miles Car was driven
    int gasMil=0;//miles per Gallon
    
    
    //Input Data
    cout<<"Input the Number of Liters car consumed"<<endl;
    cin>>liters;
    cout<<"Input the Number of Miles car has been Driven"<<endl;
    cin>>nMiles;
    
    //Process the Data
    galGas=liters*litGas;
    gasMil=nMiles/galGas;
    
    //Output the processed Data
    cout<<gasMil<<" Miles Per Gallon "<<endl;
    
    //Exit Stage Right!
    return 0;
}