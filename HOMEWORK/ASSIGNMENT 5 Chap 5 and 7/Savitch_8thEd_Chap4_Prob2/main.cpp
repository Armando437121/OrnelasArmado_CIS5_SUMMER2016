/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 08, 2016, 3:22 PM
 * Purpose:  Calculating Gas Mileage
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float litGas=0.264179;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float liters;//Number of Liters of Gas consumed by the car
    float galGas;//liters converted into Gallons
    int nMiles;//Number Of Miles Car was driven
    float gasMil;//miles per Gallon
    float secLit;
    int secMil;
    float sgalGas;
    float sgasMil;
    
    //Input Data
    cout<<"Input the Amount of Liters First car Consumed"<<endl;
    cin>>liters;
    cout<<"Input the Number of Miles First car has been Driven"<<endl;
    cin>>nMiles;
    cout<<"Input the Amount of Liters the Second car Consumed"<<endl;
    cin>>secLit;
    cout<<"Input the Number of Miles the Second car has been Driven"<<endl;
    cin>>secMil;
    
    //Process the Data
    galGas=liters*litGas;
    sgalGas=secLit*litGas;
    gasMil=nMiles/galGas;
    sgasMil=secMil/sgalGas;
    
    if (gasMil>sgasMil)
        cout<<"First car is the Most Fuel Efficient"<<endl;
    else{
        cout<<"Second car is the Most Fuel Efficient"<<endl;
    }
    
          
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<gasMil<<" Miles Per Gallon : First Car"<<endl;
    cout<<sgasMil<<" Miles Per Gallon : Second Car"<<endl;
    
    //Exit Stage Right!
    return 0;
}