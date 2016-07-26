/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 11th, 2016, 1:20 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int random(int,int);//Random number with a begin and end point
void filAray(int [],int);//Ordered Random 4 digit numbers
void prntAry(int [],int,int);
int binSrch(int [],)
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    
    //Input Data
    filAray(array,SIZE);
    //Process the Data
    
    //Output the processed Data
    prntAry(array,SIZE,10);
    
    //Exit Stage Right!
    return 0;
}

int binSrch(int a[],int n,int val){
   //Declare Variables 
    int beg=0, end=n-1;
    //Loop until we find
    do{
        int middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else(a[middle]<val)
                end=middle;     
    }while(end>=beg);
    return -1;
}




int linSrch(int a[],)




void prntAry(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}


void filAray(int a[],int n)
{
    int step=10;
    for(int i=0, beg=1000;i<n;i++,beg+=step){
        a[i]=trandom(beg,beg+step);
    }
}



int random(int beg,int end)
{
    return rand()%(end-beg+1)+beg;
}
