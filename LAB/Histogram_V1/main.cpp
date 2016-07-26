/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
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
    char n1,n2,n3,n4;

    //Input Data
    cout<<"Input a 4 digit number"<<endl;
    cin>>n1>>n2>>n3>>n4;
    
    //Process the Data
    
    //Output the processed Data
    cout<<n4<<" ";
    if(n4>=48&&n4<=57){
        for(int i=1;i<=n4-48;i++){cout<<'*';}
        cout<<endl;
    }else cout<<'?'<<endl;
    
    cout<<n3<<" ";
    if(n3>='0'&&n3<='9'){
        for(int i=1;i<=n3-'0';i++){cout<<'*';}
        cout<<endl;
    }else cout<<'?'<<endl;
    
    cout<<n2<<" ";
    if(n2>=48&&n2<=57){
        for(int i=1;i<=n2-48;i++){cout<<'*';}
        cout<<endl;
    }else cout<<'?'<<endl;
    
    cout<<n1<<" ";
    if(n1>='0'&&n1<='9'){
        for(int i=1;i<=n1-'0';i++){cout<<'*';}
        cout<<endl;
    }else cout<<'?'<<endl;
    
    //Exit Stage Right!
    return 0;
}