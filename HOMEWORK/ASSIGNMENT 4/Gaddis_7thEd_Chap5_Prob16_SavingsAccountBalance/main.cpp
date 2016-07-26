/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 8, 2016, 10:04 PM
 * Purpose:  Savings Account Balance
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float annRate,//Annual interest rate
          startBal,//Starting balance in savings account
          mnthsPas,//Months that have passed since the account was established 
          monIrate;//Monthly interest rate  
    
    //Input Data
    cout<<"Please enter the annual interest rate";
    cout<<", starting balance, and the number of months"<<endl;
    cin>>annRate>>startBal>>mnthsPas;
    
    //Process the Data
    annRate/=100.0f;//Convert percent to decimal
    monIrate=annRate/12.0f;//
    
    //Loop to display the result
    float monyDep=0,//Moneys deposited
          finBal=0,//Balance at the end of the period of time
          intEarn=0,//Interest the money has earned
          newBal=0,//New balance
          totDep=0,//Total amount deposited 
          totWit=0,//Total amount withdrawn
          totIrate=0,//Total interest earned
          monyWit=0;//Moneys withdrawn
    int month=1,num=1;
    do{
        
        cout<<"Enter moneys deposited for month "<<num<<endl;
        cin>>monyDep;//Money deposited into the account
        while(monyDep<0){
            cout<<"Enter a valid amount deposited for month "<<num<<endl;
            cin>>monyDep;
        }
        cout<<"Enter moneys withdrawn for month "<<num<<endl;
        cin>>monyWit;//Money taken out of the account
        while(monyWit<0){
            cout<<"Enter a valid amount withdrawn for month "<<num<<endl;
            cin>>monyWit;
        }
        newBal=intEarn+startBal+monyDep+totDep-totWit-monyWit;//Balance after monthly transactions
        intEarn=monIrate*newBal;//Interest earned at the end of the month
        totIrate+=intEarn;//Total amount of interest earned
        totDep+=monyDep;//Total amount deposited
        totWit+=monyWit;//Total amount withdrawn
        num++;
        month++;

    }while(month<=mnthsPas);
    finBal=totIrate+startBal+totDep-totWit;
    int pennies=finBal*100+0.5;//Round to the nearest penny
    finBal=pennies/100.0f;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final balance in the account is $ "<<setw(6)<<finBal<<endl;
    cout<<"Total amount of withdrawals is  $ "<<setw(6)<<totWit<<endl;
    cout<<"Total amount of deposits is     $ "<<setw(6)<<totDep<<endl;
    cout<<"Total interest earned is        $ "<<setw(6)<<totIrate<<endl;
   
    //Exit Stage Right!
    return 0;
}