/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
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
   float start_min = 0.0, //Starting time
         end_min = 30.0,  //Ending time
         increment = 5; //Increment time
   float conversion_factor = 3.9;
    
    
    
    //Variables 
   float min;   //To hold calories per minute
   float cal;   //To hold minutes  per calories     
    
   //Set the numeric output formatting.
    cout<<fixed<<setprecision(1.5)<<endl;
   
    
   //Display the table headings
   cout<<"min\tcal\n";
   cout<<"___________\n";
    
   //Display the speeds.
   for(min = start_min; min <= end_min; min += increment)
   {
      //Calculate cal
       cal = min * conversion_factor;
       
      //Display the calories in minutes.
       cout << min << "\t" << cal << endl;
   }
    
    //Output the processed Data
     
   
    
    
    //Exit Stage Right!
    return 0;
}