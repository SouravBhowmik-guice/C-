#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float num1 = 1.22376332737979;
    cout<<setprecision(6)<< num1 << endl ;

    double num2 = 12.79879438794879;
    cout<<setprecision(12)<< num2 << endl ;

    long double num3 = 1.89473478734873456789;
    cout<<setprecision(18)<< num3 << endl ;

    return 0;

    
}