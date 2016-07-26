/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on June 27, 2016, 3:00 PM
 * Purpose:  Geometry Calculator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manip Linbrary
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;//Character used for switch
    
    //Input Data
    //Ask the user what they would like to calculate
    cout<<"Geometry Calcualor"<<endl;
    cout<<"Which shape would you like to calculate"<<endl;
    cout<<"Type 1 for area of a circle"<<endl;
    cout<<"Type 2 for the area of a rectangle"<<endl;
    cout<<"Type 3 for the area of a triangle"<<endl;
    cout<<"Type 4 to quit"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case'1':{
            //Declare Variables
            unsigned int radi;
            float area, pii=3.14159;
           
            //Input data
            cout<<"Input the radius of the circle"<<endl;
            cin>>radi;
                    
            //Process the data
            area=radi*pii;
        //Output the data
        cout<<fixed<<setprecision(3)<<showpoint;    
        cout<<"The area of the circle is "<<area<<endl;
        //Exit the switch
        break;
        }
        case'2':{
            //Declare Variables
            float area,width,length;
        
            //Input the data
            cout<<"Input the width and length of the rectangle seperated by a space"<<endl;
            cin>>width>>length;
        
            //Process the data
            area=width*length;
        
           //Output the data
           cout<<fixed<<setprecision(3)<<showpoint;
           cout<<"The area of the rectangle is "<<area<<endl;
           //Exit the switch
           break;
        }
        case '3':{
            //Declare Variables
            float base,area,height;
            
            //Input the data
            cout<<"Input the base and height of the triangle"<<endl;
            cin>>base>>height;
            
            //Process the data
            area=base*height*0.5;
            
            //Output the data
            cout<<fixed<<setprecision(3)<<showpoint;
            cout<<"The area of the triangle is "<<area<<endl;
            //Exit the switch
            break;
                   
        }
        case '4':{
            cout<<"The program has quit"<<endl;
            //Exit the switch
            break;
        }
        default:cout<<"Not an option in the menu"<<endl;
}
    
    
    //Exit Stage Right!
    return 0;
}