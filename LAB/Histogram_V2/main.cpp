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
    const int SIZE=4;
    char number[SIZE];

    //Input Data
    cout<<"Input a 4 digit number"<<endl;
    cin>>number;
    
    //Process the Data
    
    //Output the processed Data
    for(int j=SIZE-1;j>=0;j--){
        cout<<number[j]<<" ";
        if(number[j]>=48&&number[j]<=57){
            for(int i=1;i<=number[j]-48;i++){cout<<'*';}
            cout<<endl;
        }else cout<<'?'<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}