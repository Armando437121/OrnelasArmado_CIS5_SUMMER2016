/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 8, 2016, 12:27 PM
 * Purpose:  Ascii codes
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Loop created for Ascii code
    for(unsigned char i=0;i<=127;i++){
        cout<<"Ascii Code = "<<static_cast<int>(i)<<" = Character = "<<i<<endl;
    }
    for(unsigned char i=0;i<=127;i++){
        cout<<i;
        if(i%16==15)cout<<endl;
    }
    return 0;
}