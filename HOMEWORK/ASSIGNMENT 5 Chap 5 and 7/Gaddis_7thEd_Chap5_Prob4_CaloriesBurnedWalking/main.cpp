/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 9,, 2016, 3:50 PM
 * Purpose:  Calories Burned on the Treadmill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formant Libraries
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   float startMin = 0.0, //Starting time
         endMin = 30.0,  //Ending time
         incrmnt = 5;    //Increment time
   float cnvfact = 3.9;  //Used to convert Calories Burned
    
    
    
    //Variables 
   float min;   //To hold calories per minute
   float cal;   //To hold minutes  per calories     
    
   //Set the numeric output formatting.
    cout<<fixed<<setprecision(1.5)<<endl;
   
    
   //Display the table headings
   cout<<"min\tcal\n";
   cout<<"_____________\n";
    
   //Display the speeds.
   for(min = startMin; min <= endMin; min += incrmnt)
   {
      //Calculate cal
       cal=min*cnvfact;
       
      //Display the calories in minutes.
       cout<<setw(4)<< min<<"\t"<<setw(5)<<cal<<endl;
   }
    
    //Output the processed Data 
    
    //Exit Stage Right!
    return 0;
}