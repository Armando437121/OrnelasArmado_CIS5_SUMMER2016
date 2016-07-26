/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 28, 2016, 4:23 PM
 * Purpose: Temperature Conversion 
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std; //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float ceq,cintrp,f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Input data
    cout<<"Input the temperature in degree fahrenheit";
    cout<<" for conversion to celsius"<<endl;
    cin>>f;
    
    //Process data
    ceq=(f-32)*5/9;//Linear equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);//Similar Triangles or linear interpolation
    
    //Output data
    cout<<f<<" Deg Fahrenheit = "<<ceq<<" deg centigrade"<<endl;
    cout<<f<<" Deg Fahreheit = "<<cintrp<<" deg centigrade"<<endl;
    
    
    //Exit Stage Right
    return 0;
}


