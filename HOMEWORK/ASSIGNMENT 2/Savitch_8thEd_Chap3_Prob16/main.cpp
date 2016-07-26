/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 30, 2016, 7:44 PM
 * Purpose:  Temperature Celsius Equal to Fahrenheit
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>    //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    int cel=100,cel1,cel2,cel3,cel4,cel5,cel6,cel7;//Temps in Celsius
    float temFahr; //Corresponding Temps in Fahrenheit 
    
    //Input Data
    
    
    //Process the Data
    //First Row
    temFahr=(((9*cel)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;

    //Second Row
      cel1=(cel-20);
    temFahr=(((9*cel1)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel1<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;
    
    //Third Row
      cel2=(cel1-20);
    temFahr=(((9*cel2)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel2<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;

    //Fourth Row
      cel3=(cel2-20);
    temFahr=(((9*cel3)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel3<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;
    //Fifth Row
      cel4=(cel3-20);
    temFahr=(((9*cel4)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel4<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;

    //Sixth Row
      cel5=(cel4-20);
    temFahr=(((9*cel5)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel5<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;

    //Seventh Row
      cel6=(cel5-20);
    temFahr=(((9*cel6)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel6<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;

//Second Row
      cel7=(cel6-20);
    temFahr=(((9*cel7)/5)+32);
    
    //Output the processed Data
cout<<setw(4)<<cel7<<" Celsius "<<setw(5)<<temFahr<<" Fahrenheit "<<endl;
    
    //Exit Stage Right!
    return 0;
}