/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  Add 2 numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a,b,c;//3 Integer Variables
    
    //Input Data
    cout<<"Input 2 integers -> DDDDDDDDDD DDDDDDDDDD"<<endl;//Prompt
    cin>>a>>b;//Input the 2 integers
    
    //Process the Data
    c=a+b;//Add the 2 integers and place into the 3rd integer
    
    //Output the processed Data
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c=a+b => "<<c<<endl;
    
    //Exit Stage Right!
    return 0;
}