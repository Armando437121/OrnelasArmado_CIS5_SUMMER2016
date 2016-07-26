/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 27, 2016, 7:05 PM
 * Purpose:  Paycheck calculation with If-else statement
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd=50;//Hours worked
    float payRate=10;//$s/hr
    char  ovrTime=40;//Overtime starts at 40 hours
    float payChck;//Paycheck in $'s
    
    //Input Data
    
    //Process the Data with a dependent if-else
    if(hrsWrkd<ovrTime){
            payChck=hrsWrkd*payRate;//Straight time
    }else{
            payChck=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate*0.5;//time and 1/2
    }
    
    //Output the processed Data
    cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}