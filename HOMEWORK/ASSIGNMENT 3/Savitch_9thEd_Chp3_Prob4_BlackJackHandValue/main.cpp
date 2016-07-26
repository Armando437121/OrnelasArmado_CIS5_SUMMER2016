/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 30, 2016, 1:41 PM
 * Purpose:  Black Jack Hand Value
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char card;
    int value=0,excess=0;

    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
   
    //Evaluate First Card
    switch(card) {
         case 'K':
         case 'Q':
         case 'J':
         case 'T':value+=10;break;
         case '9':
         case '8':
         case '7':
         case '6':  
         case '5':
         case '4':
         case '3':
         case '2':value+=(card-48);break;
         case 'A':value+=11;excess=10; 
    }
  
     //Output the value
    cout<<"the Value of the had at this point = "<<value<<endl;
   
  cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
  cin>>card;
    
  //Evaluate Second Card 
  switch (card){
         case 'K':
         case 'Q':
         case 'J':
         case 'T':value+=10;break;
         case '9':
         case '8':
         case '7':
         case '6':  
         case '5':
         case '4':
         case '3':
         case '2':value+=(card-48);break;
         case 'A':value+=11;excess=10; 
    }
    if (value>21)value-=excess;
     
    cout<<"the Value of the had at this point = "<<value<<endl;     
  
    
  cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
  cin>>card;
    
  //Evaluate Third Card 
  switch (card){
         case 'K':
         case 'Q':
         case 'J':
         case 'T':value+=10;break;
         case '9':
         case '8':
         case '7':
         case '6':  
         case '5':
         case '4':
         case '3':
         case '2':value+=(card-48);break;
         case 'A':value+=11;excess=10; 
    }
    if (value>21)value-=excess;
     
    cout<<"the Value of the had at this point = "<<value<<endl;  

    //Exit Stage Right!
    return 0;
}