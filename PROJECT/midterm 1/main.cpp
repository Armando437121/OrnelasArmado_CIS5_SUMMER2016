/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
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
     int size;
    
    //Input Data
    cout<<"Enter a number: "<<endl;
    cin>>size;
    //Process Data
    for(int rows=1;rows<=size;rows++){ //rows
        for(int cols=1;cols<=size;cols++){
            if(rows==cols || cols==(size+1)-rows) cout<<cols;
            else cout<<" ";
            }
        cout<<endl;
    }
    //Output Data
    
    
    
    //Exit Stage Right!
    return 0;
}