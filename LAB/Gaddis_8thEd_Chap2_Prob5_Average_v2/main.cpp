/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 21, 2016, 1:33 PM
 * Purpose:  Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables and Initialize
    int x,cnt=0;//Values to average
    float avg=0;
    
    //Input Data
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
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    cout<<"Input data to average"<<endl;
    cin>>x;
    avg=avg+x;
    cnt=cnt+1;
    
    //Process the Data
    avg=avg/cnt;
    
    //Output the processed Data
    cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}