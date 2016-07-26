/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
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
    int books;
    int months;
    float perMonth;
    float weeks;
    
    //Input Data
    cout<<"How many books do you plan to read? ";
    cin>>books;
    cout<<"How many months will it take you to read them? ";
    cin>> months;
    perMonth = static_cast<int>(books) / months;
    cout<<"Thats is "<< perMonth << " books per month. \n";
    weeks = perMonth / 4;
    cout<<"On 4 weeks per month, I have to read at least "<< weeks <<" books per week."<<endl;
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}