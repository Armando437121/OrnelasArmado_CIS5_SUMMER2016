/* 
 * File:   main.cpp
 * Author: Armando Ornelas
 * Created on July 11th, 2016, 3:34 AM
 * Purpose: Main Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Library
#include <cstdlib>   //
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants - PI, Gravity, Conversions
const float litGas=0.264179;

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            case '7':prob7();break;
            case '8':prob8();break;
            case '9':prob9();break;
            case '10':prob10();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='10');
    
    //Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 1
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 1
void prob1(){
    cout<<"You are entering Problem 1"<<endl; 
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
            //Display the total number
            cout<<"The total is "<<sum<<endl;
        }
        cout<<endl<<"Would you like to run this again type Y for yes"<<endl;
        cin>>answer;
    }while(answer=='Y');
   
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 2
void prob2(){
    cout<<"You are entering Problem 2"<<endl; 
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
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;   
     //Declare Variables
    float ocnRise,//The level at which the ocean is rising
            time;//The years
    
    //Process the Data and output simultaneously
    cout<<"Ocean level rise in mm per year"<<endl;
    cout<<"Years      mm"<<endl;
    for(int year=1;year<=25;year++){
        ocnRise=1.5*year;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(3)<<year<<"\t"<<setw(5)<<ocnRise<<endl;
    }
    
    //Output the processed Data
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;  
    //Declare Variables
   float startMin = 0.0, //Starting time
         endMin = 30.0,  //Ending time
         incrmnt = 5;    //Increment time
   float cnvfact = 3.9;  //Used to convert Calories Burned
    
    
    
    //Variables 
   float min;   //To hold calories per minute
   float cal;   //To hold minutes  per calories     
    
   //Set the numeric output formatting.
    cout<<fixed<<setprecision(1.5)<<endl;
   
    
   //Display the table headings
   cout<<"min\tcal\n";
   cout<<"_____________\n";
    
   //Display the speeds.
   for(min = startMin; min <= endMin; min += incrmnt)
   {
      //Calculate cal
       cal=min*cnvfact;
       
      //Display the calories in minutes.
       cout<<setw(4)<< min<<"\t"<<setw(5)<<cal<<endl;
   }
    
    //Output the processed Data 
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 5
void prob5(){
    cout<<"You are entering Problem 5"<<endl; 
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
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 6
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl; 
     //Declare Variables
    int pennies=1;//Initial pay per day
    int payDay=0;//Pay at the end of the month
    
    //Input Data
    
    //Process the Data
    for(int day =1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(10)<<pennies/100.0f;
        cout<<" Pay earned $"<<setw(12)<<payDay/100.0f<<endl;
        pennies*=2;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 7
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 7
void prob7(){
    cout<<"You are entering Problem 7"<<endl;  
    //Loop created for Ascii code
    for(unsigned char i=0;i<=127;i++){
        cout<<"Ascii Code = "<<static_cast<int>(i)<<" = Character = "<<i<<endl;
    }
    for(unsigned char i=0;i<=127;i++){
        cout<<i;
        if(i%16==15)cout<<endl;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 8
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 8
void prob8(){
    cout<<"You are entering Problem 8"<<endl; 
    //Declare Variables
    float liters=0;//Number of Liters of Gas consumed by the car
    float galGas=0;//liters converted into Gallons
    int nMiles=0;//Number Of Miles Car was driven
    int gasMil=0;//miles per Gallon
    
    
    //Input Data
    cout<<"Input the Number of Liters car consumed"<<endl;
    cin>>liters;
    cout<<"Input the Number of Miles car has been Driven"<<endl;
    cin>>nMiles;
    
    //Process the Data
    galGas=liters*litGas;
    gasMil=nMiles/galGas;
    
    //Output the processed Data
    cout<<gasMil<<" Miles Per Gallon "<<endl;
    
}
       
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 9
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 9
void prob9(){
    cout<<"You are entering Problem 9"<<endl; 
     //Declare Variables
    float liters;//Number of Liters of Gas consumed by the car
    float galGas;//liters converted into Gallons
    int nMiles;//Number Of Miles Car was driven
    float gasMil;//miles per Gallon
    float secLit;
    int secMil;
    float sgalGas;
    float sgasMil;
    
    //Input Data
    cout<<"Input the Amount of Liters First car Consumed"<<endl;
    cin>>liters;
    cout<<"Input the Number of Miles First car has been Driven"<<endl;
    cin>>nMiles;
    cout<<"Input the Amount of Liters the Second car Consumed"<<endl;
    cin>>secLit;
    cout<<"Input the Number of Miles the Second car has been Driven"<<endl;
    cin>>secMil;
    
    //Process the Data
    galGas=liters*litGas;
    sgalGas=secLit*litGas;
    gasMil=nMiles/galGas;
    sgasMil=secMil/sgalGas;
    
    if (gasMil>sgasMil)
        cout<<"First car is the Most Fuel Efficient"<<endl;
    else{
        cout<<"Second car is the Most Fuel Efficient"<<endl;
    }
    
          
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<gasMil<<" Miles Per Gallon : First Car"<<endl;
    cout<<sgasMil<<" Miles Per Gallon : Second Car"<<endl;
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 10
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 10
void prob10(){
    cout<<"You are entering Problem 10"<<endl;   
    //Declare Variables
    
    //Input Data
    
    //Process the Data and output
    for (int bottles=99;bottles>=1;bottles--){
        //Calculate tens and ones
        int nTens=(bottles-bottles%10)/10;//Gives the number of tens
        int nOnes=bottles-nTens*10;//Number of 1's
        for(int times=1;times<=3;times++){
            if(times==3){
            int temp=bottles-1;
            nTens=(temp-temp%10)/10;//Number of tens
            nOnes=temp-nTens*10;//Number of 1's
        }
        switch(nTens){
            case 9:cout<<"Ninety ";break;
            case 8:cout<<"Eighty ";break;
            case 7:cout<<"Seventy ";break;
            case 6:cout<<"Sixty ";break;
            case 5:cout<<"Fifty ";break;
            case 4:cout<<"Forty ";break;
            case 3:cout<<"Thirty ";break;
            case 2:cout<<"Twenty ";break;
            case 1:{
                switch(nOnes){
                    case 0:cout<<"Ten ";break;
                    case 1:cout<<"Eleven ";break;
                    case 2:cout<<"Twelve ";break;
                    case 3:cout<<"Thirteen ";break;
                    case 4:cout<<"Fourteen ";break;
                    case 5:cout<<"Fifteen ";break;
                    case 6:cout<<"sixteen ";break;
                    case 7:cout<<"seventeen ";break;
                    case 8:cout<<"Eighteen ";break;
                    case 9:cout<<"Nineteen ";break;
                }    
            }
        }
        if(nTens!=1){
            switch(nOnes){
                    case 0:if(nTens==0)cout<<"Zero ";break;
                    case 1:cout<<"One ";break;
                    case 2:cout<<"Two ";break;
                    case 3:cout<<"Three ";break;
                    case 4:cout<<"Four ";break;
                    case 5:cout<<"Five ";break;
                    case 6:cout<<"Six ";break;
                    case 7:cout<<"Seven ";break;
                    case 8:cout<<"Eight ";break;
                    case 9:cout<<"Nine ";break;
                }    
            }
            if(times==1||times==3)cout<<" bottles of beer on the wall, "<<endl;
            else if (times==2){
                cout<<" bottles of beer."<<endl;
                cout<<"You take one down and pass it around "<<endl;
            }else{
                cout<<" bottles of beer on the wall."<<endl;
            }
        }
        cout<<endl;
    }
        
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 MENU
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - The Menu
void menu(){
    cout<<"Menu Program for Gaddis Chap 5 problems for 1 to 10"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl; 
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
}
