/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 7, 2016, 10:56 PM
 * Purpose:  Sum of Numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int sum=0,num; //Number entered
    
    //Loop the process
    char answer;
    do{
        //Input Data
        //Prompt user for the number
        cout<<"Please enter a positive number"<<endl;
        cin>>num;

        if(num<0){
            cout<<"Enter a positive integer"<<endl;
        }else{
            //Process the Data
            //Loop used to add up all of the numbers
            for(int i = 1; i <= num; i++){
                sum+=i;//Accumulate the running total
            }
            //Output the processed Data
            //Dispaly the total number
            cout<<"The total is "<<sum<<endl;
        }
        cout<<endl<<"Would you like to run this again type Y for yes"<<endl;
        cin>>answer;
    }while(answer=='Y');
    //Exit Stage Right!
    return 0;
}