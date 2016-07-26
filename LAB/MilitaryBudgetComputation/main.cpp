/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 22, 2016, 12:51 PM
 * Purpose:  Calculating the Military Budget
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int CNVPERC=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milBudg=585e9f; //http://www.defense.gov/News/Special-Reports/FY16-Budget
    float fedBudg=3.8e12f;//https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    float percent;
    const int SIZE=81;
    char guess[SIZE];
    
    //Input Data
    cout<<"Guess the percentage of the Federal Budget attributed to the Military"<<endl;
    cin.getline(guess,SIZE);
    
    //Process the Data
    percent=milBudg/fedBudg*static_cast<float>(CNVPERC);
    
    //Output the processed Data
    cout<<"The Military Budget = $"<<milBudg<<endl;
    cout<<"The Federal Budget = $"<<fedBudg<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The military budget percentage = "<<percent<<"%"<<endl;
    cout<<"Your guess was = "<<guess<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}