/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 7, 2016, 7:44 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ocnRise,//The level at which the ocean is rising
            time;//The years
    
    //Process the Data and output simultaneously
    cout<<"Ocean level rise in mm per year"<<endl;
    cout<<"Years      mm"<<endl;
    for(int year=1;year<=25;year++){
        ocnRise=1.5*year;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(3)<<year<<"\t"<<setw(5)<<ocnRise<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}