#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main(){
// Factorial of a number 
//     0! = 1 by definition
//     1! = 1 by definition
//     n! = (n-1)
int a;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"The factorial of "<<a<<" is " <<factorial(a)<<endl;
    return 0;
}