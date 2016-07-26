/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July  1, 2016, 11:00 AM
 * Purpose:  Calculate amount of discount
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //Manip Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float totCost=0, perDis, untSold; //The cost of units sold
    
    //Input Data
    cout<<"Enter the number of units sold"<<endl;
    cin>>untSold;
    
    //Process the Data
    if (untSold >=10)
    {
        perDis=untSold*0.20*99;
        totCost=untSold*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCost<<endl;
    }
    else if (untSold >=20)    
    {
        perDis=untSold*0.30*99;
        totCost=untSold*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCost<<endl;
    }
    else if (untSold >=50)
    {
        perDis=untSold*.40*99;
        totCost=untSold*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCost<<endl;
    }
    else if (untSold >=100)
    {
        perDis=untSold*.50*99;
        totCost=untSold*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCost<<endl;
    }
    else
    {
        totCost=untSold*99;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCost<<endl;
    }
    //Exit Stage Right!
    return 0;
}