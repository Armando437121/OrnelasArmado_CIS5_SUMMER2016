/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Cross It
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void xEven(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int n,beg=3,end=50;
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    for(int n=beg;n<=end;n++){
        if(n%2){//Odd
            //top
            for(int i=1,j=n,j2=n-2;i<=n/2;i++,j--,j2-=2){
                cout<<setw(i+1)<<j<<setw(j2+1)<<i<<endl;
            }
            //middle
            cout<<setw(n/2+2)<<n/2+1<<endl;
            //bottom
            for(int i=n/2+2,j=n/2,jp2=2;i<=n;i++,j--,jp2+=2){
                cout<<setw(j+1)<<i<<setw(jp2)<<j<<endl;
            }
        }else{//Even
            //top
            int big=0;
            if(n/2>=9)big=1;
            for(int i=1,j=n,j2=n-2;i<=n/2;i++,j--,j2-=2){
                cout<<setw(i+1)<<i<<setw(j2+1+big)<<j<<endl;
            }
            //bottom
            for(int i=n/2+1,j=n/2,jp2=1;i<=n;i++,j--,jp2+=2){
                cout<<setw(j+1)<<j<<setw(jp2+big)<<i<<endl;
            }
        }
        cout<<endl;
    }
    //Exit Stage Right!
    return 0;
}