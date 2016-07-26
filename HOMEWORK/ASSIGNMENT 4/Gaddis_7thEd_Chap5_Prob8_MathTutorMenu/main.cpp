/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 9, 2016, 5:03 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manip Linbrary
#include <ctime>     //Time library to set the random number seed
#include <cstdlib>   //Random number library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Loop the process
    char answer;
    do{
        //Declare Variables
        char choice;//Character used for switch

        //Input Data
        //Ask the user what they would like to calculate
        cout<<"Math Game"<<endl;
        cout<<"Which operation would you like to play?"<<endl;
        cout<<"Type 1 for addition problem"<<endl;
        cout<<"Type 2 for subtraction problem"<<endl;
        cout<<"Type 3 for multiplication problem"<<endl;
        cout<<"Type 4 for division problem"<<endl;
        cout<<"Type 5 to quit the problem"<<endl;
        cin>>choice;
    
        //Process the Data
        switch(choice){
            case'1':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                float random1, random2, result;
                float answer;

                //Input data
                random1=rand()%900+100;//Random 3 digit number
                random2=rand()%900+100;//Random 3 digit number
                result=random1+random2;

                //Display the problem
                cout<<"Calculate the result of the following problem!"<<endl;
                cout<<"Line up and type the result"<<endl;
                cout<<"   "<<random1<<endl;
                cout<<" + "<<random2<<endl;
                cout<<"-------"<<endl;
                cin>>answer;
                //Output and Process the Data
                if(result-answer==0){
                    cout<<endl<<"Your answer is correct!"<<endl;
                }else{
                    cout<<endl<<"Wrong the answer was "<<result<<endl;
                }
            //Exit the switch
            break;
            }
            case'2':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                float random1, random2, result;
                float answer;

                //Input data
                random1=rand()%900+100;//Random 3 digit number
                random2=rand()%900+100;//Random 3 digit number
                result=random1-random2;

                //Display the problem
                cout<<"Calculate the result of the following problem!"<<endl;
                cout<<"Line up and type the result"<<endl;
                cout<<"   "<<random1<<endl;
                cout<<" - "<<random2<<endl;
                cout<<"-------"<<endl;
                cin>>answer;
                
                //Output and Process the Data
                if(result-answer==0){
                    cout<<endl<<"Your answer is correct!"<<endl;
                }else{
                    cout<<endl<<"Wrong the answer was "<<result<<endl;
                }
                //Exit the switch
               break;
            }
            case '3':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                float random1, random2, result;
                float answer;

                //Input data
                random1=rand()%90+10;//Random 2 digit number
                random2=rand()%9+1;//Random 1 digit number
                result=random1*random2;

                //Display the problem
                cout<<"Calculate the result of the following problem!"<<endl;
                cout<<"   "<<random1<<"*"<<random2<<endl;
                cin>>answer;

                //Output and Process the Data
                if(result==answer){
                    cout<<endl<<"Your answer is correct!"<<endl;
                }else{
                    cout<<endl<<"Wrong the answer was "<<result<<endl;
                }
                //Exit the switch
                break;

            }
            case '4':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                float random1, random2, result;
                float answer;

                //Input data
                random1=rand()%90+10;//Random 2 digit number
                random2=rand()%9+1;//Random 1 digit number
                cout<<fixed<<setprecision(2)<<endl;
                result=random1/random2;

                //Display the problem
                cout<<"Calculate the result of the following problem!"<<endl;
                cout<<"   "<<random1<<'/'<<random2<<endl;
                cin>>answer;

                //Output and Process the Data
                if(result==answer){
                    cout<<endl<<"Your answer is correct!"<<endl;
                }else{
                    cout<<endl<<"Wrong the answer was "<<result<<endl;
                }
                //Exit the switch
                break;
            }
            case '5':{
                cout<<"The program has quit"<<endl;
                break;
            }
            default:cout<<"Not an option in the menu"<<endl;
}
        cout<<"Would you like to run the program again?"<<endl;
        cout<<"Type Y to run"<<endl;
        cin>>answer;
    
    }while(answer=='Y'||answer=='y'); 
    //Exit Stage Right!
    return 0;
}