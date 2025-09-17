#include<iostream>
#include<string>
#include <cmath>//for math functions
using namespace std;

int main(){

    /*
    //math reference
    string math_url = "https://www.w3schools.com/cpp/cpp_ref_math.asp";
    cout<<"link to get math refernces "<<math_url<<endl;
    cout<<"--------------------------------"<<endl;

    cout<< max(50,30);//max
    cout<<endl;

    cout<< min(20,50);//min
    cout<<endl;

    cout<< sqrt(81);//square root
    cout<<endl;

    cout<< round(5.49);//rounding off
    cout<<endl;

    cout<< log(2);//log
    cout<<endl;

    //Less than: a < b
    //Less than or equal to: a <= b
    //Greater than: a > b
    //Greater than or equal to: a >= b
    //Equal to a == b
    //Not Equal to: a != b
    cout<<"-------------------------------"<<endl;

    //boolean values
    //example in datatypes.cpp
    cout<<(10>5);//true
    cout<<endl;

    int x=10;
    cout<<(x==20);//false
    cout<<endl;

    */

    //if else statement
    //example in datatypes.cpp
    int myage{19};
    int votingage{18};

    if (myage >= votingage){// if is true
        cout<<"Old enough to vote!"<<endl;
    }
    else{// if is false
        cout<<"not old enough to vote!"<<endl;
    }
    cout<<"----------------------------"<<endl;

    cout<<boolalpha;//to print boolean values as true or false instead of 1 or 0
    cout<<(10>5);//bracket are important
    cout<<endl;



}