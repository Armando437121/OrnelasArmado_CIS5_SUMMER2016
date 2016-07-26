/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 13th, 2016, 8:30 PM
 * Purpose:  Military Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void input(int &,int &);
void cnvrt(int,int,int &,int &,char &);
void output(int,int,char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int milHr,milMin,hr,min;
    char ampm;
    
    //Input Data
    input(milHr,milMin);
    
    //Process the Data
    cnvrt(milHr,milMin,hr,min,ampm);
    
    //Output the processed Data
    output(hr,min,ampm);
    
    //Exit Stage Right!
    return 0;
}

void input(int &mhr,int &mmin){
    //Declare colon variable
    char colon;
    //Prompt for user input
    do{
        cout<<"This program converts military to standard time"<<endl;
        cout<<"Type in the military time in hh:mm"<<endl;
        cin>>setw(2)>>mhr>>colon>>setw(2)>>mmin;
    }while(mhr>=24||mhr<0||mmin>59||mmin<0);
    if(mhr<10)cout<<'0'<<mhr;
    else cout<<mhr;
    cout<<colon;
    if(mmin<10)cout<<'0'<<mmin;
    else cout<<mmin;
    cout<<" = ";
}

void cnvrt(int mhr,int mmin,int &hr,int &min,char &ap){
    //Convert the hour
    hr=mhr;
    ap='A';
    if(hr>12){
        hr-=12;
        ap='P';
    }else if(hr==12)ap='P';
    else if(hr==0)hr=12;
    min=mmin;
}

void output(int hr,int min,char ap){
    //Output the result
    if(hr<10)cout<<'0'<<hr;
    else cout<<hr;
    cout<<":";
    if(min<10)cout<<'0'<<min;
    else cout<<min;
    cout<<" "<<ap<<"M"<<endl;
}