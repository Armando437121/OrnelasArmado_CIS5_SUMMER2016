/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 22, 2016, 1:45 PM
 * Purpose: Use the math Library
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Libray -> atan, sin 
using namespace std; //Namespace to the System Libraries

//User Libraries


//Global Constant 
const float PI=4*atan(1); //PI to to 7 significant digits 
const float CNVRDEG=PI/180;//Conversion from radians to degrees

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float deg=30;//30 degrees
    float rad;   //Declare the radian equivalent
    float result;//Result of the sin 
    float x=2;
    float y=3;
    float ze,zm;
    
    //Input data
    rad=deg*CNVRDEG;//Convert to radians
    
    //Process data
    result=sin(rad);
    ze=exp(y*log(x));
    zm=x*x*x;
    
    //Output the processed data
    cout<<"sin("<<deg<<")="<<result<<endl;
    cout<<"ze="<<x<<y<<" -> "<<ze<<endl;
    cout<<"zm="<<x<<"^"<<y<<" -> "<<zm<<endl;
    
    
    cout<<"Failure 1 gives #include < iostream>  //Input/Output LIbrary"<<endl;
    cout<<"Failure 2 gives #include iostream>   //Input/Output Library"<<endl;
    cout<<"Failure 3 leaving int out from int main gives no error"<<endl;
    cout<<"Failure 4 misspell main to min In function `main':"<<endl;
    cout<<"Failure 5 missing ( int main int argc, char** argv) {"<<endl;
    cout<<"Failure 6 missing o from cout  cut"<<endl;
            
    //Exit Stage Right
    
    return 0;
}


