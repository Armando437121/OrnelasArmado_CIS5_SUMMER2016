/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 11th, 2016, 8:00 PM
 * Purpose:  Function Review V1
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
#include <cmath>     //Math
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fv,pv,intRate;
    int nComPds;
    
    //Input Data
    pv=100.0f;//Fix the principle in $'s
    intRate=0.06f;//Municipal bond rate risky 6 percent
    nComPds=12;//Number of compounding periods 12 yrs
    
    //Process the Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Resultant Savings F1 = $"<<save1(pv,intRate,nComPds)<<endl;
    cout<<"Resultant Savings F2 = $"<<save2(pv,intRate,nComPds)<<endl;
    cout<<"Resultant Savings F3 = $"<<save3(pv,intRate,nComPds)<<endl;
    cout<<"Resultant Savings F4 = $"<<save4(pv,intRate,nComPds)<<endl;
    cout<<"Resultant Savings F5 = $"<<save5(pv,intRate,nComPds)<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

float save5(float p,float i,int n){
    int ip=p*100;
    p=ip/100.0f;
    for(int year=1;year<=n;year++){
        p*=(1+i);
        ip=p*100;
        p=ip/100.0f;
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}