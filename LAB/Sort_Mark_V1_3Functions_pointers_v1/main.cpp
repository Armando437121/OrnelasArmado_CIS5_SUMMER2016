/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 20th, 2016, 6:50 PM
 * Purpose:  Mark Sort based upon finding the smallest value
 *           in successive smaller lists
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
void filAray(int [],int);//Ordered Random 4 digit numbers
void prntAry(int [],int,int);
void swap(int &,int &);
void smlnlst(int [],int,int);
void markSrt(int [],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Input Data
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
    
    //Process the Data
    markSrt(array,SIZE);
    
    //Output the processed Data
    prntAry(array,SIZE,10);
    
    //Exit Stage Right!
    return 0;
}
void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        smlnlst(a,n,i);
    }
}

void smlnlst(int *a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    //Logical swap
    a=a^b;
    b=a^b;
    a=a^b;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    //Declare variables
    int step=10;
    for(int i=0,beg=1000;i<n;i++,beg+=step){
        a[i]=rand()%90+10;//[10,99]
    }
}