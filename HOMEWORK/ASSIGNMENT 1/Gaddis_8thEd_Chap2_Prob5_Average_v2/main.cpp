/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 21, 2016, 1:33 PM
 * Purpose: Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace to the System Libraries

//User Libraries


//Global Constant 


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int x,cnt=0;//Values to average 
    float avg=0;
    
    
    //Input data
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg=+1;
    cnt=cnt+1;
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    //Process data
    avg=avg/cnt;
    
    
    
    
    //Output data
    cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right
    
    return 0;
}


