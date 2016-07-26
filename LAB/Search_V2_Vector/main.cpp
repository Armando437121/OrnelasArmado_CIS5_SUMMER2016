/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 20th, 2016, 9:05 PM
 * Purpose:  Search
 *           Linear and Bisection Method
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
#include <vector>    //Vector
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int  random(int,int);//Random number with a begin and end point
void filAray(vector<int> &);//Ordered Random 4 digit numbers
void prntAry(vector<int> &,int);
int  linSrch(vector<int> &,int);
int  binSrch(vector<int> &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    vector<int> array(SIZE);
    int value,lindx,bindx;
    
    //Input Data
    filAray(array);
    prntAry(array,10);
    cout<<"What value would you like to find?"<<endl;
    cin>>value;
    
    //Process the Data
    lindx=linSrch(array,value);
    bindx=binSrch(array,value);
    
    //Output the processed Data
    if(lindx==-1)cout<<"Linear Value not found"<<endl;
    else cout<<"Linear Value found at index = "<<lindx<<endl;
    if(bindx==-1)cout<<"Binary Value not found"<<endl;
    else cout<<"Binary Value found at index = "<<bindx<<endl;
    
    //Exit Stage Right!
    return 0;
}

int  binSrch(vector<int> &a,int val){
    //Declare variables
    int beg=0,end=a.size()-1;
    //Loop until we find
    do{
        int middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}

int  linSrch(vector<int> &a,int val){
    for(int i=0;i<a.size();i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(vector<int> &a){
    //Declare variables
    int step=10;
    for(int i=0,beg=1000;i<a.size();i++,beg+=step){
        a[i]=random(beg,beg+step);
    }
}

int random(int beg,int end){
    return rand()%(end-beg+1)+beg;
}